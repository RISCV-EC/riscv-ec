// Core: RISCV-EC-v1.1.0-PF
// File: sum.sv - 13-bit adder for PC/branch address.

`timescale 1ns/1ps
module sum(
    input  logic [12:0] a,
    input  logic [12:0] b,
    output logic [12:0] dout
);
    assign dout = $signed(a) + $signed(b);
endmodule
