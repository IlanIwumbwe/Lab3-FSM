// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlights_out.h for the primary calling header

#include "verilated.h"

#include "Vlights_out___024root.h"

VL_ATTR_COLD void Vlights_out___024root___initial__TOP__0(Vlights_out___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlights_out__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlights_out___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->lights_out__DOT__Delay__DOT__count = 0U;
    vlSelf->lights_out__DOT__cmd_delay = 0U;
    vlSelf->lights_out__DOT__cmd_seq = 1U;
    vlSelf->lights_out__DOT__LFSR__DOT__sreg = 1U;
}

VL_ATTR_COLD void Vlights_out___024root___settle__TOP__0(Vlights_out___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlights_out__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlights_out___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->lights_out__DOT__cmd_delay = ((7U != vlSelf->lights_out__DOT__F1FSM__DOT__current_state) 
                                          & (8U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state));
    vlSelf->lights_out__DOT__cmd_seq = ((7U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state) 
                                        | (8U != vlSelf->lights_out__DOT__F1FSM__DOT__current_state));
    vlSelf->lights_out__DOT__Delay__DOT__next_state 
        = ((0U == vlSelf->lights_out__DOT__Delay__DOT__current_state)
            ? ((IData)(vlSelf->lights_out__DOT__cmd_delay)
                ? 1U : vlSelf->lights_out__DOT__Delay__DOT__current_state)
            : ((1U == vlSelf->lights_out__DOT__Delay__DOT__current_state)
                ? ((0U == (IData)(vlSelf->lights_out__DOT__Delay__DOT__count))
                    ? 2U : vlSelf->lights_out__DOT__Delay__DOT__current_state)
                : ((2U == vlSelf->lights_out__DOT__Delay__DOT__current_state)
                    ? ((IData)(vlSelf->lights_out__DOT__cmd_delay)
                        ? 3U : 0U) : ((3U == vlSelf->lights_out__DOT__Delay__DOT__current_state)
                                       ? ((IData)(vlSelf->lights_out__DOT__cmd_delay)
                                           ? vlSelf->lights_out__DOT__Delay__DOT__current_state
                                           : 0U) : 0U))));
    vlSelf->lights_out__DOT____Vcellinp__F1FSM__en 
        = ((IData)(vlSelf->lights_out__DOT__cmd_seq)
            ? (IData)(vlSelf->lights_out__DOT__one_second_pulse)
            : ((0U != vlSelf->lights_out__DOT__Delay__DOT__current_state) 
               & ((1U != vlSelf->lights_out__DOT__Delay__DOT__current_state) 
                  & (2U == vlSelf->lights_out__DOT__Delay__DOT__current_state))));
    if (((((((((0U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state) 
               | (1U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state)) 
              | (2U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state)) 
             | (3U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state)) 
            | (4U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state)) 
           | (5U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state)) 
          | (6U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state)) 
         | (7U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state))) {
        if ((0U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state)) {
            vlSelf->data_out = 0U;
            vlSelf->lights_out__DOT__F1FSM__DOT__next_state 
                = (((IData)(vlSelf->lights_out__DOT____Vcellinp__F1FSM__en) 
                    & (IData)(vlSelf->trigger)) ? 1U
                    : vlSelf->lights_out__DOT__F1FSM__DOT__current_state);
        } else if ((1U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state)) {
            vlSelf->data_out = 1U;
            vlSelf->lights_out__DOT__F1FSM__DOT__next_state 
                = ((IData)(vlSelf->lights_out__DOT____Vcellinp__F1FSM__en)
                    ? 2U : vlSelf->lights_out__DOT__F1FSM__DOT__current_state);
        } else if ((2U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state)) {
            vlSelf->data_out = 3U;
            vlSelf->lights_out__DOT__F1FSM__DOT__next_state 
                = ((IData)(vlSelf->lights_out__DOT____Vcellinp__F1FSM__en)
                    ? 3U : vlSelf->lights_out__DOT__F1FSM__DOT__current_state);
        } else if ((3U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state)) {
            vlSelf->data_out = 7U;
            vlSelf->lights_out__DOT__F1FSM__DOT__next_state 
                = ((IData)(vlSelf->lights_out__DOT____Vcellinp__F1FSM__en)
                    ? 4U : vlSelf->lights_out__DOT__F1FSM__DOT__current_state);
        } else if ((4U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state)) {
            vlSelf->data_out = 0xfU;
            vlSelf->lights_out__DOT__F1FSM__DOT__next_state 
                = ((IData)(vlSelf->lights_out__DOT____Vcellinp__F1FSM__en)
                    ? 5U : vlSelf->lights_out__DOT__F1FSM__DOT__current_state);
        } else if ((5U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state)) {
            vlSelf->data_out = 0x1fU;
            vlSelf->lights_out__DOT__F1FSM__DOT__next_state 
                = ((IData)(vlSelf->lights_out__DOT____Vcellinp__F1FSM__en)
                    ? 6U : vlSelf->lights_out__DOT__F1FSM__DOT__current_state);
        } else if ((6U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state)) {
            vlSelf->data_out = 0x3fU;
            vlSelf->lights_out__DOT__F1FSM__DOT__next_state 
                = ((IData)(vlSelf->lights_out__DOT____Vcellinp__F1FSM__en)
                    ? 7U : vlSelf->lights_out__DOT__F1FSM__DOT__current_state);
        } else {
            vlSelf->data_out = 0x7fU;
            vlSelf->lights_out__DOT__F1FSM__DOT__next_state 
                = ((IData)(vlSelf->lights_out__DOT____Vcellinp__F1FSM__en)
                    ? 8U : vlSelf->lights_out__DOT__F1FSM__DOT__current_state);
        }
    } else if ((8U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state)) {
        vlSelf->data_out = 0xffU;
        vlSelf->lights_out__DOT__F1FSM__DOT__next_state 
            = ((IData)(vlSelf->lights_out__DOT____Vcellinp__F1FSM__en)
                ? 0U : vlSelf->lights_out__DOT__F1FSM__DOT__current_state);
    } else {
        vlSelf->data_out = 0U;
        vlSelf->lights_out__DOT__F1FSM__DOT__next_state = 0U;
    }
}

VL_ATTR_COLD void Vlights_out___024root___eval_initial(Vlights_out___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlights_out__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlights_out___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vlights_out___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vlights_out___024root___eval_settle(Vlights_out___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlights_out__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlights_out___024root___eval_settle\n"); );
    // Body
    Vlights_out___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vlights_out___024root___final(Vlights_out___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlights_out__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlights_out___024root___final\n"); );
}

VL_ATTR_COLD void Vlights_out___024root___ctor_var_reset(Vlights_out___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlights_out__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlights_out___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->trigger = VL_RAND_RESET_I(1);
    vlSelf->clktickN = VL_RAND_RESET_I(16);
    vlSelf->data_out = VL_RAND_RESET_I(8);
    vlSelf->lights_out__DOT__one_second_pulse = VL_RAND_RESET_I(1);
    vlSelf->lights_out__DOT__cmd_seq = VL_RAND_RESET_I(1);
    vlSelf->lights_out__DOT__cmd_delay = VL_RAND_RESET_I(1);
    vlSelf->lights_out__DOT____Vcellout__LFSR__data_out = VL_RAND_RESET_I(7);
    vlSelf->lights_out__DOT____Vcellinp__F1FSM__en = VL_RAND_RESET_I(1);
    vlSelf->lights_out__DOT__LFSR__DOT__sreg = VL_RAND_RESET_I(7);
    vlSelf->lights_out__DOT__Delay__DOT__count = VL_RAND_RESET_I(7);
    vlSelf->lights_out__DOT__Delay__DOT__current_state = 0;
    vlSelf->lights_out__DOT__Delay__DOT__next_state = 0;
    vlSelf->lights_out__DOT__ClkTick__DOT__count = VL_RAND_RESET_I(16);
    vlSelf->lights_out__DOT__F1FSM__DOT__current_state = 0;
    vlSelf->lights_out__DOT__F1FSM__DOT__next_state = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
