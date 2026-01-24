`timescale 1ns/1ps
module gen_mux #(
    parameter int data_width = 4
) (
    input  logic [data_width:0] a,
    input  logic [data_width:0] b,
    input  logic                cont,
    output logic [data_width:0] sal
);
    always_comb begin
        if (cont) begin
            sal = b;
        end else begin
            sal = a;
        end
    end
endmodule
