// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rvec32i.h for the primary calling header

#ifndef VERILATED_VTB_RVEC32I___024ROOT_H_
#define VERILATED_VTB_RVEC32I___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_rvec32i__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rvec32i___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_rvec32i__DOT__clk;
    CData/*0:0*/ tb_rvec32i__DOT__dut__DOT__cu_alu2reg;
    CData/*3:0*/ tb_rvec32i__DOT__dut__DOT__cu_alu_op;
    CData/*0:0*/ tb_rvec32i__DOT__dut__DOT__cu_alu_scr;
    CData/*0:0*/ tb_rvec32i__DOT__dut__DOT__cu_ci_en;
    CData/*0:0*/ tb_rvec32i__DOT__dut__DOT__cu_imm_rd;
    CData/*0:0*/ tb_rvec32i__DOT__dut__DOT__cu_men;
    CData/*0:0*/ tb_rvec32i__DOT__dut__DOT__cu_wem;
    CData/*0:0*/ tb_rvec32i__DOT__dut__DOT__cu_wer;
    CData/*2:0*/ tb_rvec32i__DOT__dut__DOT__prog_m_0_func3;
    CData/*6:0*/ tb_rvec32i__DOT__dut__DOT__prog_m_0_funct7;
    CData/*6:0*/ tb_rvec32i__DOT__dut__DOT__prog_m_0_opcode;
    CData/*4:0*/ tb_rvec32i__DOT__dut__DOT__prog_m_0_rd;
    CData/*4:0*/ tb_rvec32i__DOT__dut__DOT__prog_m_0_rs2;
    CData/*7:0*/ tb_rvec32i__DOT__dut__DOT__data_m_0__DOT__addr;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_rvec32i__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*12:0*/ tb_rvec32i__DOT__last_pc;
    SData/*12:0*/ tb_rvec32i__DOT__dut__DOT__cont_0_sal;
    SData/*12:0*/ tb_rvec32i__DOT__dut__DOT__sum_0_dout;
    SData/*12:0*/ tb_rvec32i__DOT__dut__DOT__sign_oe_0__DOT__temp;
    IData/*31:0*/ tb_rvec32i__DOT__dut__DOT__alu_alu_sal;
    IData/*31:0*/ tb_rvec32i__DOT__dut__DOT__mux2_1_0_sal;
    IData/*31:0*/ tb_rvec32i__DOT__dut__DOT__reg_b_0_do2;
    IData/*31:0*/ tb_rvec32i__DOT__dut__DOT__prog_m_0__DOT__i;
    IData/*31:0*/ tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__i;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ tb_rvec32i__DOT__cycle_count;
    QData/*63:0*/ tb_rvec32i__DOT__instr_count;
    VlUnpacked<IData/*31:0*/, 256> tb_rvec32i__DOT__dut__DOT__data_m_0__DOT__mem;
    VlUnpacked<IData/*31:0*/, 256> tb_rvec32i__DOT__dut__DOT__prog_m_0__DOT__mem;
    VlUnpacked<IData/*31:0*/, 32> tb_rvec32i__DOT__dut__DOT__reg_b_0__DOT__mem;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h1b7725ae__0;
    VlTriggerScheduler __VtrigSched_h1b77266f__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_rvec32i__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_rvec32i___024root(Vtb_rvec32i__Syms* symsp, const char* v__name);
    ~Vtb_rvec32i___024root();
    VL_UNCOPYABLE(Vtb_rvec32i___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
