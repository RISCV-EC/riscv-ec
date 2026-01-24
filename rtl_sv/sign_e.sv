`timescale 1ns/1ps
module sign_e(
    input  logic [11:0] data_in,
    output logic [31:0] data_out
);
    assign data_out = {{20{data_in[11]}}, data_in};
endmodule
