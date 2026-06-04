// Core: RISCV-EC-v1.1.0-PF
// File: mux_4b.sv - 5-bit 2:1 multiplexer.

`timescale 1ns/1ps
module mux_4b(
    input  logic [4:0] a,
    input  logic [4:0] b,
    input  logic       cont,
    output logic [4:0] sal
);
    always_comb begin
        if (cont) begin
            sal = b;
        end else begin
            sal = a;
        end
    end
endmodule
