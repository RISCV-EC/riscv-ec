// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_rvec32i__Syms.h"


void Vtb_rvec32i___024root__trace_chg_0_sub_0(Vtb_rvec32i___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_rvec32i___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rvec32i___024root__trace_chg_0\n"); );
    // Init
    Vtb_rvec32i___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_rvec32i___024root*>(voidSelf);
    Vtb_rvec32i__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_rvec32i___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_rvec32i___024root__trace_chg_0_sub_0(Vtb_rvec32i___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_rvec32i__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rvec32i___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [3U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[0]),32);
        bufp->chgIData(oldp+1,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[1]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[2]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[3]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[4]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[5]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[6]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[7]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[8]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[9]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[10]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[11]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[12]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[13]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[14]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[15]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[16]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[17]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[18]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[19]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[20]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[21]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[22]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[23]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[24]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[25]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[26]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[27]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[28]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[29]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[30]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[31]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U] 
                     | vlSelfRef.__Vm_traceActivity
                     [4U]))) {
        bufp->chgIData(oldp+32,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__mux2_1_0_sal),32);
        bufp->chgIData(oldp+33,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__alu_alu_sal),32);
        bufp->chgSData(oldp+34,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__sign_oe_0__DOT__temp),13);
        bufp->chgBit(oldp+35,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu2reg));
        bufp->chgCData(oldp+36,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_op),4);
        bufp->chgBit(oldp+37,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_scr));
        bufp->chgBit(oldp+38,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_ci_en));
        bufp->chgBit(oldp+39,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_imm_rd));
        bufp->chgBit(oldp+40,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_men));
        bufp->chgBit(oldp+41,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_wem));
        bufp->chgBit(oldp+42,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_wer));
        bufp->chgIData(oldp+43,(((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_wem)
                                  ? vlSelfRef.tb_rvec32i__DOT__dut__DOT__alu_alu_sal
                                  : 1U)),32);
        bufp->chgCData(oldp+44,(((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_imm_rd)
                                  ? (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_rd)
                                  : (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_rs2))),5);
        bufp->chgSData(oldp+45,(((vlSelfRef.tb_rvec32i__DOT__dut__DOT__alu_alu_sal 
                                  & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_ci_en))
                                  ? (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__sign_oe_0__DOT__temp)
                                  : 1U)),13);
        bufp->chgCData(oldp+46,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_func3),3);
        bufp->chgCData(oldp+47,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_funct7),7);
        bufp->chgCData(oldp+48,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode),7);
        bufp->chgCData(oldp+49,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_rd),5);
        bufp->chgCData(oldp+50,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_rs2),5);
        bufp->chgIData(oldp+51,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0_do2),32);
        bufp->chgBit(oldp+52,((1U & vlSelfRef.tb_rvec32i__DOT__dut__DOT__alu_alu_sal)));
        bufp->chgSData(oldp+53,((((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_funct7) 
                                  << 5U) | ((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_imm_rd)
                                             ? (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_rd)
                                             : (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_rs2)))),12);
        bufp->chgCData(oldp+54,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__data_m_0__DOT__addr),8);
    }
    bufp->chgBit(oldp+55,(vlSelfRef.tb_rvec32i__DOT__clk));
    bufp->chgIData(oldp+56,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem
                            [(0x1fU & (vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0__DOT__mem
                                       [(0xffU & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cont_0_sal))] 
                                       >> 0xfU))]),32);
    bufp->chgSData(oldp+57,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cont_0_sal),13);
    bufp->chgQData(oldp+58,(vlSelfRef.tb_rvec32i__DOT__cycle_count),64);
    bufp->chgQData(oldp+60,(vlSelfRef.tb_rvec32i__DOT__instr_count),64);
    bufp->chgSData(oldp+62,(vlSelfRef.tb_rvec32i__DOT__last_pc),13);
    bufp->chgIData(oldp+63,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__data_m_0__DOT__mem
                            [vlSelfRef.tb_rvec32i__DOT__dut__DOT__data_m_0__DOT__addr]),32);
    bufp->chgIData(oldp+64,(((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu2reg)
                              ? vlSelfRef.tb_rvec32i__DOT__dut__DOT__alu_alu_sal
                              : vlSelfRef.tb_rvec32i__DOT__dut__DOT__data_m_0__DOT__mem
                             [vlSelfRef.tb_rvec32i__DOT__dut__DOT__data_m_0__DOT__addr])),32);
    bufp->chgCData(oldp+65,((0x1fU & (vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0__DOT__mem
                                      [(0xffU & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cont_0_sal))] 
                                      >> 0xfU))),5);
    bufp->chgIData(oldp+66,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem
                            [vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_rs2]),32);
    bufp->chgIData(oldp+67,((((- (IData)((vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0__DOT__mem
                                          [(0xffU & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cont_0_sal))] 
                                          >> 0x1fU))) 
                              << 0xcU) | (((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_funct7) 
                                           << 5U) | 
                                          ((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_imm_rd)
                                            ? (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_rd)
                                            : (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_rs2))))),32);
    bufp->chgSData(oldp+68,((0x1fffU & (((vlSelfRef.tb_rvec32i__DOT__dut__DOT__alu_alu_sal 
                                          & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_ci_en))
                                          ? (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__sign_oe_0__DOT__temp)
                                          : 1U) + (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cont_0_sal)))),13);
    bufp->chgIData(oldp+69,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0__DOT__mem
                            [(0xffU & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cont_0_sal))]),32);
    bufp->chgIData(oldp+70,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0__DOT__i),32);
    bufp->chgIData(oldp+71,(vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__i),32);
}

void Vtb_rvec32i___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rvec32i___024root__trace_cleanup\n"); );
    // Init
    Vtb_rvec32i___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_rvec32i___024root*>(voidSelf);
    Vtb_rvec32i__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
