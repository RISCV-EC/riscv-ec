`timescale 1ns/1ps
module sum(
    input  logic [12:0] a,
    input  logic [12:0] b,
    output logic [12:0] dout
);
    assign dout = $signed(a) + $signed(b);
endmodule
