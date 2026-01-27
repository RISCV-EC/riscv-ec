// Core: RISCV-EC-v1.0.0
// File: alu.sv - ALU operations for arithmetic and comparisons.

`timescale 1ns/1ps
module alu(
    input  logic [31:0] a1,
    input  logic [31:0] a2,
    input  logic [3:0]  opcode,
    output logic [31:0] alu_sal
);
    always_comb begin
        alu_sal = '0;
        unique case (opcode)
            4'b0000: alu_sal = a1 + a2;
            4'b0001: alu_sal = a1 - a2;
            4'b0010: alu_sal = a1 << a2;
            4'b0100: alu_sal = ($signed(a1) < $signed(a2)) ? 32'b1 : 32'b0;
            4'b0110: alu_sal = (a1 < a2) ? 32'b1 : 32'b0;
            4'b1000: alu_sal = a1 ^ a2;
            4'b1010: alu_sal = a1 >> a2;
            4'b1011: alu_sal = $signed(a1) >>> a2;
            4'b1100: alu_sal = a1 | a2;
            4'b1110: alu_sal = a1 & a2;
            4'b1111: alu_sal = (a1 == a2) ? 32'b1 : 32'b0;
            default: alu_sal = '0;
        endcase
    end
endmodule
