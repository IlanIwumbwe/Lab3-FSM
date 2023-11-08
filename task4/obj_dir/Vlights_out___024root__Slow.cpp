// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlights_out.h for the primary calling header

#include "verilated.h"

#include "Vlights_out__Syms.h"
#include "Vlights_out___024root.h"

void Vlights_out___024root___ctor_var_reset(Vlights_out___024root* vlSelf);

Vlights_out___024root::Vlights_out___024root(Vlights_out__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vlights_out___024root___ctor_var_reset(this);
}

void Vlights_out___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vlights_out___024root::~Vlights_out___024root() {
}
