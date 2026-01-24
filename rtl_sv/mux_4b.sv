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
