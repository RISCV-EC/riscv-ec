// Core: RISCV-EC-v1.1.0-PF
// File: instruction_prefetch_buffer.sv - Small instruction prefetch FIFO.

`timescale 1ns/1ps
module instruction_prefetch_buffer #(
    parameter int unsigned DEPTH       = 2,
    parameter int unsigned INSTR_WIDTH = 32,
    parameter int unsigned ADDR_WIDTH  = 32,
    parameter logic [ADDR_WIDTH-1:0] RESET_VECTOR = '0
) (
    input  logic                    clk,
    input  logic                    rst_n,

    output logic                    imem_req,
    output logic [ADDR_WIDTH-1:0]   imem_addr,
    input  logic                    imem_gnt,
    input  logic                    imem_rvalid,
    input  logic [INSTR_WIDTH-1:0]  imem_rdata,

    input  logic                    core_fetch_req,
    output logic                    core_fetch_valid,
    output logic [INSTR_WIDTH-1:0]  core_fetch_instr,
    output logic [ADDR_WIDTH-1:0]   core_fetch_pc,
    input  logic                    core_fetch_accept,

    input  logic                    flush_i,
    input  logic [ADDR_WIDTH-1:0]   redirect_pc_i,
    output logic                    prefetch_want_req_o
);
    localparam int unsigned PTR_WIDTH   = (DEPTH <= 1) ? 1 : $clog2(DEPTH);
    localparam int unsigned COUNT_WIDTH = $clog2(DEPTH + 1);

    logic [INSTR_WIDTH-1:0] fifo_instr [0:DEPTH-1];
    logic [ADDR_WIDTH-1:0]  fifo_pc    [0:DEPTH-1];
    logic                  fifo_valid [0:DEPTH-1];
    logic [PTR_WIDTH-1:0]  head;
    logic [PTR_WIDTH-1:0]  tail;
    logic [COUNT_WIDTH-1:0] count;

    logic [ADDR_WIDTH-1:0] pending_pc [0:DEPTH-1];
    logic [PTR_WIDTH-1:0]  pending_head;
    logic [PTR_WIDTH-1:0]  pending_tail;
    logic [COUNT_WIDTH-1:0] pending_count;
    logic [COUNT_WIDTH-1:0] stale_response_count;
    logic [ADDR_WIDTH-1:0] prefetch_pc;

    logic has_room_for_request;
    logic accepted_req;
    logic push_response;
    logic pop_response;
    logic discard_response;

    function automatic logic [PTR_WIDTH-1:0] ptr_next(input logic [PTR_WIDTH-1:0] ptr);
        if (ptr == PTR_WIDTH'(DEPTH - 1)) begin
            ptr_next = '0;
        end else begin
            ptr_next = ptr + 1'b1;
        end
    endfunction

    assign has_room_for_request = ((count + pending_count) < COUNT_WIDTH'(DEPTH));
    assign prefetch_want_req_o  = has_room_for_request && !flush_i;
    assign imem_req             = prefetch_want_req_o;
    assign imem_addr            = prefetch_pc;
    assign accepted_req         = imem_req && imem_gnt;

    assign core_fetch_valid = core_fetch_req && (count != '0);
    assign core_fetch_instr = fifo_instr[head];
    assign core_fetch_pc    = fifo_pc[head];

    assign pop_response     = core_fetch_accept && core_fetch_valid;
    assign discard_response = imem_rvalid && (stale_response_count != '0);
    assign push_response    = imem_rvalid && !discard_response && (pending_count != '0);

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            head                 <= '0;
            tail                 <= '0;
            count                <= '0;
            pending_head         <= '0;
            pending_tail         <= '0;
            pending_count        <= '0;
            stale_response_count <= '0;
            prefetch_pc          <= RESET_VECTOR;
            for (int unsigned i = 0; i < DEPTH; i++) begin
                fifo_valid[i] <= 1'b0;
                fifo_instr[i] <= '0;
                fifo_pc[i]    <= '0;
                pending_pc[i] <= '0;
            end
        end else if (flush_i) begin
            head         <= '0;
            tail         <= '0;
            count        <= '0;
            pending_head <= '0;
            pending_tail <= '0;
            pending_count <= '0;
            stale_response_count <= stale_response_count
                                  + pending_count
                                  + (imem_rvalid ? {{(COUNT_WIDTH-1){1'b0}}, 1'b1} : '0);
            prefetch_pc  <= redirect_pc_i;
            for (int unsigned i = 0; i < DEPTH; i++) begin
                fifo_valid[i] <= 1'b0;
            end
        end else begin
            if (pop_response) begin
                fifo_valid[head] <= 1'b0;
                head <= ptr_next(head);
            end

            if (push_response) begin
                fifo_instr[tail] <= imem_rdata;
                fifo_pc[tail]    <= pending_pc[pending_head];
                fifo_valid[tail] <= 1'b1;
                tail <= ptr_next(tail);
                pending_head <= ptr_next(pending_head);
            end

            unique case ({push_response, pop_response})
                2'b10: count <= count + 1'b1;
                2'b01: count <= count - 1'b1;
                default: count <= count;
            endcase

            if (accepted_req) begin
                pending_pc[pending_tail] <= prefetch_pc;
                pending_tail <= ptr_next(pending_tail);
                prefetch_pc <= prefetch_pc + ADDR_WIDTH'(4);
            end

            unique case ({accepted_req, push_response})
                2'b10: pending_count <= pending_count + 1'b1;
                2'b01: pending_count <= pending_count - 1'b1;
                default: pending_count <= pending_count;
            endcase

            if (discard_response) begin
                stale_response_count <= stale_response_count - 1'b1;
            end
        end
    end
endmodule
