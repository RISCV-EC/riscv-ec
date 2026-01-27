// Core: RISCV-EC-v1.0.0
// File: sign_e.sv - Sign-extends a 12-bit immediate to 32 bits.

`timescale 1ns/1ps
module sign_e(
    input  logic [11:0] data_in,
    output logic [31:0] data_out
);
    assign data_out = {{20{data_in[11]}}, data_in};
endmodule
