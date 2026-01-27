// Core: RISCV-EC-v1.0.0
// File: CU.sv - Control unit: decodes instruction fields and generates control signals.

`timescale 1ns/1ps
module CU(
    input  logic [6:0] opcode,
    input  logic [6:0] func7,
    input  logic [2:0] func3,
    output logic       wer,
    output logic       alu_scr,
    output logic       alu2reg,
    output logic       wem,
    output logic       imm_rd,
    output logic       ci_en,
    output logic       men,
    output logic [3:0] alu_op
);
    always_comb begin
        alu_op  = 4'b0000;
        wer     = 1'b0;
        alu_scr = 1'b0;
        alu2reg = 1'b0;
        wem     = 1'b0;
        imm_rd  = 1'b0;
        ci_en   = 1'b0;
        men     = 1'b0;

        case (opcode)
            7'b0110011: begin
                case (func3)
                    3'b000: begin
                        if (func7 == 7'b0100000) begin
                            alu_scr = 1'b1;
                            alu_op  = 4'b0001;
                            alu2reg = 1'b1;
                            wem     = 1'b0;
                            wer     = 1'b1;
                        end else if (func7 == 7'b0000000) begin
                            alu_scr = 1'b1;
                            alu_op  = 4'b0000;
                            alu2reg = 1'b1;
                            wem     = 1'b0;
                            wer     = 1'b1;
                        end
                    end
                    3'b001: begin
                        alu_scr = 1'b1;
                        alu_op  = 4'b0010;
                        alu2reg = 1'b1;
                        wem     = 1'b0;
                        wer     = 1'b1;
                    end
                    3'b010: begin
                        alu_scr = 1'b1;
                        alu_op  = 4'b0100;
                        alu2reg = 1'b1;
                        wem     = 1'b0;
                        wer     = 1'b1;
                    end
                    3'b011: begin
                        alu_scr = 1'b1;
                        alu_op  = 4'b0110;
                        alu2reg = 1'b1;
                        wem     = 1'b0;
                        wer     = 1'b1;
                    end
                    3'b100: begin
                        alu_scr = 1'b1;
                        alu_op  = 4'b1000;
                        alu2reg = 1'b1;
                        wem     = 1'b0;
                        wer     = 1'b1;
                    end
                    3'b101: begin
                        if (func7 == 7'b0100000) begin
                            alu_scr = 1'b1;
                            alu_op  = 4'b1011;
                            alu2reg = 1'b1;
                            wem     = 1'b0;
                            wer     = 1'b1;
                        end else if (func7 == 7'b0000000) begin
                            alu_scr = 1'b1;
                            alu_op  = 4'b1010;
                            alu2reg = 1'b1;
                            wem     = 1'b0;
                            wer     = 1'b1;
                        end
                    end
                    3'b110: begin
                        alu_op  = 4'b1100;
                        wer     = 1'b1;
                        alu_scr = 1'b0;
                        alu2reg = 1'b0;
                        wem     = 1'b0;
                    end
                    3'b111: begin
                        alu_op  = 4'b1110;
                        wer     = 1'b1;
                        alu_scr = 1'b0;
                        alu2reg = 1'b0;
                        wem     = 1'b0;
                    end
                    default: begin
                    end
                endcase
            end
            7'b0010011: begin
                case (func3)
                    3'b000: begin
                        alu_op  = 4'b0000;
                        alu2reg = 1'b1;
                        wer     = 1'b1;
                    end
                    3'b010: begin
                        alu_op  = 4'b0100;
                        alu2reg = 1'b1;
                        wer     = 1'b1;
                    end
                    3'b011: begin
                        alu_op  = 4'b0110;
                        alu2reg = 1'b1;
                        wer     = 1'b1;
                    end
                    3'b100: begin
                        alu_op  = 4'b1000;
                        alu2reg = 1'b1;
                        wer     = 1'b1;
                    end
                    3'b110: begin
                        alu_op  = 4'b1100;
                        alu2reg = 1'b1;
                        wer     = 1'b1;
                    end
                    3'b111: begin
                        alu_op  = 4'b1110;
                        alu2reg = 1'b1;
                        wer     = 1'b1;
                    end
                    3'b001: begin
                        alu_op  = 4'b0010;
                        alu2reg = 1'b1;
                        wer     = 1'b1;
                    end
                    3'b101: begin
                        if (func7 == 7'b0100000) begin
                            alu_op  = 4'b1010;
                            alu2reg = 1'b1;
                            wer     = 1'b1;
                        end else begin
                            alu_op  = 4'b1011;
                            alu2reg = 1'b1;
                            wer     = 1'b1;
                        end
                    end
                    default: begin
                    end
                endcase
            end
            7'b0100011: begin
                case (func3)
                    3'b000: begin
                        alu_op = 4'b0000;
                        imm_rd = 1'b1;
                        wem    = 1'b1;
                        men    = 1'b1;
                    end
                    3'b001: begin
                        alu_op = 4'b0000;
                        imm_rd = 1'b1;
                        wem    = 1'b1;
                        men    = 1'b1;
                    end
                    3'b010: begin
                        alu_op = 4'b0000;
                        imm_rd = 1'b1;
                        wem    = 1'b1;
                        men    = 1'b1;
                    end
                    default: begin
                    end
                endcase
            end
            7'b0000011: begin
                case (func3)
                    3'b000: begin
                        alu_op = 4'b0000;
                        wer    = 1'b1;
                        men    = 1'b1;
                    end
                    3'b001: begin
                        alu_op = 4'b0000;
                        wer    = 1'b1;
                        men    = 1'b1;
                    end
                    3'b010: begin
                        alu_op = 4'b0000;
                        wer    = 1'b1;
                        men    = 1'b1;
                    end
                    3'b100: begin
                        alu_op = 4'b0000;
                        wer    = 1'b1;
                        men    = 1'b1;
                    end
                    3'b101: begin
                        alu_op = 4'b0000;
                        wer    = 1'b1;
                        men    = 1'b1;
                    end
                    default: begin
                    end
                endcase
            end
            7'b1100011: begin
                case (func3)
                    3'b000: begin
                        wer     = 1'b0;
                        wem     = 1'b0;
                        alu_scr = 1'b1;
                        alu_op  = 4'b1111;
                        ci_en   = 1'b1;
                    end
                    3'b100: begin
                        wer     = 1'b0;
                        wem     = 1'b0;
                        alu_scr = 1'b1;
                        alu_op  = 4'b0100;
                        ci_en   = 1'b1;
                    end
                    3'b110: begin
                        wer     = 1'b0;
                        wem     = 1'b0;
                        alu_scr = 1'b1;
                        alu_op  = 4'b0110;
                        ci_en   = 1'b1;
                    end
                    default: begin
                    end
                endcase
            end
            default: begin
            end
        endcase
    end
endmodule
