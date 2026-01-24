
<img width="862" height="507" alt="RISCV-EC-v1 0" src="https://github.com/user-attachments/assets/5183dcd6-32d4-4fb0-a4b5-6f257f3d20bf" />


# RISCV-EC-v1.0
The first Ecuadorian open-source RISC-V soft processor for Edge Computing applications.  
This version corresponds to the architecture and performance analysis presented in the 2025 publication:  
**“Evaluating the RISCV-EC: A Comparative Analysis of Instruction Efficiency and Power Performance for Edge Computing.”**

---

## 📌 Contents
- Overview
- Microarchitecture
- Performance Evaluation
- Future Work
- Repository
- Simulation with Verilator and GTKWave
- Convert C Kernels to RISC-V Assembly
- Citation
- Authors

---

## 🧩 Overview
**RISCV-EC-v1.0** is a soft processor based on a **5-stage, multi-cycle, non-pipelined architecture** implemented in **VHDL** for FPGA devices.  
It executes each instruction in its entirety before proceeding to the next, focusing on **instruction efficiency**, **execution speed**, and **power-performance balance** for **edge computing** environments.

The processor is implemented and validated on a **Xilinx Zynq-7000 SoC FPGA**, maintaining clock parity with reference processors to ensure unbiased benchmarking.

---

## ⚙️ Microarchitecture
RISCV-EC follows the standard **RISC-V single-core ISA** and includes the following stages:

1. **Instruction Fetch (IF)** – Fetches instructions from 32-word ROM.  
2. **Instruction Decode (ID)** – Decodes opcode and operands; handles register and immediate values.  
3. **Execute (EX)** – Performs arithmetic and logical operations using the ALU.  
4. **Memory Access (MEM)** – Reads/writes data to the 256-word data memory.  
5. **Write Back (WB)** – Stores computed results into registers.

### Key Components
- **ALU:** Performs arithmetic and comparison operations (4-bit control).  
- **Register File:** 32 general-purpose registers (32-bit).  
- **Control Unit:** Handles instruction decoding and signal generation.  
- **Multiplexers:** Manage data flow between immediate values, registers, and memory.

---

## 🧾 ISA
The following RV32I instructions are implemented in this version. Instruction decode is in `rtl_sv/CU.sv` and ALU operations are in `rtl_sv/alu.sv`.

### R-type (opcode `0110011`)
- `ADD`, `SUB` (func3 `000`, func7 `0000000`/`0100000`)
- `SLL` (func3 `001`)
- `SLT` (func3 `010`)
- `SLTU` (func3 `011`)
- `XOR` (func3 `100`)
- `SRL`, `SRA` (func3 `101`, func7 `0000000`/`0100000`)
- `OR` (func3 `110`)
- `AND` (func3 `111`)

### I-type ALU (opcode `0010011`)
- `ADDI` (func3 `000`)
- `SLTI` (func3 `010`)
- `SLTIU` (func3 `011`)
- `XORI` (func3 `100`)
- `ORI` (func3 `110`)
- `ANDI` (func3 `111`)
- `SLLI` (func3 `001`)
- `SRLI`, `SRAI` (func3 `101`, func7 `0000000`/`0100000`)

### Loads (opcode `0000011`)
- `LB`, `LH`, `LW`, `LBU`, `LHU` (func3 `000`, `001`, `010`, `100`, `101`)

### Stores (opcode `0100011`)
- `SB`, `SH`, `SW` (func3 `000`, `001`, `010`)

### Branches (opcode `1100011`)
- `BEQ` (func3 `000`)
- `BLT` (func3 `100`)
- `BLTU` (func3 `110`)

---

## 📊 Performance Evaluation
Three benchmark algorithms were used to compare RISCV-EC with other processors:
- **Fibonacci Sequence**
- **Matrix Multiplication**
- **RGB to HSL Conversion**

### Compared Architectures and Clock Frequencies
| Processor | Architecture | Clock | Platform |
|------------|---------------|--------|------------|
| **RISCV-EC** | RISC-V 32-bit | 50 MHz | Zynq-7000 SoC FPGA |
| **ATmega328P** | 8-bit AVR | 16 MHz | Arduino Uno |
| **ARM Cortex-M0+** | 32-bit ARM | 125 MHz | Raspberry Pi Pico |
| **ARM Cortex-A9** | 32-bit ARM | 650 MHz | Zynq-7000 SoC |

### Main Findings
- RISCV-EC demonstrates **fewer executed instructions** compared to the AVR and ARM Cortex-M0+.  
- It achieves **better instruction efficiency** in serial algorithms such as Fibonacci and matrix multiplication.  
- **Dynamic power consumption:** ~2.0 mW (FPGA, 50 MHz).  
- **Logic utilization:** <4% LUTs on Zynq-7000, suitable for low-resource FPGAs.  
- Although non-pipelined, RISCV-EC achieves a **balanced trade-off between performance and energy efficiency**.

---

## 🖥️ Simulation with Verilator and GTKWave
This repository includes a SystemVerilog port under `rtl_sv/`, a simulation-ready top module (`rvec32i.sv`), and a testbench in `sim/`.

### Requirements
- Linux (tested on Debian/Ubuntu)
- Verilator (5.x recommended)
- GTKWave
- GNU Make, GCC/G++

### Install dependencies (Debian/Ubuntu)
```bash
sudo apt-get update
sudo apt-get install -y verilator gtkwave build-essential
```

### Quick start
```bash
make -C sim
make -C sim run
```

This generates `sim/wave.vcd`.

### Load a RISC-V assembly kernel into the ROM
The testbench assembles a `.s` kernel from `Algorithms/rv32i`, converts it to a hex file, and loads it into the ROM.

Default kernel:
- `Algorithms/rv32i/count_up.s`

Run with a different kernel:
```bash
./sim/obj_dir/simv +KERNEL=Algorithms/rv32i/mat_mult.s
```

### Build vs. run (what each command does)
Build the simulator binary:
```bash
make -C sim
```

Run the simulator with a specific kernel:
```bash
./sim/obj_dir/simv +KERNEL=Algorithms/rv32i/mat_mult.s
```

In short:
- `make -C sim` = build only
- `make -C sim run` = build (if needed) + run

### What happens during `make -C sim run`
The testbench (`sim/tb_rvec32i.sv`) does the following at runtime:
- Assembles the selected `.s` file into `sim/kernel.o`
- Converts it to hex (`sim/kernel.hex`) and loads it into the ROM
- Runs ~200 cycles, counts instructions, and prints IPC
- Dumps waveforms to `sim/wave.vcd`

### Expected console output
When you build, you will see a Verilator compilation report similar to:
```
- V e r i l a t i o n   R e p o r t: Verilator 5.032 2025-01-01 rev (Debian 5.032-1)
- Verilator: Built from 0.530 MB sources in 22 modules, into 0.117 MB in 11 C++ files needing 0.000 MB
- Verilator: Walltime 8.847 s (elab=0.002, cvt=0.017, bld=8.812); cpu 0.029 s on 1 threads; alloced 9.551 MB
```

When you run, the testbench prints metrics and the simulation report, for example:
```
cycles=200 instructions=199 ipc=0.995000
- tb_rvec32i.sv:68: Verilog $finish
- S i m u l a t i o n   R e p o r t: Verilator 5.032 2025-01-01
- Verilator: $finish at 2us; walltime 0.007 s; speed 1.365 ms/s
- Verilator: cpu 0.001 s on 1 threads; alloced 57 MB
```

### View waveforms in GTKWave
```bash
gtkwave sim/wave.vcd
```

### Signals to inspect in GTKWave
- `tb_rvec32i.clk` (clock)
- `tb_rvec32i.cont_p` (PC)
- `tb_rvec32i.sal_alu` (ALU output)
- `tb_rvec32i.alua` (ALU input A)
- `tb_rvec32i.alub` (ALU input B)

### Metrics (non-intrusive)
The testbench counts cycles and executed instructions, then prints IPC at the end of simulation.

Run:
```bash
make -C sim run
```

Example output:
```
cycles=200 instructions=XX ipc=Y.YY
```

### Waveform examples
#### Count-up waveforms
![GTKWave Count Up example](docs/gtkwave_count_up.png)

#### Fibonacci waveforms
![GTKWave Fibonacci example](docs/gtkwave_fibonacci.png)

---

## 🔧 Convert C Kernels to RISC-V Assembly
Use `convert_kernels.py` to convert the C kernels in `Algorithms/` into RISC-V assembly (`.s`) outputs.

### Requirements
- A RISC-V GCC toolchain (e.g. `riscv64-unknown-elf-gcc`)
- Python 3

### Install the RISC-V toolchain (Debian/Ubuntu)
```bash
sudo apt-get update
sudo apt-get install -y gcc-riscv64-unknown-elf binutils-riscv64-unknown-elf
```

### Run
```bash
python3 convert_kernels.py
```

This writes `.s` files into `Algorithms/rv32i/` using `-march=rv32i` and `-mabi=ilp32`.

### Options
```bash
python3 convert_kernels.py --gcc riscv64-unknown-elf-gcc
python3 convert_kernels.py --march rv32i --mabi ilp32
python3 convert_kernels.py --input Algorithms --output Algorithms/rv32i
```

---

## 🧾 Citation
If you use this repository or reference its contents, please cite the following publications:

- **2025 Publication:**  
[  > Asanza, V., Montesdeoca, G., Estrada, R., Mayorca-Torres, D., Safhi, M.H., & Peluffo-Ordóñez, D.H. (2025).  
  > *Evaluating the RISCV-EC: A Comparative Analysis of Instruction Efficiency and Power Performance for Edge Computing.*  
  > SN Computer Science, 6(769). https://doi.org/10.1007/s42979-025-04309-2 ](https://link.springer.com/article/10.1007/s42979-025-04309-2) 

- **2023 Publication:**  
[  > Montesdeoca, G., Asanza, V., Estrada, R., Valeriano, I., & Muneeb, M.A. (2023).  
  > *Softprocessor RISCV-EC for Edge Computing Applications.*  
  > In: Barolli, L. (ed.) Innovative Mobile and Internet Services in Ubiquitous Computing (IMIS 2023).  
  > Lecture Notes on Data Engineering and Communications Technologies, vol. 177. Springer, Cham.  
  > https://doi.org/10.1007/978-3-031-35836-4_23  ](https://link.springer.com/chapter/10.1007/978-3-031-35836-4_23)

---

## 🧑‍💻 Authors
### RISCV-EC v1.0
| Author | Affiliation |
| --- | --- |
| Víctor Asanza | SDAS Research Group |
| John Rivera | UBA (Universidad de Buenos Aires) |
| Diego H. Peluffo-Ordóñez | Mohammed VI Polytechnic University, Morocco |

### RISCV-EC v0.1
| Author | Affiliation |
| --- | --- |
| Víctor Asanza | SDAS Research Group |
| Guillermo Montesdeoca | ESPOL, Ecuador |
| Rebeca Estrada | ESPOL, Ecuador |
| Dagoberto Mayorca-Torres | Universidad Mariana, Colombia |
| Moad Hicham Safhi | Hassan II University, Morocco |
| Diego H. Peluffo-Ordóñez | Mohammed VI Polytechnic University, Morocco |

---

## 📚 Keywords
`RISC-V` · `Soft Processor` · `FPGA Implementation` · `Edge Computing` · `Low Power` · `Open Hardware`

---

© 2025 RISCV-EC Project – Open-source release under MIT License.
