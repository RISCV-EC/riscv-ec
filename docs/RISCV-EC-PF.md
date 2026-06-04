# RISCV-EC-v1.1.0-PF

RISCV-EC-v1.1.0-PF is an incremental frontend variant of RISCV-EC-v1.0.0 that keeps the original RV32I, no-cache, no-MMU design style and adds a small instruction prefetch buffer between the instruction ROM and the core fetch/decode path.

## Scope

- ISA remains RV32I-oriented.
- No instruction cache, data cache, MMU, TLB, Linux support, or advanced branch predictor is added.
- The core remains simple and readable.
- The new frontend is parameterized with `PREFETCH_DEPTH`, defaulting to 2 entries.

## Added Frontend

The new `instruction_prefetch_buffer` module stores prefetched instruction words with their byte PC. It issues sequential instruction memory requests while there is FIFO space, advances the prefetch PC by 4 bytes, and supplies the oldest valid instruction to the core.

On a taken branch, the top-level asserts `flush_i`, clears the FIFO, redirects the prefetch PC to the branch target, and discards stale instruction memory responses from the previous stream.

## Performance Counters

The top-level exports these 64-bit counters:

- `cycle_count`
- `instr_count`
- `imem_req_count`
- `imem_stall_count`
- `prefetch_hit_count`
- `prefetch_empty_count`
- `flush_count`
- `branch_count`
- `taken_branch_count`

`instr_count` increments when an instruction is accepted by the core frontend. `prefetch_empty_count` increments when the core requests an instruction but the frontend cannot provide one.

## Running

Build the base configuration:

```bash
make -C sim base
```

Build the prefetch configuration with the default depth:

```bash
make -C sim pf
```

Run all kernels with prefetch:

```bash
make -C sim run_all_pf
```

Run all kernels without prefetch:

```bash
make -C sim run_base
```

Generate a comparative benchmark table:

```bash
make -C sim benchmark
```

The benchmark runner writes `sim/benchmark_results.md`.

## Expected Behavior

RISCV-EC-v1.1.0-PF helps most when instruction memory has response latency and the executed instruction stream is mostly sequential. The FIFO can hide part of the fetch latency after the initial fill.

Frequent taken branches reduce the benefit because each redirect flushes prefetched sequential instructions and forces the FIFO to refill from the target PC.
