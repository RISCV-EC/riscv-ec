// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rvec32i.h for the primary calling header

#include "Vtb_rvec32i__pch.h"
#include "Vtb_rvec32i___024root.h"

VL_ATTR_COLD void Vtb_rvec32i___024root___eval_static(Vtb_rvec32i___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_rvec32i__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rvec32i___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rvec32i___024root___eval_initial__TOP(Vtb_rvec32i___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_rvec32i__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rvec32i___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0__DOT__i = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0__DOT__i)) {
        vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0__DOT__mem[(0xffU 
                                                                 & vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0__DOT__i)] = 0U;
        vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0__DOT__i 
            = ((IData)(1U) + vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0__DOT__i);
    }
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0__DOT__mem[0U] = 0x500393U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0__DOT__mem[1U] = 0x193U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0__DOT__mem[2U] = 0x538393U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0__DOT__mem[3U] = 0x118193U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0__DOT__mem[4U] = 0x538393U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0__DOT__mem[5U] = 0x118193U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0__DOT__mem[6U] = 0x538393U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0__DOT__mem[7U] = 0x118193U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0__DOT__mem[8U] = 0xfe01cde3U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[0U] = 0U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[1U] = 0U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[2U] = 0U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[3U] = 0U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[4U] = 0U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[5U] = 0U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[6U] = 0U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[7U] = 0U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[8U] = 0U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[9U] = 0U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[0xaU] = 0U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[0xbU] = 0U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[0xcU] = 0U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[0xdU] = 0U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[0xeU] = 0U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[0xfU] = 0U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[0x10U] = 0U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[0x11U] = 0U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[0x12U] = 0U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[0x13U] = 0U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[0x14U] = 0U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[0x15U] = 0U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[0x16U] = 0U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[0x17U] = 0U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[0x18U] = 0U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[0x19U] = 0U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[0x1aU] = 0U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[0x1bU] = 0U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[0x1cU] = 0U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[0x1dU] = 0U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[0x1eU] = 0U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[0x1fU] = 0U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__i = 0x20U;
}

VL_ATTR_COLD void Vtb_rvec32i___024root___eval_final(Vtb_rvec32i___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_rvec32i__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rvec32i___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_rvec32i___024root___dump_triggers__stl(Vtb_rvec32i___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_rvec32i___024root___eval_phase__stl(Vtb_rvec32i___024root* vlSelf);

VL_ATTR_COLD void Vtb_rvec32i___024root___eval_settle(Vtb_rvec32i___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_rvec32i__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rvec32i___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_rvec32i___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_rvec32i.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_rvec32i___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_rvec32i___024root___dump_triggers__stl(Vtb_rvec32i___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_rvec32i__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rvec32i___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtb_rvec32i___024root___act_comb__TOP__0(Vtb_rvec32i___024root* vlSelf);
VL_ATTR_COLD void Vtb_rvec32i___024root____Vm_traceActivitySetAll(Vtb_rvec32i___024root* vlSelf);

VL_ATTR_COLD void Vtb_rvec32i___024root___eval_stl(Vtb_rvec32i___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_rvec32i__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rvec32i___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_rvec32i___024root___act_comb__TOP__0(vlSelf);
        Vtb_rvec32i___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_rvec32i___024root___eval_triggers__stl(Vtb_rvec32i___024root* vlSelf);

VL_ATTR_COLD bool Vtb_rvec32i___024root___eval_phase__stl(Vtb_rvec32i___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_rvec32i__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rvec32i___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_rvec32i___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_rvec32i___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_rvec32i___024root___dump_triggers__act(Vtb_rvec32i___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_rvec32i__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rvec32i___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_rvec32i.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge tb_rvec32i.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_rvec32i___024root___dump_triggers__nba(Vtb_rvec32i___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_rvec32i__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rvec32i___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_rvec32i.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge tb_rvec32i.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_rvec32i___024root____Vm_traceActivitySetAll(Vtb_rvec32i___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_rvec32i__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rvec32i___024root____Vm_traceActivitySetAll\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
}

VL_ATTR_COLD void Vtb_rvec32i___024root___ctor_var_reset(Vtb_rvec32i___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_rvec32i__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rvec32i___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_rvec32i__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_rvec32i__DOT__cycle_count = 0;
    vlSelf->tb_rvec32i__DOT__instr_count = 0;
    vlSelf->tb_rvec32i__DOT__last_pc = VL_RAND_RESET_I(13);
    vlSelf->tb_rvec32i__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->tb_rvec32i__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_rvec32i__DOT__dut__DOT__cu_alu2reg = VL_RAND_RESET_I(1);
    vlSelf->tb_rvec32i__DOT__dut__DOT__cu_alu_op = VL_RAND_RESET_I(4);
    vlSelf->tb_rvec32i__DOT__dut__DOT__cu_alu_scr = VL_RAND_RESET_I(1);
    vlSelf->tb_rvec32i__DOT__dut__DOT__cu_ci_en = VL_RAND_RESET_I(1);
    vlSelf->tb_rvec32i__DOT__dut__DOT__cu_imm_rd = VL_RAND_RESET_I(1);
    vlSelf->tb_rvec32i__DOT__dut__DOT__cu_men = VL_RAND_RESET_I(1);
    vlSelf->tb_rvec32i__DOT__dut__DOT__cu_wem = VL_RAND_RESET_I(1);
    vlSelf->tb_rvec32i__DOT__dut__DOT__cu_wer = VL_RAND_RESET_I(1);
    vlSelf->tb_rvec32i__DOT__dut__DOT__alu_alu_sal = VL_RAND_RESET_I(32);
    vlSelf->tb_rvec32i__DOT__dut__DOT__cont_0_sal = VL_RAND_RESET_I(13);
    vlSelf->tb_rvec32i__DOT__dut__DOT__mux2_1_0_sal = VL_RAND_RESET_I(32);
    vlSelf->tb_rvec32i__DOT__dut__DOT__prog_m_0_func3 = VL_RAND_RESET_I(3);
    vlSelf->tb_rvec32i__DOT__dut__DOT__prog_m_0_funct7 = VL_RAND_RESET_I(7);
    vlSelf->tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode = VL_RAND_RESET_I(7);
    vlSelf->tb_rvec32i__DOT__dut__DOT__prog_m_0_rd = VL_RAND_RESET_I(5);
    vlSelf->tb_rvec32i__DOT__dut__DOT__prog_m_0_rs2 = VL_RAND_RESET_I(5);
    vlSelf->tb_rvec32i__DOT__dut__DOT__reg_b_0_do2 = VL_RAND_RESET_I(32);
    vlSelf->tb_rvec32i__DOT__dut__DOT__sum_0_dout = VL_RAND_RESET_I(13);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_rvec32i__DOT__dut__DOT__data_m_0__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_rvec32i__DOT__dut__DOT__data_m_0__DOT__addr = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_rvec32i__DOT__dut__DOT__prog_m_0__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_rvec32i__DOT__dut__DOT__prog_m_0__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->tb_rvec32i__DOT__dut__DOT__sign_oe_0__DOT__temp = VL_RAND_RESET_I(13);
    vlSelf->__Vtrigprevexpr___TOP__tb_rvec32i__DOT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
