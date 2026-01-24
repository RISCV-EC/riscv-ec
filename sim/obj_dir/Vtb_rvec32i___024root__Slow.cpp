// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rvec32i.h for the primary calling header

#include "Vtb_rvec32i__pch.h"
#include "Vtb_rvec32i__Syms.h"
#include "Vtb_rvec32i___024root.h"

void Vtb_rvec32i___024root___ctor_var_reset(Vtb_rvec32i___024root* vlSelf);

Vtb_rvec32i___024root::Vtb_rvec32i___024root(Vtb_rvec32i__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_rvec32i___024root___ctor_var_reset(this);
}

void Vtb_rvec32i___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_rvec32i___024root::~Vtb_rvec32i___024root() {
}
