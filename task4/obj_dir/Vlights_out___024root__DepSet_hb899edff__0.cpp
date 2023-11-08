// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlights_out.h for the primary calling header

#include "verilated.h"

#include "Vlights_out___024root.h"

VL_INLINE_OPT void Vlights_out___024root___sequent__TOP__0(Vlights_out___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlights_out__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlights_out___024root___sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vdly__lights_out__DOT__LFSR__DOT__sreg;
    SData/*15:0*/ __Vdly__lights_out__DOT__ClkTick__DOT__count;
    // Body
    __Vdly__lights_out__DOT__LFSR__DOT__sreg = vlSelf->lights_out__DOT__LFSR__DOT__sreg;
    __Vdly__lights_out__DOT__ClkTick__DOT__count = vlSelf->lights_out__DOT__ClkTick__DOT__count;
    if (vlSelf->rst) {
        vlSelf->lights_out__DOT__Delay__DOT__current_state = 0U;
        vlSelf->lights_out__DOT__one_second_pulse = 0U;
        __Vdly__lights_out__DOT__ClkTick__DOT__count 
            = vlSelf->clktickN;
        vlSelf->lights_out__DOT__F1FSM__DOT__current_state = 0U;
    } else {
        vlSelf->lights_out__DOT__Delay__DOT__current_state 
            = vlSelf->lights_out__DOT__Delay__DOT__next_state;
        if (vlSelf->lights_out__DOT__cmd_seq) {
            if ((0U == (IData)(vlSelf->lights_out__DOT__ClkTick__DOT__count))) {
                vlSelf->lights_out__DOT__one_second_pulse = 1U;
                __Vdly__lights_out__DOT__ClkTick__DOT__count 
                    = vlSelf->clktickN;
            } else {
                __Vdly__lights_out__DOT__ClkTick__DOT__count 
                    = (0xffffU & ((IData)(vlSelf->lights_out__DOT__ClkTick__DOT__count) 
                                  - (IData)(1U)));
                vlSelf->lights_out__DOT__one_second_pulse = 0U;
            }
        }
        vlSelf->lights_out__DOT__F1FSM__DOT__current_state 
            = vlSelf->lights_out__DOT__F1FSM__DOT__next_state;
    }
    vlSelf->lights_out__DOT__Delay__DOT__count = (0x7fU 
                                                  & ((((IData)(vlSelf->rst) 
                                                       | (IData)(vlSelf->lights_out__DOT__cmd_delay)) 
                                                      | (0U 
                                                         == (IData)(vlSelf->lights_out__DOT__Delay__DOT__count)))
                                                      ? 
                                                     ((IData)(vlSelf->lights_out__DOT____Vcellout__LFSR__data_out) 
                                                      - (IData)(1U))
                                                      : 
                                                     ((IData)(vlSelf->lights_out__DOT__Delay__DOT__count) 
                                                      - (IData)(1U))));
    vlSelf->lights_out__DOT__ClkTick__DOT__count = __Vdly__lights_out__DOT__ClkTick__DOT__count;
    __Vdly__lights_out__DOT__LFSR__DOT__sreg = ((0x7eU 
                                                 & ((IData)(vlSelf->lights_out__DOT__LFSR__DOT__sreg) 
                                                    << 1U)) 
                                                | (1U 
                                                   & VL_REDXOR_8(
                                                                 (0x44U 
                                                                  & (IData)(vlSelf->lights_out__DOT__LFSR__DOT__sreg)))));
    vlSelf->lights_out__DOT____Vcellout__LFSR__data_out 
        = vlSelf->lights_out__DOT__LFSR__DOT__sreg;
    vlSelf->data_out = (((((((((0U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state) 
                               | (1U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state)) 
                              | (2U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state)) 
                             | (3U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state)) 
                            | (4U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state)) 
                           | (5U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state)) 
                          | (6U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state)) 
                         | (7U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state))
                         ? ((0U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state)
                             ? 0U : ((1U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state)
                                      ? 1U : ((2U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state)
                                               ? 3U
                                               : ((3U 
                                                   == vlSelf->lights_out__DOT__F1FSM__DOT__current_state)
                                                   ? 7U
                                                   : 
                                                  ((4U 
                                                    == vlSelf->lights_out__DOT__F1FSM__DOT__current_state)
                                                    ? 0xfU
                                                    : 
                                                   ((5U 
                                                     == vlSelf->lights_out__DOT__F1FSM__DOT__current_state)
                                                     ? 0x1fU
                                                     : 
                                                    ((6U 
                                                      == vlSelf->lights_out__DOT__F1FSM__DOT__current_state)
                                                      ? 0x3fU
                                                      : 0x7fU)))))))
                         : ((8U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state)
                             ? 0xffU : 0U));
    vlSelf->lights_out__DOT__cmd_delay = ((7U != vlSelf->lights_out__DOT__F1FSM__DOT__current_state) 
                                          & (8U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state));
    vlSelf->lights_out__DOT__cmd_seq = ((7U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state) 
                                        | (8U != vlSelf->lights_out__DOT__F1FSM__DOT__current_state));
    vlSelf->lights_out__DOT__LFSR__DOT__sreg = __Vdly__lights_out__DOT__LFSR__DOT__sreg;
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
}

VL_INLINE_OPT void Vlights_out___024root___combo__TOP__0(Vlights_out___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlights_out__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlights_out___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->lights_out__DOT__F1FSM__DOT__next_state 
        = (((((((((0U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state) 
                  | (1U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state)) 
                 | (2U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state)) 
                | (3U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state)) 
               | (4U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state)) 
              | (5U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state)) 
             | (6U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state)) 
            | (7U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state))
            ? ((0U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state)
                ? (((IData)(vlSelf->lights_out__DOT____Vcellinp__F1FSM__en) 
                    & (IData)(vlSelf->trigger)) ? 1U
                    : vlSelf->lights_out__DOT__F1FSM__DOT__current_state)
                : ((1U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state)
                    ? ((IData)(vlSelf->lights_out__DOT____Vcellinp__F1FSM__en)
                        ? 2U : vlSelf->lights_out__DOT__F1FSM__DOT__current_state)
                    : ((2U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state)
                        ? ((IData)(vlSelf->lights_out__DOT____Vcellinp__F1FSM__en)
                            ? 3U : vlSelf->lights_out__DOT__F1FSM__DOT__current_state)
                        : ((3U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state)
                            ? ((IData)(vlSelf->lights_out__DOT____Vcellinp__F1FSM__en)
                                ? 4U : vlSelf->lights_out__DOT__F1FSM__DOT__current_state)
                            : ((4U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state)
                                ? ((IData)(vlSelf->lights_out__DOT____Vcellinp__F1FSM__en)
                                    ? 5U : vlSelf->lights_out__DOT__F1FSM__DOT__current_state)
                                : ((5U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state)
                                    ? ((IData)(vlSelf->lights_out__DOT____Vcellinp__F1FSM__en)
                                        ? 6U : vlSelf->lights_out__DOT__F1FSM__DOT__current_state)
                                    : ((6U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state)
                                        ? ((IData)(vlSelf->lights_out__DOT____Vcellinp__F1FSM__en)
                                            ? 7U : vlSelf->lights_out__DOT__F1FSM__DOT__current_state)
                                        : ((IData)(vlSelf->lights_out__DOT____Vcellinp__F1FSM__en)
                                            ? 8U : vlSelf->lights_out__DOT__F1FSM__DOT__current_state))))))))
            : ((8U == vlSelf->lights_out__DOT__F1FSM__DOT__current_state)
                ? ((IData)(vlSelf->lights_out__DOT____Vcellinp__F1FSM__en)
                    ? 0U : vlSelf->lights_out__DOT__F1FSM__DOT__current_state)
                : 0U));
}

void Vlights_out___024root___eval(Vlights_out___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlights_out__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlights_out___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vlights_out___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vlights_out___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vlights_out___024root___eval_debug_assertions(Vlights_out___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlights_out__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlights_out___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->trigger & 0xfeU))) {
        Verilated::overWidthError("trigger");}
}
#endif  // VL_DEBUG
