// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rvec32i.h for the primary calling header

#include "Vtb_rvec32i__pch.h"
#include "Vtb_rvec32i___024root.h"

VL_ATTR_COLD void Vtb_rvec32i___024root___eval_initial__TOP(Vtb_rvec32i___024root* vlSelf);
VlCoroutine Vtb_rvec32i___024root___eval_initial__TOP__Vtiming__0(Vtb_rvec32i___024root* vlSelf);
VlCoroutine Vtb_rvec32i___024root___eval_initial__TOP__Vtiming__1(Vtb_rvec32i___024root* vlSelf);

void Vtb_rvec32i___024root___eval_initial(Vtb_rvec32i___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_rvec32i__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rvec32i___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_rvec32i___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_rvec32i___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_rvec32i___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_rvec32i__DOT__clk__0 
        = vlSelfRef.tb_rvec32i__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vtb_rvec32i___024root___eval_initial__TOP__Vtiming__0(Vtb_rvec32i___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_rvec32i__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rvec32i___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_rvec32i__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb_rvec32i.sv", 
                                             29);
        vlSelfRef.tb_rvec32i__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_rvec32i__DOT__clk)));
    }
}

void Vtb_rvec32i___024root___act_comb__TOP__0(Vtb_rvec32i___024root* vlSelf);

void Vtb_rvec32i___024root___eval_act(Vtb_rvec32i___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_rvec32i__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rvec32i___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((5ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_rvec32i___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_rvec32i___024root___act_comb__TOP__0(Vtb_rvec32i___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_rvec32i__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rvec32i___024root___act_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0_do2 
        = vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem
        [(0x1fU & (vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0__DOT__mem
                   [(0xffU & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cont_0_sal))] 
                   >> 0xfU))];
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_rs2 
        = (0x1fU & (vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0__DOT__mem
                    [(0xffU & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cont_0_sal))] 
                    >> 0x14U));
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_rd 
        = (0x1fU & (vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0__DOT__mem
                    [(0xffU & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cont_0_sal))] 
                    >> 7U));
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_funct7 
        = (vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0__DOT__mem
           [(0xffU & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cont_0_sal))] 
           >> 0x19U);
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode 
        = (0x7fU & vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0__DOT__mem
           [(0xffU & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cont_0_sal))]);
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_func3 
        = (7U & (vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0__DOT__mem
                 [(0xffU & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cont_0_sal))] 
                 >> 0xcU));
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__sign_oe_0__DOT__temp 
        = ((0xfffU & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__sign_oe_0__DOT__temp)) 
           | (0x1000U & ((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_funct7) 
                         << 6U)));
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__sign_oe_0__DOT__temp 
        = ((0x1001U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__sign_oe_0__DOT__temp)) 
           | ((0x800U & ((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_rd) 
                         << 0xbU)) | ((0x7e0U & ((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_funct7) 
                                                 << 5U)) 
                                      | (0x1eU & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_rd)))));
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__sign_oe_0__DOT__temp 
        = (0x1ffeU & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__sign_oe_0__DOT__temp));
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_men = 0U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu2reg = 0U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_wer = 0U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_wem = 0U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_ci_en = 0U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_op = 0U;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_imm_rd = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode))) {
                            if ((1U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode))) {
                                if ((0U == (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_func3))) {
                                    vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_men = 1U;
                                    vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_imm_rd = 1U;
                                } else if ((1U == (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_func3))) {
                                    vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_men = 1U;
                                    vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_imm_rd = 1U;
                                } else if ((2U == (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_func3))) {
                                    vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_men = 1U;
                                    vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_imm_rd = 1U;
                                }
                            }
                        }
                    }
                }
            }
            if ((0x10U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode))) {
                            if ((1U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode))) {
                                if ((4U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_func3))) {
                                    if ((2U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_func3))) {
                                        vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu2reg = 0U;
                                    } else if ((1U 
                                                & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_func3))) {
                                        if ((0x20U 
                                             == (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_funct7))) {
                                            vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu2reg = 1U;
                                        } else if (
                                                   (0U 
                                                    == (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_funct7))) {
                                            vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu2reg = 1U;
                                        }
                                    } else {
                                        vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu2reg = 1U;
                                    }
                                } else if ((2U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_func3))) {
                                    vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu2reg = 1U;
                                } else if ((1U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_func3))) {
                                    vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu2reg = 1U;
                                } else if ((0x20U == (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_funct7))) {
                                    vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu2reg = 1U;
                                } else if ((0U == (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_funct7))) {
                                    vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu2reg = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode))) {
                            if ((1U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode))) {
                                if ((4U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_func3))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_func3) 
                                                  >> 1U)))) {
                                        vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_men = 1U;
                                    }
                                } else if ((2U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_func3))) {
                                    if ((1U & (~ (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_func3)))) {
                                        vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_men = 1U;
                                    }
                                } else {
                                    vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_men = 1U;
                                }
                            }
                        }
                    }
                }
            }
            if ((0x10U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode))) {
                            if ((1U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode))) {
                                vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu2reg = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_scr = 0U;
    if ((0x40U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode))) {
        if ((0x20U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode))) {
                            if ((1U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode))) {
                                if ((0U == (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_func3))) {
                                    vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_wer = 0U;
                                    vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_wem = 0U;
                                    vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_ci_en = 1U;
                                    vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_op = 0xfU;
                                    vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_scr = 1U;
                                } else if ((4U == (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_func3))) {
                                    vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_wer = 0U;
                                    vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_wem = 0U;
                                    vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_ci_en = 1U;
                                    vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_op = 4U;
                                    vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_scr = 1U;
                                } else if ((6U == (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_func3))) {
                                    vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_wer = 0U;
                                    vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_wem = 0U;
                                    vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_ci_en = 1U;
                                    vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_op = 6U;
                                    vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_scr = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x20U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode))) {
        if ((0x10U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode))) {
                        if ((1U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode))) {
                            if ((4U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_func3))) {
                                if ((2U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_func3))) {
                                    vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_wer = 1U;
                                    vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_wem = 0U;
                                    vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_op 
                                        = ((1U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_func3))
                                            ? 0xeU : 0xcU);
                                    vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_scr = 0U;
                                } else if ((1U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_func3))) {
                                    if ((0x20U == (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_funct7))) {
                                        vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_wer = 1U;
                                        vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_wem = 0U;
                                        vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_op = 0xbU;
                                        vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_scr = 1U;
                                    } else if ((0U 
                                                == (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_funct7))) {
                                        vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_wer = 1U;
                                        vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_wem = 0U;
                                        vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_op = 0xaU;
                                        vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_scr = 1U;
                                    }
                                } else {
                                    vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_wer = 1U;
                                    vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_wem = 0U;
                                    vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_op = 8U;
                                    vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_scr = 1U;
                                }
                            } else if ((2U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_func3))) {
                                vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_wer = 1U;
                                vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_wem = 0U;
                                vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_op 
                                    = ((1U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_func3))
                                        ? 6U : 4U);
                                vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_scr = 1U;
                            } else if ((1U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_func3))) {
                                vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_wer = 1U;
                                vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_wem = 0U;
                                vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_op = 2U;
                                vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_scr = 1U;
                            } else if ((0x20U == (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_funct7))) {
                                vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_wer = 1U;
                                vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_wem = 0U;
                                vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_op = 1U;
                                vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_scr = 1U;
                            } else if ((0U == (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_funct7))) {
                                vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_wer = 1U;
                                vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_wem = 0U;
                                vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_op = 0U;
                                vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_scr = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode) 
                             >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode))) {
                    if ((1U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode))) {
                        if ((0U == (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_func3))) {
                            vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_wem = 1U;
                            vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_op = 0U;
                        } else if ((1U == (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_func3))) {
                            vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_wem = 1U;
                            vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_op = 0U;
                        } else if ((2U == (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_func3))) {
                            vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_wem = 1U;
                            vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_op = 0U;
                        }
                    }
                }
            }
        }
    } else if ((0x10U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode))) {
                    if ((1U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode))) {
                        vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_wer = 1U;
                        vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_op 
                            = ((4U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_func3))
                                ? ((2U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_func3))
                                    ? ((1U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_func3))
                                        ? 0xeU : 0xcU)
                                    : ((1U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_func3))
                                        ? ((0x20U == (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_funct7))
                                            ? 0xaU : 0xbU)
                                        : 8U)) : ((2U 
                                                   & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_func3))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_func3))
                                                    ? 6U
                                                    : 4U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_func3))
                                                    ? 2U
                                                    : 0U)));
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode) 
                         >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode))) {
                if ((1U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode))) {
                    if ((4U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_func3))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_func3) 
                                      >> 1U)))) {
                            vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_wer = 1U;
                            vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_op = 0U;
                        }
                    } else if ((2U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_func3))) {
                        if ((1U & (~ (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_func3)))) {
                            vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_wer = 1U;
                            vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_op = 0U;
                        }
                    } else {
                        vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_wer = 1U;
                        vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_op = 0U;
                    }
                }
            }
        }
    }
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__mux2_1_0_sal 
        = ((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_scr)
            ? vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem
           [vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_rs2]
            : (((- (IData)((vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0__DOT__mem
                            [(0xffU & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cont_0_sal))] 
                            >> 0x1fU))) << 0xcU) | 
               (((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_funct7) 
                 << 5U) | ((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_imm_rd)
                            ? (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_rd)
                            : (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_rs2)))));
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__alu_alu_sal 
        = ((8U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_op))
            ? ((4U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_op))
                ? ((2U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_op))
                    ? ((1U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_op))
                        ? ((vlSelfRef.tb_rvec32i__DOT__dut__DOT__mux2_1_0_sal 
                            == vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0_do2)
                            ? 1U : 0U) : (vlSelfRef.tb_rvec32i__DOT__dut__DOT__mux2_1_0_sal 
                                          & vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0_do2))
                    : ((1U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_op))
                        ? 0U : (vlSelfRef.tb_rvec32i__DOT__dut__DOT__mux2_1_0_sal 
                                | vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0_do2)))
                : ((2U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_op))
                    ? ((1U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_op))
                        ? VL_SHIFTRS_III(32,32,32, vlSelfRef.tb_rvec32i__DOT__dut__DOT__mux2_1_0_sal, vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0_do2)
                        : VL_SHIFTR_III(32,32,32, vlSelfRef.tb_rvec32i__DOT__dut__DOT__mux2_1_0_sal, vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0_do2))
                    : ((1U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_op))
                        ? 0U : (vlSelfRef.tb_rvec32i__DOT__dut__DOT__mux2_1_0_sal 
                                ^ vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0_do2))))
            : ((4U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_op))
                ? ((2U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_op))
                    ? ((1U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_op))
                        ? 0U : ((vlSelfRef.tb_rvec32i__DOT__dut__DOT__mux2_1_0_sal 
                                 < vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0_do2)
                                 ? 1U : 0U)) : ((1U 
                                                 & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_op))
                                                 ? 0U
                                                 : 
                                                (VL_LTS_III(32, vlSelfRef.tb_rvec32i__DOT__dut__DOT__mux2_1_0_sal, vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0_do2)
                                                  ? 1U
                                                  : 0U)))
                : ((2U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_op))
                    ? ((1U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_op))
                        ? 0U : VL_SHIFTL_III(32,32,32, vlSelfRef.tb_rvec32i__DOT__dut__DOT__mux2_1_0_sal, vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0_do2))
                    : ((1U & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu_op))
                        ? (vlSelfRef.tb_rvec32i__DOT__dut__DOT__mux2_1_0_sal 
                           - vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0_do2)
                        : (vlSelfRef.tb_rvec32i__DOT__dut__DOT__mux2_1_0_sal 
                           + vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0_do2)))));
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__data_m_0__DOT__addr 
        = ((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_wem)
            ? (0xffU & vlSelfRef.tb_rvec32i__DOT__dut__DOT__alu_alu_sal)
            : 1U);
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__sum_0_dout 
        = (0x1fffU & (((vlSelfRef.tb_rvec32i__DOT__dut__DOT__alu_alu_sal 
                        & (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_ci_en))
                        ? (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__sign_oe_0__DOT__temp)
                        : 1U) + (IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cont_0_sal)));
}

void Vtb_rvec32i___024root___nba_sequent__TOP__0(Vtb_rvec32i___024root* vlSelf);

void Vtb_rvec32i___024root___eval_nba(Vtb_rvec32i___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_rvec32i__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rvec32i___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_rvec32i___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_rvec32i___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_rvec32i___024root___nba_sequent__TOP__0(Vtb_rvec32i___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_rvec32i__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rvec32i___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__tb_rvec32i__DOT__dut__DOT__data_m_0__DOT__mem__v0;
    __VdlyVal__tb_rvec32i__DOT__dut__DOT__data_m_0__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__tb_rvec32i__DOT__dut__DOT__data_m_0__DOT__mem__v0;
    __VdlyDim0__tb_rvec32i__DOT__dut__DOT__data_m_0__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_rvec32i__DOT__dut__DOT__data_m_0__DOT__mem__v0;
    __VdlySet__tb_rvec32i__DOT__dut__DOT__data_m_0__DOT__mem__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem__v0;
    __VdlyVal__tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem__v0;
    __VdlyDim0__tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem__v0;
    __VdlySet__tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem__v0 = 0;
    // Body
    __VdlySet__tb_rvec32i__DOT__dut__DOT__data_m_0__DOT__mem__v0 = 0U;
    __VdlySet__tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem__v0 = 0U;
    vlSelfRef.tb_rvec32i__DOT__cycle_count = (1ULL 
                                              + vlSelfRef.tb_rvec32i__DOT__cycle_count);
    if (vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_wem) {
        __VdlyVal__tb_rvec32i__DOT__dut__DOT__data_m_0__DOT__mem__v0 
            = vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem
            [vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_rs2];
        __VdlyDim0__tb_rvec32i__DOT__dut__DOT__data_m_0__DOT__mem__v0 
            = vlSelfRef.tb_rvec32i__DOT__dut__DOT__data_m_0__DOT__addr;
        __VdlySet__tb_rvec32i__DOT__dut__DOT__data_m_0__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_wer) {
        __VdlyVal__tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem__v0 
            = ((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cu_alu2reg)
                ? vlSelfRef.tb_rvec32i__DOT__dut__DOT__alu_alu_sal
                : vlSelfRef.tb_rvec32i__DOT__dut__DOT__data_m_0__DOT__mem
               [vlSelfRef.tb_rvec32i__DOT__dut__DOT__data_m_0__DOT__addr]);
        __VdlyDim0__tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem__v0 
            = vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0_rd;
        __VdlySet__tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelfRef.tb_rvec32i__DOT__dut__DOT__cont_0_sal) 
         != (IData)(vlSelfRef.tb_rvec32i__DOT__last_pc))) {
        vlSelfRef.tb_rvec32i__DOT__instr_count = (1ULL 
                                                  + vlSelfRef.tb_rvec32i__DOT__instr_count);
    }
    if (__VdlySet__tb_rvec32i__DOT__dut__DOT__data_m_0__DOT__mem__v0) {
        vlSelfRef.tb_rvec32i__DOT__dut__DOT__data_m_0__DOT__mem[__VdlyDim0__tb_rvec32i__DOT__dut__DOT__data_m_0__DOT__mem__v0] 
            = __VdlyVal__tb_rvec32i__DOT__dut__DOT__data_m_0__DOT__mem__v0;
    }
    if (__VdlySet__tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem__v0) {
        vlSelfRef.tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem[__VdlyDim0__tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem__v0] 
            = __VdlyVal__tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem__v0;
    }
    vlSelfRef.tb_rvec32i__DOT__last_pc = vlSelfRef.tb_rvec32i__DOT__dut__DOT__cont_0_sal;
    vlSelfRef.tb_rvec32i__DOT__dut__DOT__cont_0_sal 
        = vlSelfRef.tb_rvec32i__DOT__dut__DOT__sum_0_dout;
}

void Vtb_rvec32i___024root___timing_resume(Vtb_rvec32i___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_rvec32i__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rvec32i___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h1b7725ae__0.resume(
                                                   "@(posedge tb_rvec32i.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h1b77266f__0.resume(
                                                   "@(negedge tb_rvec32i.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_rvec32i___024root___timing_commit(Vtb_rvec32i___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_rvec32i__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rvec32i___024root___timing_commit\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h1b7725ae__0.commit(
                                                   "@(posedge tb_rvec32i.clk)");
    }
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h1b77266f__0.commit(
                                                   "@(negedge tb_rvec32i.clk)");
    }
}

void Vtb_rvec32i___024root___eval_triggers__act(Vtb_rvec32i___024root* vlSelf);

bool Vtb_rvec32i___024root___eval_phase__act(Vtb_rvec32i___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_rvec32i__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rvec32i___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_rvec32i___024root___eval_triggers__act(vlSelf);
    Vtb_rvec32i___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_rvec32i___024root___timing_resume(vlSelf);
        Vtb_rvec32i___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_rvec32i___024root___eval_phase__nba(Vtb_rvec32i___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_rvec32i__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rvec32i___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_rvec32i___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_rvec32i___024root___dump_triggers__nba(Vtb_rvec32i___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_rvec32i___024root___dump_triggers__act(Vtb_rvec32i___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_rvec32i___024root___eval(Vtb_rvec32i___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_rvec32i__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rvec32i___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_rvec32i___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_rvec32i.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_rvec32i___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_rvec32i.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_rvec32i___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_rvec32i___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_rvec32i___024root___eval_debug_assertions(Vtb_rvec32i___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_rvec32i__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rvec32i___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
