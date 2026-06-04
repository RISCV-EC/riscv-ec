// Core: RISCV-EC-v1.1.0-PF
// File: mux_c.sv - Branch/PC mux selecting target or increment.

`timescale 1ns/1ps
module mux_c(
    input  logic [12:0] a,
    input  logic        c,
    input  logic        en,
    output logic [12:0] sal
);
    always_comb begin
        if (c && en) begin
            sal = a;
        end else begin
            sal = 13'b1;
        end
    end
endmodule
