// Core: RISCV-EC-v1.1.0-PF
// File: tb_rvec32i.sv - Verilator testbench and simulation metrics.

`timescale 1ns/1ps

module tb_rvec32i #(
    parameter bit ENABLE_PREFETCH = 1'b1,
    parameter int unsigned PREFETCH_DEPTH = 2
);
    logic        clk;
    logic        rst_n;
    logic [31:0] alua;
    logic [31:0] alub;
    logic [12:0] cont_p;
    logic [31:0] sal_alu;
    logic [12:0] valor;
    logic [63:0] cycle_count;
    logic [63:0] instr_count;
    logic [63:0] imem_req_count;
    logic [63:0] imem_stall_count;
    logic [63:0] prefetch_hit_count;
    logic [63:0] prefetch_empty_count;
    logic [63:0] flush_count;
    logic [63:0] branch_count;
    logic [63:0] taken_branch_count;
    string       kernel_s;
    string       kernel_obj;
    string       kernel_hex;
    string       command;
    logic        done;
    int unsigned max_cycles;
    localparam int unsigned DEFAULT_MAX_CYCLES = 50000;

    rvec32i #(
        .ENABLE_PREFETCH (ENABLE_PREFETCH),
        .PREFETCH_DEPTH  (PREFETCH_DEPTH),
        .RESET_VECTOR    (32'h0000_0000)
    ) dut (
        .alua                 (alua),
        .alub                 (alub),
        .clk                  (clk),
        .rst_n                (rst_n),
        .cont_p               (cont_p),
        .sal_alu              (sal_alu),
        .valor                (valor),
        .cycle_count          (cycle_count),
        .instr_count          (instr_count),
        .imem_req_count       (imem_req_count),
        .imem_stall_count     (imem_stall_count),
        .prefetch_hit_count   (prefetch_hit_count),
        .prefetch_empty_count (prefetch_empty_count),
        .flush_count          (flush_count),
        .branch_count         (branch_count),
        .taken_branch_count   (taken_branch_count)
    );

    initial begin
        clk = 1'b0;
        forever #5 clk = ~clk;
    end

    initial begin
        rst_n      = 1'b0;
        done       = 1'b0;
        kernel_s   = "Algorithms/rv32i/count_up.s";
        kernel_obj = "sim/kernel.o";
        kernel_hex = "sim/kernel.hex";
        max_cycles = DEFAULT_MAX_CYCLES;

        void'($value$plusargs("KERNEL=%s", kernel_s));
        void'($value$plusargs("MAX_CYCLES=%d", max_cycles));

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
        $dumpfile(ENABLE_PREFETCH ? "sim/wave_pf.vcd" : "sim/wave_base.vcd");
        $dumpvars(0, tb_rvec32i);

        repeat (3) @(posedge clk);
        rst_n = 1'b1;

        for (int unsigned i = 0; i < max_cycles && !done; i++) begin
            @(posedge clk);
        end
        @(negedge clk);

        if (!done) begin
            $display("timeout after %0d cycles", max_cycles);
        end

        $display("RESULT config=%s depth=%0d kernel=%s cycles=%0d instructions=%0d cpi=%0f imem_req=%0d imem_stall=%0d prefetch_hit=%0d prefetch_empty=%0d flush=%0d branch=%0d taken_branch=%0d done=%0d",
                 ENABLE_PREFETCH ? "RISCV-EC-v1.1.0-PF" : "RISCV-EC-v1.0.0",
                 PREFETCH_DEPTH,
                 kernel_s,
                 cycle_count,
                 instr_count,
                 (instr_count > 0) ? (real'(cycle_count) / real'(instr_count)) : 0.0,
                 imem_req_count,
                 imem_stall_count,
                 prefetch_hit_count,
                 prefetch_empty_count,
                 flush_count,
                 branch_count,
                 taken_branch_count,
                 done);
        $finish;
    end

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            done <= 1'b0;
        end else if (dut.data_m_0.we && dut.data_m_0.addr == 8'hFF) begin
            done <= 1'b1;
        end
    end
endmodule
