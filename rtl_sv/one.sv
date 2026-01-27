// Core: RISCV-EC-v1.0.0
// File: one.sv - 13-bit constant 1 generator.

`timescale 1ns/1ps
module one(
    output logic [12:0] one
);
    assign one = 13'b1;
endmodule
