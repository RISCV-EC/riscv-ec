// Core: RISCV-EC-v1.1.0-PF
// File: prog_m.sv - Instruction ROM and field extraction.

`timescale 1ns/1ps
module prog_m(
    input  logic        clk,
    input  logic        req,
    input  logic [31:0] addr,
    output logic        gnt,
    output logic        rvalid,
    output logic [31:0] rdata,
    input  logic [12:0] a,
    output logic [31:0] instr,
    output logic [6:0]  funct7,
    output logic [4:0]  rs2,
    output logic [4:0]  rs1,
    output logic [2:0]  func3,
    output logic [4:0]  rd,
    output logic [6:0]  opcode
);
    logic [31:0] mem [0:255];

    integer i;
    initial begin
        for (i = 0; i < 256; i = i + 1) begin
            mem[i] = 32'b0;
        end
        mem[0] = 32'b00000000010100000000001110010011;
        mem[1] = 32'b00000000000000000000000110010011;
        mem[2] = 32'b00000000010100111000001110010011;
        mem[3] = 32'b00000000000100011000000110010011;
        mem[4] = 32'b00000000010100111000001110010011;
        mem[5] = 32'b00000000000100011000000110010011;
        mem[6] = 32'b00000000010100111000001110010011;
        mem[7] = 32'b00000000000100011000000110010011;
        mem[8] = 32'b11111110000000011100110111100011;
    end

    assign gnt    = 1'b1;
    assign instr  = mem[a[7:0]];
    assign funct7 = instr[31:25];
    assign rs2    = instr[24:20];
    assign rs1    = instr[19:15];
    assign func3  = instr[14:12];
    assign rd     = instr[11:7];
    assign opcode = instr[6:0];

    always_ff @(posedge clk) begin
        rvalid <= req;
        if (req) begin
            rdata <= mem[addr[9:2]];
        end
    end
endmodule
