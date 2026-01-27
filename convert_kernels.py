#!/usr/bin/env python3
import argparse
import shutil
import subprocess
from pathlib import Path

# // Core: RISCV-EC-v1.0.0
# Converts all .c kernels under the input directory to RISC-V assembly using the selected GCC toolchain.

def find_toolchain(explicit: str | None) -> str:
    if explicit:
        return explicit
    for candidate in [
        "riscv64-unknown-elf-gcc",
        "riscv32-unknown-elf-gcc",
        "riscv64-linux-gnu-gcc",
        "riscv32-linux-gnu-gcc",
    ]:
        if shutil.which(candidate):
            return candidate
    return ""


def compile_c_to_s(gcc: str, src: Path, out: Path, march: str, mabi: str, extra: list[str]) -> None:
    out.parent.mkdir(parents=True, exist_ok=True)
    cmd = [
        gcc,
        "-S",
        "-O0",
        f"-march={march}",
        f"-mabi={mabi}",
        "-ffreestanding",
        "-nostdlib",
        "-fno-builtin",
        "-o",
        str(out),
        str(src),
    ] + extra
    subprocess.run(cmd, check=True)


def main() -> int:
    parser = argparse.ArgumentParser(
        description="Convert C kernels to RISC-V assembly (.s) using a RISC-V GCC toolchain."
    )
    parser.add_argument("--input", default="Algorithms", help="Input directory with .c files")
    parser.add_argument("--output", default="Algorithms/rv32i", help="Output directory for .s files")
    parser.add_argument("--gcc", default=None, help="RISC-V GCC toolchain binary (e.g. riscv64-unknown-elf-gcc)")
    parser.add_argument("--march", default="rv32i", help="RISC-V ISA (default: rv32i)")
    parser.add_argument("--mabi", default="ilp32", help="RISC-V ABI (default: ilp32)")
    parser.add_argument("--extra", nargs="*", default=[], help="Extra flags passed to GCC")
    args = parser.parse_args()

    gcc = find_toolchain(args.gcc)
    gcc_path = shutil.which(gcc) if gcc else None
    if not gcc_path:
        raise SystemExit(
            "RISC-V GCC toolchain not found. Install one or pass --gcc, "
            "e.g. --gcc riscv64-unknown-elf-gcc"
        )

    input_dir = Path(args.input)
    output_dir = Path(args.output)

    if not input_dir.exists():
        raise SystemExit(f"Input directory not found: {input_dir}")

    c_files = list(input_dir.rglob("*.c"))
    if not c_files:
        raise SystemExit(f"No .c files found under: {input_dir}")

    for src in c_files:
        out = output_dir / (src.stem + ".s")
        compile_c_to_s(gcc, src, out, args.march, args.mabi, args.extra)
        print(f"{src} -> {out}")

    return 0


if __name__ == "__main__":
    raise SystemExit(main())
