// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rvec32i.h for the primary calling header

#include "Vtb_rvec32i__pch.h"
#include "Vtb_rvec32i__Syms.h"
#include "Vtb_rvec32i___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_rvec32i___024root___eval_initial__TOP__Vtiming__1(Vtb_rvec32i___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_rvec32i__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rvec32i___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    std::string tb_rvec32i__DOT__kernel_s;
    std::string tb_rvec32i__DOT__kernel_obj;
    std::string tb_rvec32i__DOT__command;
    IData/*31:0*/ tb_rvec32i__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_rvec32i__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    tb_rvec32i__DOT__kernel_s = std::string{"Algorithms/rv32i/count_up.s"};
    tb_rvec32i__DOT__kernel_obj = std::string{"sim/kernel.o"};
    __Vtemp_1[0U] = 0x4c3d2573U;
    __Vtemp_1[1U] = 0x45524e45U;
    __Vtemp_1[2U] = 0x4bU;
    if (VL_VALUEPLUSARGS_INN(64, VL_CVT_PACK_STR_NW(3, __Vtemp_1), 
                             tb_rvec32i__DOT__kernel_s)) {
    }
    tb_rvec32i__DOT__command = VL_SFORMATF_N_NX("riscv64-unknown-elf-gcc -march=rv32i -mabi=ilp32 -nostdlib -ffreestanding -c %@ -o sim/kernel.o",0,
                                                -1,
                                                &(tb_rvec32i__DOT__kernel_s)) ;
    if (VL_UNLIKELY((0U != VL_SYSTEM_IN(tb_rvec32i__DOT__command)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_rvec32i.sv:45: Assertion failed in %Ntb_rvec32i: Failed to assemble kernel: %@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(tb_rvec32i__DOT__kernel_s));
        VL_STOP_MT("tb_rvec32i.sv", 45, "", false);
    }
    tb_rvec32i__DOT__command = std::string{"riscv64-unknown-elf-objcopy -O verilog --verilog-data-width=4 -j .text sim/kernel.o sim/kernel.hex"};
    if (VL_UNLIKELY((0U != VL_SYSTEM_IN(std::string{"riscv64-unknown-elf-objcopy -O verilog --verilog-data-width=4 -j .text sim/kernel.o sim/kernel.hex"})))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_rvec32i.sv:54: Assertion failed in %Ntb_rvec32i: Failed to generate hex from: %@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(tb_rvec32i__DOT__kernel_obj));
        VL_STOP_MT("tb_rvec32i.sv", 54, "", false);
    }
    VL_READMEM_N(true, 32, 256, 0, std::string{"sim/kernel.hex"}
                 ,  &(vlSelfRef.tb_rvec32i__DOT__dut__DOT__prog_m_0__DOT__mem)
                 , 0, ~0ULL);
    vlSymsp->_vm_contextp__->dumpfile(std::string{"wave.vcd"});
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_rvec32i__DOT__cycle_count = 0ULL;
    vlSelfRef.tb_rvec32i__DOT__instr_count = 0ULL;
    vlSelfRef.tb_rvec32i__DOT__last_pc = vlSelfRef.tb_rvec32i__DOT__dut__DOT__cont_0_sal;
    tb_rvec32i__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0xc8U;
    while (VL_LTS_III(32, 0U, tb_rvec32i__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h1b7725ae__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_rvec32i.clk)", 
                                                             "tb_rvec32i.sv", 
                                                             63);
        tb_rvec32i__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_rvec32i__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VtrigSched_h1b77266f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_rvec32i.clk)", 
                                                         "tb_rvec32i.sv", 
                                                         64);
    VL_WRITEF_NX("cycles=%0# instructions=%0# ipc=%0f\n",0,
                 64,vlSelfRef.tb_rvec32i__DOT__cycle_count,
                 64,vlSelfRef.tb_rvec32i__DOT__instr_count,
                 64,((0ULL < vlSelfRef.tb_rvec32i__DOT__cycle_count)
                      ? (VL_ITOR_D_Q(64, vlSelfRef.tb_rvec32i__DOT__instr_count) 
                         / VL_ITOR_D_Q(64, vlSelfRef.tb_rvec32i__DOT__cycle_count))
                      : 0.0));
    VL_FINISH_MT("tb_rvec32i.sv", 68, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_rvec32i___024root___dump_triggers__act(Vtb_rvec32i___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_rvec32i___024root___eval_triggers__act(Vtb_rvec32i___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_rvec32i__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rvec32i___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_rvec32i__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_rvec32i__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.set(2U, ((~ (IData)(vlSelfRef.tb_rvec32i__DOT__clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_rvec32i__DOT__clk__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_rvec32i__DOT__clk__0 
        = vlSelfRef.tb_rvec32i__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_rvec32i___024root___dump_triggers__act(vlSelf);
    }
#endif
}
