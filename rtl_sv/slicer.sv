// Core: RISCV-EC-v1.1.0-PF
// File: slicer.sv - Extracts the LSB for branch decisions.

`timescale 1ns/1ps
module slicer(
    input  logic [31:0] a,
    output logic        b
);
    assign b = a[0];
endmodule
