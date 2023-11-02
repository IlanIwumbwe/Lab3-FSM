// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_delay.h for the primary calling header

#include "verilated.h"

#include "Vf1_delay___024root.h"

VL_ATTR_COLD void Vf1_delay___024root___settle__TOP__0(Vf1_delay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_delay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_delay___024root___settle__TOP__0\n"); );
    // Body
    if (((((((((0U == vlSelf->f1_delay__DOT__FSM__DOT__current_state) 
               | (1U == vlSelf->f1_delay__DOT__FSM__DOT__current_state)) 
              | (2U == vlSelf->f1_delay__DOT__FSM__DOT__current_state)) 
             | (3U == vlSelf->f1_delay__DOT__FSM__DOT__current_state)) 
            | (4U == vlSelf->f1_delay__DOT__FSM__DOT__current_state)) 
           | (5U == vlSelf->f1_delay__DOT__FSM__DOT__current_state)) 
          | (6U == vlSelf->f1_delay__DOT__FSM__DOT__current_state)) 
         | (7U == vlSelf->f1_delay__DOT__FSM__DOT__current_state))) {
        if ((0U == vlSelf->f1_delay__DOT__FSM__DOT__current_state)) {
            vlSelf->_data_out = 0U;
            vlSelf->f1_delay__DOT__FSM__DOT__next_state 
                = ((IData)(vlSelf->f1_delay__DOT__tick)
                    ? 1U : vlSelf->f1_delay__DOT__FSM__DOT__current_state);
        } else if ((1U == vlSelf->f1_delay__DOT__FSM__DOT__current_state)) {
            vlSelf->_data_out = 1U;
            vlSelf->f1_delay__DOT__FSM__DOT__next_state 
                = ((IData)(vlSelf->f1_delay__DOT__tick)
                    ? 2U : vlSelf->f1_delay__DOT__FSM__DOT__current_state);
        } else if ((2U == vlSelf->f1_delay__DOT__FSM__DOT__current_state)) {
            vlSelf->_data_out = 3U;
            vlSelf->f1_delay__DOT__FSM__DOT__next_state 
                = ((IData)(vlSelf->f1_delay__DOT__tick)
                    ? 3U : vlSelf->f1_delay__DOT__FSM__DOT__current_state);
        } else if ((3U == vlSelf->f1_delay__DOT__FSM__DOT__current_state)) {
            vlSelf->_data_out = 7U;
            vlSelf->f1_delay__DOT__FSM__DOT__next_state 
                = ((IData)(vlSelf->f1_delay__DOT__tick)
                    ? 4U : vlSelf->f1_delay__DOT__FSM__DOT__current_state);
        } else if ((4U == vlSelf->f1_delay__DOT__FSM__DOT__current_state)) {
            vlSelf->_data_out = 0xfU;
            vlSelf->f1_delay__DOT__FSM__DOT__next_state 
                = ((IData)(vlSelf->f1_delay__DOT__tick)
                    ? 5U : vlSelf->f1_delay__DOT__FSM__DOT__current_state);
        } else if ((5U == vlSelf->f1_delay__DOT__FSM__DOT__current_state)) {
            vlSelf->_data_out = 0x1fU;
            vlSelf->f1_delay__DOT__FSM__DOT__next_state 
                = ((IData)(vlSelf->f1_delay__DOT__tick)
                    ? 6U : vlSelf->f1_delay__DOT__FSM__DOT__current_state);
        } else if ((6U == vlSelf->f1_delay__DOT__FSM__DOT__current_state)) {
            vlSelf->_data_out = 0x3fU;
            vlSelf->f1_delay__DOT__FSM__DOT__next_state 
                = ((IData)(vlSelf->f1_delay__DOT__tick)
                    ? 7U : vlSelf->f1_delay__DOT__FSM__DOT__current_state);
        } else {
            vlSelf->_data_out = 0x7fU;
            vlSelf->f1_delay__DOT__FSM__DOT__next_state 
                = ((IData)(vlSelf->f1_delay__DOT__tick)
                    ? 8U : vlSelf->f1_delay__DOT__FSM__DOT__current_state);
        }
    } else if ((8U == vlSelf->f1_delay__DOT__FSM__DOT__current_state)) {
        vlSelf->_data_out = 0xffU;
        vlSelf->f1_delay__DOT__FSM__DOT__next_state 
            = ((IData)(vlSelf->f1_delay__DOT__tick)
                ? 0U : vlSelf->f1_delay__DOT__FSM__DOT__current_state);
    } else {
        vlSelf->_data_out = 0U;
        vlSelf->f1_delay__DOT__FSM__DOT__next_state = 0U;
    }
}

VL_ATTR_COLD void Vf1_delay___024root___eval_initial(Vf1_delay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_delay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_delay___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP___clk = vlSelf->_clk;
}

VL_ATTR_COLD void Vf1_delay___024root___eval_settle(Vf1_delay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_delay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_delay___024root___eval_settle\n"); );
    // Body
    Vf1_delay___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vf1_delay___024root___final(Vf1_delay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_delay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_delay___024root___final\n"); );
}

VL_ATTR_COLD void Vf1_delay___024root___ctor_var_reset(Vf1_delay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_delay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_delay___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->_N = VL_RAND_RESET_I(16);
    vlSelf->_en = VL_RAND_RESET_I(1);
    vlSelf->_rst = VL_RAND_RESET_I(1);
    vlSelf->_clk = VL_RAND_RESET_I(1);
    vlSelf->_data_out = VL_RAND_RESET_I(8);
    vlSelf->f1_delay__DOT__tick = VL_RAND_RESET_I(1);
    vlSelf->f1_delay__DOT__Tick__DOT__count = VL_RAND_RESET_I(16);
    vlSelf->f1_delay__DOT__FSM__DOT__current_state = 0;
    vlSelf->f1_delay__DOT__FSM__DOT__next_state = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
