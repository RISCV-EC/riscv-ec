// Core: RISCV-EC-v1.1.0-PF
// File: unidor.sv - Concatenates instruction fields into a 12-bit value.

`timescale 1ns/1ps
module unidor(
    input  logic [6:0]  a1,
    input  logic [4:0]  a2,
    output logic [11:0] sal
);
    assign sal = {a1, a2};
endmodule
