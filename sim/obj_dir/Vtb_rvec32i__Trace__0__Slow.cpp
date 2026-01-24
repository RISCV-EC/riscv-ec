// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_rvec32i__Syms.h"


VL_ATTR_COLD void Vtb_rvec32i___024root__trace_init_sub__TOP__0(Vtb_rvec32i___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_rvec32i__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rvec32i___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_rvec32i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+56,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"alua",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"alub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"cont_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+34,0,"sal_alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"valor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declQuad(c+59,0,"cycle_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LONGINT, false,-1, 63,0);
    tracep->declQuad(c+61,0,"instr_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LONGINT, false,-1, 63,0);
    tracep->declBus(c+63,0,"last_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+33,0,"alua",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"alub",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+56,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"cont_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+34,0,"sal_alu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"valor",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBit(c+36,0,"cu_alu2reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"cu_alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+38,0,"cu_alu_scr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"cu_ci_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"cu_imm_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"cu_men",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"cu_wem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"cu_wer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"alu_alu_sal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"cont_0_sal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+64,0,"data_m_0_do",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"mux2_1_0_sal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"mux2_1_1_sal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"mux32_0_sal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"mux_4b_0_sal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+46,0,"mux_c_0_sal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+47,0,"prog_m_0_func3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+48,0,"prog_m_0_funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+49,0,"prog_m_0_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+50,0,"prog_m_0_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+66,0,"prog_m_0_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+51,0,"prog_m_0_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+67,0,"reg_b_0_do1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"reg_b_0_do2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"sign_e_0_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"sign_oe_0_sal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBit(c+53,0,"slicer_0_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"sum_0_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+54,0,"unidor_0_sal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->pushPrefix("CU_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+49,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+48,0,"func7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+47,0,"func3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+43,0,"wer",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"alu_scr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"alu2reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"wem",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"imm_rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"ci_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"men",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"alu_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("alu_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+33,0,"a1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"a2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+34,0,"alu_sal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cont_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+56,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+58,0,"sal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->popPrefix();
    tracep->pushPrefix("data_m_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+67,0,"di",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+42,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux32_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+34,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+42,0,"c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"sal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux_SE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+51,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+50,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+40,0,"cont",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"sal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux_alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+68,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+38,0,"cont",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"sal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux_contador", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+35,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBit(c+53,0,"c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"sal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux_m", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+64,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+36,0,"cont",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"sal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("prog_m_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+58,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+48,0,"funct7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+51,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+66,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+47,0,"func3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+50,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+49,0,"opcode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+70,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("reg_b_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+65,0,"d1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"a1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+66,0,"a2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+50,0,"ad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+43,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"do1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"do2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+72,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("sign_e_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+54,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+68,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("sign_oe_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+48,0,"i1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+50,0,"i2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+35,0,"sal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+35,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->popPrefix();
    tracep->pushPrefix("slicer_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+34,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+53,0,"b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("sum_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+46,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+58,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+69,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->popPrefix();
    tracep->pushPrefix("unidor_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+48,0,"a1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+45,0,"a2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+54,0,"sal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_rvec32i___024root__trace_init_top(Vtb_rvec32i___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_rvec32i__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rvec32i___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_rvec32i___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_rvec32i___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_rvec32i___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_rvec32i___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_rvec32i___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_rvec32i___024root__trace_register(Vtb_rvec32i___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_rvec32i__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rvec32i___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_rvec32i___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_rvec32i___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_rvec32i___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_rvec32i___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_rvec32i___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rvec32i___024root__trace_const_0\n"); );
    // Init
    Vtb_rvec32i___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_rvec32i___024root*>(voidSelf);
    Vtb_rvec32i__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vtb_rvec32i___024root__trace_full_0_sub_0(Vtb_rvec32i___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_rvec32i___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rvec32i___024root__trace_full_0\n"); );
    // Init
    Vtb_rvec32i___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_rvec32i___024root*>(voidSelf);
    Vtb_rvec32i__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_rvec32i___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_rvec32i___024root__trace_full_0_sub_0(Vtb_rvec32i___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_rvec32i__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rvec32i___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[0]),32);
    bufp->fullIData(oldp+2,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[1]),32);
    bufp->fullIData(oldp+3,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[2]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[3]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[4]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[5]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[6]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[7]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[8]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[9]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[10]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[11]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[12]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[13]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[14]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[15]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[16]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[17]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[18]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[19]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[20]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[21]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[22]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[23]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[24]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[25]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[26]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[27]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[28]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[29]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[30]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[31]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__mux2_1_0_sal),32);
    bufp->fullIData(oldp+34,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__alu_alu_sal),32);
    bufp->fullSData(oldp+35,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__sign_oe_0__DOT__temp),13);
    bufp->fullBit(oldp+36,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu2reg));
    bufp->fullCData(oldp+37,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_op),4);
    bufp->fullBit(oldp+38,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_scr));
    bufp->fullBit(oldp+39,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_ci_en));
    bufp->fullBit(oldp+40,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_imm_rd));
    bufp->fullBit(oldp+41,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_men));
    bufp->fullBit(oldp+42,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_wem));
    bufp->fullBit(oldp+43,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_wer));
    bufp->fullIData(oldp+44,(((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_wem)
                               ? vlSelfRef.tb_rvec32i__DOT__dut__DOT__alu_alu_sal
                               : 1U)),32);
    bufp->fullCData(oldp+45,(((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_imm_rd)
                               ? (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_rd)
                               : (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_rs2))),5);
    bufp->fullSData(oldp+46,(((vlSelfRef.tb_rvec32i__DOT__dut__DOT__alu_alu_sal 
                               & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_ci_en))
                               ? (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__sign_oe_0__DOT__temp)
                               : 1U)),13);
    bufp->fullCData(oldp+47,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_func3),3);
    bufp->fullCData(oldp+48,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_funct7),7);
    bufp->fullCData(oldp+49,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode),7);
    bufp->fullCData(oldp+50,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_rd),5);
    bufp->fullCData(oldp+51,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_rs2),5);
    bufp->fullIData(oldp+52,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0_do2),32);
    bufp->fullBit(oldp+53,((1U & vlSelfRef.tb_rvec32i__DOT__dut__DOT__alu_alu_sal)));
    bufp->fullSData(oldp+54,((((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_funct7) 
                               << 5U) | ((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_imm_rd)
                                          ? (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_rd)
                                          : (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_rs2)))),12);
    bufp->fullCData(oldp+55,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__data_m_0__DOT__addr),8);
    bufp->fullBit(oldp+56,(vlSelfRef.tb_rvec32i__DOT__clk));
    bufp->fullIData(oldp+57,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem
                             [(0x1fU & (vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0__DOT__mem
                                        [(0xffU & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cont_0_sal))] 
                                        >> 0xfU))]),32);
    bufp->fullSData(oldp+58,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cont_0_sal),13);
    bufp->fullQData(oldp+59,(vlSelfRef.tb_rvec32i__DOT__cycle_count),64);
    bufp->fullQData(oldp+61,(vlSelfRef.tb_rvec32i__DOT__instr_count),64);
    bufp->fullSData(oldp+63,(vlSelfRef.tb_rvec32i__DOT__last_pc),13);
    bufp->fullIData(oldp+64,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__data_m_0__DOT__mem
                             [vlSelfRef.tb_rvec32i__DOT__dut__DOT__data_m_0__DOT__addr]),32);
    bufp->fullIData(oldp+65,(((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu2reg)
                               ? vlSelfRef.tb_rvec32i__DOT__dut__DOT__alu_alu_sal
                               : vlSelfRef.tb_rvec32i__DOT__dut__DOT__data_m_0__DOT__mem
                              [vlSelfRef.tb_rvec32i__DOT__dut__DOT__data_m_0__DOT__addr])),32);
    bufp->fullCData(oldp+66,((0x1fU & (vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0__DOT__mem
                                       [(0xffU & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cont_0_sal))] 
                                       >> 0xfU))),5);
    bufp->fullIData(oldp+67,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem
                             [vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_rs2]),32);
    bufp->fullIData(oldp+68,((((- (IData)((vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0__DOT__mem
                                           [(0xffU 
                                             & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cont_0_sal))] 
                                           >> 0x1fU))) 
                               << 0xcU) | (((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_funct7) 
                                            << 5U) 
                                           | ((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_imm_rd)
                                               ? (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_rd)
                                               : (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_rs2))))),32);
    bufp->fullSData(oldp+69,((0x1fffU & (((vlSelfRef.tb_rvec32i__DOT__dut__DOT__alu_alu_sal 
                                           & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_ci_en))
                                           ? (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__sign_oe_0__DOT__temp)
                                           : 1U) + (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cont_0_sal)))),13);
    bufp->fullIData(oldp+70,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0__DOT__mem
                             [(0xffU & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cont_0_sal))]),32);
    bufp->fullIData(oldp+71,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0__DOT__i),32);
    bufp->fullIData(oldp+72,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__i),32);
}
