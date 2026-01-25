// Core: RISCV-EC-v1.0
// File: rvec32i.sv - Top-level RISCV-EC core integration.

`timescale 1ns/1ps
module rvec32i(
    output logic [31:0] alua,
    output logic [31:0] alub,
    input  logic        clk,
    output logic [12:0] cont_p,
    output logic [31:0] sal_alu,
    output logic [12:0] valor
);
    logic        cu_alu2reg;
    logic [3:0]  cu_alu_op;
    logic        cu_alu_scr;
    logic        cu_ci_en;
    logic        cu_imm_rd;
    logic        cu_men;
    logic        cu_wem;
    logic        cu_wer;

    logic [31:0] alu_alu_sal;
    logic [12:0] cont_0_sal;
    logic [31:0] data_m_0_do;
    logic [31:0] mux2_1_0_sal;
    logic [31:0] mux2_1_1_sal;
    logic [31:0] mux32_0_sal;
    logic [4:0]  mux_4b_0_sal;
    logic [12:0] mux_c_0_sal;
    logic [2:0]  prog_m_0_func3;
    logic [6:0]  prog_m_0_funct7;
    logic [6:0]  prog_m_0_opcode;
    logic [4:0]  prog_m_0_rd;
    logic [4:0]  prog_m_0_rs1;
    logic [4:0]  prog_m_0_rs2;
    logic [31:0] reg_b_0_do1;
    logic [31:0] reg_b_0_do2;
    logic [31:0] sign_e_0_data_out;
    logic [12:0] sign_oe_0_sal;
    logic        slicer_0_b;
    logic [12:0] sum_0_dout;
    logic [11:0] unidor_0_sal;

    assign alua   = mux2_1_0_sal;
    assign alub   = reg_b_0_do2;
    assign cont_p = cont_0_sal;
    assign sal_alu = alu_alu_sal;
    assign valor  = sign_oe_0_sal;

    CU CU_0(
        .opcode  (prog_m_0_opcode),
        .func7   (prog_m_0_funct7),
        .func3   (prog_m_0_func3),
        .wer     (cu_wer),
        .alu_scr (cu_alu_scr),
        .alu2reg (cu_alu2reg),
        .wem     (cu_wem),
        .imm_rd  (cu_imm_rd),
        .ci_en   (cu_ci_en),
        .men     (cu_men),
        .alu_op  (cu_alu_op)
    );

    alu alu_inst(
        .a1      (mux2_1_0_sal),
        .a2      (reg_b_0_do2),
        .opcode  (cu_alu_op),
        .alu_sal (alu_alu_sal)
    );

    cont cont_0(
        .clk (clk),
        .din (sum_0_dout),
        .sal (cont_0_sal)
    );

    data_m data_m_0(
        .di   (reg_b_0_do1),
        .a    (mux32_0_sal),
        .we   (cu_wem),
        .clk  (clk),
        .dout (data_m_0_do)
    );

    mux32 mux32_0(
        .a   (alu_alu_sal),
        .c   (cu_wem),
        .sal (mux32_0_sal)
    );

    mux_4b mux_SE(
        .a    (prog_m_0_rs2),
        .b    (prog_m_0_rd),
        .cont (cu_imm_rd),
        .sal  (mux_4b_0_sal)
    );

    mux2_1 mux_alu(
        .a    (sign_e_0_data_out),
        .b    (reg_b_0_do1),
        .cont (cu_alu_scr),
        .sal  (mux2_1_0_sal)
    );

    mux_c mux_contador(
        .a   (sign_oe_0_sal),
        .c   (slicer_0_b),
        .en  (cu_ci_en),
        .sal (mux_c_0_sal)
    );

    mux2_1 mux_m(
        .a    (data_m_0_do),
        .b    (alu_alu_sal),
        .cont (cu_alu2reg),
        .sal  (mux2_1_1_sal)
    );

    prog_m prog_m_0(
        .a      (cont_0_sal),
        .funct7 (prog_m_0_funct7),
        .rs2    (prog_m_0_rs2),
        .rs1    (prog_m_0_rs1),
        .func3  (prog_m_0_func3),
        .rd     (prog_m_0_rd),
        .opcode (prog_m_0_opcode)
    );

    reg_b reg_b_0(
        .d1  (mux2_1_1_sal),
        .a1  (prog_m_0_rs2),
        .a2  (prog_m_0_rs1),
        .ad  (prog_m_0_rd),
        .we  (cu_wer),
        .clk (clk),
        .do1 (reg_b_0_do1),
        .do2 (reg_b_0_do2)
    );

    sign_e sign_e_0(
        .data_in  (unidor_0_sal),
        .data_out (sign_e_0_data_out)
    );

    sign_oe sign_oe_0(
        .i1  (prog_m_0_funct7),
        .i2  (prog_m_0_rd),
        .sal (sign_oe_0_sal)
    );

    slicer slicer_0(
        .a (alu_alu_sal),
        .b (slicer_0_b)
    );

    sum sum_0(
        .a    (mux_c_0_sal),
        .b    (cont_0_sal),
        .dout (sum_0_dout)
    );

    unidor unidor_0(
        .a1  (prog_m_0_funct7),
        .a2  (mux_4b_0_sal),
        .sal (unidor_0_sal)
    );
endmodule
