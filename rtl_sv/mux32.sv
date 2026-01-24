`timescale 1ns/1ps
module mux32(
    input  logic [31:0] a,
    input  logic        c,
    output logic [31:0] sal
);
    always_comb begin
        if (c) begin
            sal = a;
        end else begin
            sal = 32'b1;
        end
    end
endmodule
