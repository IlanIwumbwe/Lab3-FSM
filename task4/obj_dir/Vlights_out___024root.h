// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vlights_out.h for the primary calling header

#ifndef VERILATED_VLIGHTS_OUT___024ROOT_H_
#define VERILATED_VLIGHTS_OUT___024ROOT_H_  // guard

#include "verilated.h"

class Vlights_out__Syms;

class Vlights_out___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(trigger,0,0);
    VL_OUT8(data_out,7,0);
    CData/*0:0*/ lights_out__DOT__one_second_pulse;
    CData/*0:0*/ lights_out__DOT__cmd_seq;
    CData/*0:0*/ lights_out__DOT__cmd_delay;
    CData/*6:0*/ lights_out__DOT____Vcellout__LFSR__data_out;
    CData/*0:0*/ lights_out__DOT____Vcellinp__F1FSM__en;
    CData/*6:0*/ lights_out__DOT__LFSR__DOT__sreg;
    CData/*6:0*/ lights_out__DOT__Delay__DOT__count;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN16(clktickN,15,0);
    SData/*15:0*/ lights_out__DOT__ClkTick__DOT__count;
    IData/*31:0*/ lights_out__DOT__Delay__DOT__current_state;
    IData/*31:0*/ lights_out__DOT__Delay__DOT__next_state;
    IData/*31:0*/ lights_out__DOT__F1FSM__DOT__current_state;
    IData/*31:0*/ lights_out__DOT__F1FSM__DOT__next_state;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vlights_out__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vlights_out___024root(Vlights_out__Syms* symsp, const char* name);
    ~Vlights_out___024root();
    VL_UNCOPYABLE(Vlights_out___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
