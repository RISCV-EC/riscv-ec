`timescale 1ns/1ps
module slicer(
    input  logic [31:0] a,
    output logic        b
);
    assign b = a[0];
endmodule
