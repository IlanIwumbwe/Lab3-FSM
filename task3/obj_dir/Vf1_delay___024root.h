// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vf1_delay.h for the primary calling header

#ifndef VERILATED_VF1_DELAY___024ROOT_H_
#define VERILATED_VF1_DELAY___024ROOT_H_  // guard

#include "verilated.h"

class Vf1_delay__Syms;

class Vf1_delay___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(_clk,0,0);
    VL_IN8(_en,0,0);
    VL_IN8(_rst,0,0);
    VL_OUT8(_data_out,7,0);
    CData/*0:0*/ f1_delay__DOT__tick;
    CData/*0:0*/ __Vclklast__TOP___clk;
    VL_IN16(_N,15,0);
    SData/*15:0*/ f1_delay__DOT__Tick__DOT__count;
    IData/*31:0*/ f1_delay__DOT__FSM__DOT__current_state;
    IData/*31:0*/ f1_delay__DOT__FSM__DOT__next_state;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vf1_delay__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vf1_delay___024root(Vf1_delay__Syms* symsp, const char* name);
    ~Vf1_delay___024root();
    VL_UNCOPYABLE(Vf1_delay___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
