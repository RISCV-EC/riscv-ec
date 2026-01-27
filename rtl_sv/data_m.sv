// Core: RISCV-EC-v1.0.0
// File: data_m.sv - Data memory (256 x 32) with synchronous write.

`timescale 1ns/1ps
module data_m(
    input  logic [31:0] di,
    input  logic [31:0] a,
    input  logic        we,
    input  logic        clk,
    output logic [31:0] dout
);
    logic [31:0] mem [0:255];
    logic [7:0]  addr;

    assign addr = a[7:0];

    always_ff @(posedge clk) begin
        if (we) begin
            mem[addr] <= di;
        end
    end

    assign dout = mem[addr];
endmodule
