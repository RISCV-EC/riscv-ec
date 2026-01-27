// Core: RISCV-EC-v1.0.0
// File: tb_rvec32i.sv - Verilator testbench and simulation metrics.

`timescale 1ns/1ps

module tb_rvec32i;
    logic        clk;
    logic [31:0] alua;
    logic [31:0] alub;
    logic [12:0] cont_p;
    logic [31:0] sal_alu;
    logic [12:0] valor;
    string       kernel_s;
    string       kernel_obj;
    string       kernel_hex;
    string       command;
    longint unsigned cycle_count;
    longint unsigned instr_count;
    logic [12:0] last_pc;
    logic        done;
    localparam int unsigned MAX_CYCLES = 10000;

    rvec32i dut(
        .alua   (alua),
        .alub   (alub),
        .clk    (clk),
        .cont_p (cont_p),
        .sal_alu(sal_alu),
        .valor  (valor)
    );

    initial begin
        clk = 1'b0;
        forever #5 clk = ~clk;
    end

    initial begin
        kernel_s   = "Algorithms/rv32i/count_up.s"; //<------- default
        kernel_obj = "sim/kernel.o";
        kernel_hex = "sim/kernel.hex";
        if ($value$plusargs("KERNEL=%s", kernel_s)) begin
        end

        command = $sformatf(
            "riscv64-unknown-elf-gcc -march=rv32i -mabi=ilp32 -nostdlib -ffreestanding -c %s -o %s",
            kernel_s,
            kernel_obj
        );
        if ($system(command) != 0) begin
            $fatal(1, "Failed to assemble kernel: %s", kernel_s);
        end

        command = $sformatf(
            "riscv64-unknown-elf-objcopy -O verilog --verilog-data-width=4 -j .text %s %s",
            kernel_obj,
            kernel_hex
        );
        if ($system(command) != 0) begin
            $fatal(1, "Failed to generate hex from: %s", kernel_obj);
        end

        $readmemh(kernel_hex, dut.prog_m_0.mem);
        $dumpfile("wave.vcd");
        $dumpvars(0, tb_rvec32i);
        cycle_count = 0;
        instr_count = 0;
        last_pc = cont_p;
        done = 1'b0;
        for (int unsigned i = 0; i < MAX_CYCLES && !done; i++) begin
            @(posedge clk);
        end
        @(negedge clk);
        if (!done) begin
            $display("timeout after %0d cycles", MAX_CYCLES);
        end
        $display("cycles=%0d instructions=%0d ipc=%0f",
                 cycle_count, instr_count,
                 (cycle_count > 0) ? (real'(instr_count) / real'(cycle_count)) : 0.0);
        $finish;
    end

    always_ff @(posedge clk) begin
        cycle_count <= cycle_count + 1;
        if (cont_p != last_pc) begin
            instr_count <= instr_count + 1;
        end
        last_pc <= cont_p;
        if (dut.data_m_0.we && dut.data_m_0.addr == 8'hFF) begin
            done <= 1'b1;
        end
    end
endmodule
