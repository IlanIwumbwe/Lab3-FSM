// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_delay.h for the primary calling header

#include "verilated.h"

#include "Vf1_delay__Syms.h"
#include "Vf1_delay___024root.h"

void Vf1_delay___024root___ctor_var_reset(Vf1_delay___024root* vlSelf);

Vf1_delay___024root::Vf1_delay___024root(Vf1_delay__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vf1_delay___024root___ctor_var_reset(this);
}

void Vf1_delay___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vf1_delay___024root::~Vf1_delay___024root() {
}
