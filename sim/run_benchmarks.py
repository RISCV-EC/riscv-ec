#!/usr/bin/env python3
"""Run RISCV-EC-v1.0.0 vs RISCV-EC-v1.1.0-PF benchmarks."""

from __future__ import annotations

import argparse
import re
import subprocess
from pathlib import Path


RESULT_RE = re.compile(r"(\w+)=([^ ]+)")


def run(cmd: list[str], cwd: Path) -> str:
    completed = subprocess.run(
        cmd,
        cwd=cwd,
        check=True,
        text=True,
        stdout=subprocess.PIPE,
        stderr=subprocess.STDOUT,
    )
    return completed.stdout


def parse_result(output: str) -> dict[str, str]:
    result_line = ""
    for line in output.splitlines():
        if line.startswith("RESULT "):
            result_line = line
    if not result_line:
        raise RuntimeError(f"No RESULT line found in output:\n{output}")
    return dict(RESULT_RE.findall(result_line))


def run_one(sim_dir: Path, binary: Path, kernel: Path) -> dict[str, str]:
    output = run([str(binary), f"+KERNEL={kernel.as_posix()}"], cwd=sim_dir.parent)
    return parse_result(output)


def cpi(result: dict[str, str]) -> float:
    instructions = int(result["instructions"])
    if instructions == 0:
        return 0.0
    return int(result["cycles"]) / instructions


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--depth", type=int, default=2)
    parser.add_argument("--depth4", action="store_true", help="Also run RISCV-EC-v1.1.0-PF with DEPTH=4")
    args = parser.parse_args()

    sim_dir = Path(__file__).resolve().parent
    root_dir = sim_dir.parent
    kernels = sorted((root_dir / "Algorithms" / "rv32i").glob("*.s"))

    run(["make", "base"], cwd=sim_dir)
    run(["make", f"DEPTH={args.depth}", "pf"], cwd=sim_dir)
    if args.depth4 and args.depth != 4:
        run(["make", "DEPTH=4", "pf"], cwd=sim_dir)

    configs = [
        ("RISCV-EC-v1.0.0", sim_dir / "obj_dir_base" / "simv_base"),
        (f"RISCV-EC-v1.1.0-PF-D{args.depth}", sim_dir / f"obj_dir_pf_d{args.depth}" / f"simv_pf_d{args.depth}"),
    ]
    if args.depth4 and args.depth != 4:
        configs.append(("RISCV-EC-v1.1.0-PF-D4", sim_dir / "obj_dir_pf_d4" / "simv_pf_d4"))

    results: dict[tuple[str, str], dict[str, str]] = {}
    for config_name, binary in configs:
        for kernel in kernels:
            kernel_rel = kernel.relative_to(root_dir)
            results[(config_name, kernel.name)] = run_one(sim_dir, binary, kernel_rel)

    rows = [
        "| benchmark | ciclos base | instrucciones base | CPI base | ciclos RISCV-EC-v1.1.0-PF | instrucciones RISCV-EC-v1.1.0-PF | CPI RISCV-EC-v1.1.0-PF | mejora porcentual | flush_count | prefetch_empty_count |",
        "| --- | ---: | ---: | ---: | ---: | ---: | ---: | ---: | ---: | ---: |",
    ]

    pf_name = f"RISCV-EC-v1.1.0-PF-D{args.depth}"
    for kernel in kernels:
        base = results[("RISCV-EC-v1.0.0", kernel.name)]
        pf = results[(pf_name, kernel.name)]
        base_cpi = cpi(base)
        pf_cpi = cpi(pf)
        improvement = 0.0 if base_cpi == 0.0 else ((base_cpi - pf_cpi) / base_cpi) * 100.0
        rows.append(
            f"| {kernel.stem} | {base['cycles']} | {base['instructions']} | {base_cpi:.3f} | "
            f"{pf['cycles']} | {pf['instructions']} | {pf_cpi:.3f} | {improvement:.2f}% | "
            f"{pf['flush']} | {pf['prefetch_empty']} |"
        )

    table = "\n".join(rows)
    output_path = sim_dir / "benchmark_results.md"
    output_path.write_text(table + "\n", encoding="utf-8")
    print(table)
    print(f"\nWrote {output_path.relative_to(root_dir)}")


if __name__ == "__main__":
    main()
