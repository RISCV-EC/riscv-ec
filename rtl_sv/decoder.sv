// Core: RISCV-EC-v1.1.0-PF
// File: decoder.sv - Concatenates instruction fields into a 12-bit immediate.

`timescale 1ns/1ps
module decoder(
    input  logic [6:0]  a1,
    input  logic [4:0]  a2,
    output logic [11:0] sal
);
    assign sal = {a1, a2};
endmodule
