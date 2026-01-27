// Core: RISCV-EC-v1.0.0
// File: cont.sv - Program counter register.

`timescale 1ns/1ps
module cont(
    input  logic        clk,
    input  logic [12:0] din,
    output logic [12:0] sal
);
    always_ff @(posedge clk) begin
        sal <= din;
    end
endmodule
