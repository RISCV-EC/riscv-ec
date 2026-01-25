// Core: RISCV-EC-v1.0
// File: sign_oe.sv - Builds a branch offset from instruction fields.

`timescale 1ns/1ps
module sign_oe(
    input  logic [6:0]  i1,
    input  logic [4:0]  i2,
    output logic [12:0] sal
);
    logic [12:0] temp;

    always_comb begin
        temp[12]   = i1[6];
        temp[10:5] = i1[5:0];
        temp[11]   = i2[0];
        temp[4:1]  = i2[4:1];
        temp[0]    = 1'b0;
    end

    assign sal = temp;
endmodule
