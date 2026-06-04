// Core: RISCV-EC-v1.1.0-PF
// File: rvec32i.sv - Top-level RISCV-EC core integration.

`timescale 1ns/1ps
module rvec32i #(
    parameter bit ENABLE_PREFETCH = 1'b1,
    parameter int unsigned PREFETCH_DEPTH = 2,
    parameter logic [31:0] RESET_VECTOR = 32'h0000_0000
) (
    output logic [31:0] alua,
    output logic [31:0] alub,
    input  logic        clk,
    input  logic        rst_n,
    output logic [12:0] cont_p,
    output logic [31:0] sal_alu,
    output logic [12:0] valor,

    output logic [63:0] cycle_count,
    output logic [63:0] instr_count,
    output logic [63:0] imem_req_count,
    output logic [63:0] imem_stall_count,
    output logic [63:0] prefetch_hit_count,
    output logic [63:0] prefetch_empty_count,
    output logic [63:0] flush_count,
    output logic [63:0] branch_count,
    output logic [63:0] taken_branch_count
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

    logic        imem_req;
    logic [31:0] imem_addr;
    logic        imem_gnt;
    logic        imem_rvalid;
    logic [31:0] imem_rdata;
    logic        prefetch_want_req;

    logic        core_fetch_req;
    logic        core_fetch_valid;
    logic [31:0] core_fetch_instr;
    logic [31:0] core_fetch_pc;
    logic        core_fetch_accept;

    logic        base_pending;
    logic [31:0] base_request_pc;
    logic [31:0] base_pending_pc;
    logic [12:0] last_visible_pc;

    logic        execute_valid;
    logic        is_branch;
    logic        branch_taken;
    logic        flush_frontend;
    logic [31:0] redirect_pc;
    logic [31:0] sequential_pc;
    logic [31:0] unused_rom_instr;

    assign execute_valid = core_fetch_valid;
    assign core_fetch_req = rst_n;
    assign core_fetch_accept = execute_valid;

    assign prog_m_0_funct7 = core_fetch_instr[31:25];
    assign prog_m_0_rs2    = core_fetch_instr[24:20];
    assign prog_m_0_rs1    = core_fetch_instr[19:15];
    assign prog_m_0_func3  = core_fetch_instr[14:12];
    assign prog_m_0_rd     = core_fetch_instr[11:7];
    assign prog_m_0_opcode = core_fetch_instr[6:0];

    assign cont_0_sal = execute_valid ? core_fetch_pc[14:2] : last_visible_pc;
    assign is_branch  = (prog_m_0_opcode == 7'b1100011);
    assign branch_taken = execute_valid && cu_ci_en && slicer_0_b;
    assign flush_frontend = branch_taken;
    assign redirect_pc = {19'b0, sum_0_dout} << 2;
    assign sequential_pc = core_fetch_pc + 32'd4;

    assign alua    = mux2_1_0_sal;
    assign alub    = reg_b_0_do2;
    assign cont_p  = cont_0_sal;
    assign sal_alu = alu_alu_sal;
    assign valor   = sign_oe_0_sal;

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

    data_m data_m_0(
        .di   (reg_b_0_do1),
        .a    (mux32_0_sal),
        .we   (execute_valid && cu_wem),
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
        .clk    (clk),
        .req    (imem_req),
        .addr   (imem_addr),
        .gnt    (imem_gnt),
        .rvalid (imem_rvalid),
        .rdata  (imem_rdata),
        .a      (cont_0_sal),
        .instr  (unused_rom_instr),
        .funct7 (),
        .rs2    (),
        .rs1    (),
        .func3  (),
        .rd     (),
        .opcode ()
    );

    reg_b reg_b_0(
        .d1  (mux2_1_1_sal),
        .a1  (prog_m_0_rs2),
        .a2  (prog_m_0_rs1),
        .ad  (prog_m_0_rd),
        .we  (execute_valid && cu_wer),
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

    generate
        if (ENABLE_PREFETCH) begin : gen_prefetch_frontend
            instruction_prefetch_buffer #(
                .DEPTH        (PREFETCH_DEPTH),
                .INSTR_WIDTH  (32),
                .ADDR_WIDTH   (32),
                .RESET_VECTOR (RESET_VECTOR)
            ) prefetch_0 (
                .clk                 (clk),
                .rst_n               (rst_n),
                .imem_req            (imem_req),
                .imem_addr           (imem_addr),
                .imem_gnt            (imem_gnt),
                .imem_rvalid         (imem_rvalid),
                .imem_rdata          (imem_rdata),
                .core_fetch_req      (core_fetch_req),
                .core_fetch_valid    (core_fetch_valid),
                .core_fetch_instr    (core_fetch_instr),
                .core_fetch_pc       (core_fetch_pc),
                .core_fetch_accept   (core_fetch_accept),
                .flush_i             (flush_frontend),
                .redirect_pc_i       (redirect_pc),
                .prefetch_want_req_o (prefetch_want_req)
            );
        end else begin : gen_base_frontend
            assign imem_req          = !base_pending;
            assign imem_addr         = base_request_pc;
            assign core_fetch_valid  = core_fetch_req && imem_rvalid;
            assign core_fetch_instr  = imem_rdata;
            assign core_fetch_pc     = base_pending_pc;
            assign prefetch_want_req = imem_req;

            always_ff @(posedge clk or negedge rst_n) begin
                if (!rst_n) begin
                    base_pending    <= 1'b0;
                    base_request_pc <= RESET_VECTOR;
                    base_pending_pc <= RESET_VECTOR;
                end else begin
                    if (!base_pending && imem_gnt) begin
                        base_pending    <= 1'b1;
                        base_pending_pc <= base_request_pc;
                    end

                    if (imem_rvalid) begin
                        base_pending <= 1'b0;
                    end

                    if (execute_valid) begin
                        if (branch_taken) begin
                            base_request_pc <= redirect_pc;
                        end else begin
                            base_request_pc <= core_fetch_pc + 32'd4;
                        end
                    end
                end
            end
        end
    endgenerate

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            last_visible_pc      <= RESET_VECTOR[14:2];
            cycle_count          <= 64'd0;
            instr_count          <= 64'd0;
            imem_req_count       <= 64'd0;
            imem_stall_count     <= 64'd0;
            prefetch_hit_count   <= 64'd0;
            prefetch_empty_count <= 64'd0;
            flush_count          <= 64'd0;
            branch_count         <= 64'd0;
            taken_branch_count   <= 64'd0;
        end else begin
            cycle_count <= cycle_count + 64'd1;

            if (execute_valid) begin
                instr_count <= instr_count + 64'd1;
                if (branch_taken) begin
                    last_visible_pc <= redirect_pc[14:2];
                end else begin
                    last_visible_pc <= sequential_pc[14:2];
                end
            end

            if (imem_req && imem_gnt) begin
                imem_req_count <= imem_req_count + 64'd1;
            end

            if ((prefetch_want_req && !imem_gnt) || (core_fetch_req && !core_fetch_valid)) begin
                imem_stall_count <= imem_stall_count + 64'd1;
            end

            if (core_fetch_req && core_fetch_valid) begin
                prefetch_hit_count <= prefetch_hit_count + 64'd1;
            end

            if (core_fetch_req && !core_fetch_valid) begin
                prefetch_empty_count <= prefetch_empty_count + 64'd1;
            end

            if (flush_frontend) begin
                flush_count <= flush_count + 64'd1;
            end

            if (execute_valid && is_branch) begin
                branch_count <= branch_count + 64'd1;
            end

            if (branch_taken) begin
                taken_branch_count <= taken_branch_count + 64'd1;
            end
        end
    end
endmodule
