`timescale 1ns/1ps
module btog;
    logic [3:0] din     = 4'b1010;
    logic [3:0] llshift = 4'b0000;
    logic [3:0] lrshift = 4'b0000;
    logic signed [3:0] din2    = 4'sb1010;
    logic signed [3:0] alshift = 4'sb0000;
    logic signed [3:0] arshift = 4'sb0000;

    always_comb begin
        llshift = din << 1;
        lrshift = din >> 1;
        alshift = din2 <<< 1;
        arshift = din2 >>> 1;
    end
endmodule
