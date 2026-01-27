// Core: RISCV-EC-v1.0.0
// File: reg_b.sv - Register file (32 x 32).

`timescale 1ns/1ps
module reg_b(
    input  logic [31:0] d1,
    input  logic [4:0]  a1,
    input  logic [4:0]  a2,
    input  logic [4:0]  ad,
    input  logic        we,
    input  logic        clk,
    output logic [31:0] do1,
    output logic [31:0] do2
);
    logic [31:0] mem [0:31];

    integer i;
    initial begin
        for (i = 0; i < 32; i = i + 1) begin
            mem[i] = 32'b0;
        end
    end

    always_ff @(posedge clk) begin
        if (we) begin
            mem[ad] <= d1;
        end
    end

    assign do1 = mem[a1];
    assign do2 = mem[a2];
endmodule
