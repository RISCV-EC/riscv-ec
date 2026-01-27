// Core: RISCV-EC-v1.0.0
// File: mux2_1.sv - 32-bit 2:1 multiplexer.

`timescale 1ns/1ps
module mux2_1(
    input  logic [31:0] a,
    input  logic [31:0] b,
    input  logic        cont,
    output logic [31:0] sal
);
    always_comb begin
        if (cont) begin
            sal = b;
        end else begin
            sal = a;
        end
    end
endmodule
