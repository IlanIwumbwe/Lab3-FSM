// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vlights_out__Syms.h"


void Vlights_out___024root__trace_chg_sub_0(Vlights_out___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vlights_out___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlights_out___024root__trace_chg_top_0\n"); );
    // Init
    Vlights_out___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlights_out___024root*>(voidSelf);
    Vlights_out__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vlights_out___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vlights_out___024root__trace_chg_sub_0(Vlights_out___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vlights_out__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlights_out___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->lights_out__DOT____Vcellout__LFSR__data_out),7);
        bufp->chgBit(oldp+1,(((0U != vlSelf->lights_out__DOT__Delay__DOT__current_state) 
                              & ((1U != vlSelf->lights_out__DOT__Delay__DOT__current_state) 
                                 & (2U == vlSelf->lights_out__DOT__Delay__DOT__current_state)))));
        bufp->chgBit(oldp+2,(vlSelf->lights_out__DOT__one_second_pulse));
        bufp->chgBit(oldp+3,(vlSelf->lights_out__DOT__cmd_seq));
        bufp->chgBit(oldp+4,(vlSelf->lights_out__DOT__cmd_delay));
        bufp->chgSData(oldp+5,(vlSelf->lights_out__DOT__ClkTick__DOT__count),16);
        bufp->chgCData(oldp+6,(vlSelf->lights_out__DOT__Delay__DOT__count),7);
        bufp->chgIData(oldp+7,(vlSelf->lights_out__DOT__Delay__DOT__current_state),32);
        bufp->chgIData(oldp+8,(((0U == vlSelf->lights_out__DOT__Delay__DOT__current_state)
                                 ? ((IData)(vlSelf->lights_out__DOT__cmd_delay)
                                     ? 1U : vlSelf->lights_out__DOT__Delay__DOT__current_state)
                                 : ((1U == vlSelf->lights_out__DOT__Delay__DOT__current_state)
                                     ? ((0U == (IData)(vlSelf->lights_out__DOT__Delay__DOT__count))
                                         ? 2U : vlSelf->lights_out__DOT__Delay__DOT__current_state)
                                     : ((2U == vlSelf->lights_out__DOT__Delay__DOT__current_state)
                                         ? ((IData)(vlSelf->lights_out__DOT__cmd_delay)
                                             ? 3U : 0U)
                                         : ((3U == vlSelf->lights_out__DOT__Delay__DOT__current_state)
                                             ? ((IData)(vlSelf->lights_out__DOT__cmd_delay)
                                                 ? vlSelf->lights_out__DOT__Delay__DOT__current_state
                                                 : 0U)
                                             : 0U))))),32);
        bufp->chgBit(oldp+9,(vlSelf->lights_out__DOT____Vcellinp__F1FSM__en));
        bufp->chgIData(oldp+10,(vlSelf->lights_out__DOT__F1FSM__DOT__current_state),32);
        bufp->chgCData(oldp+11,(vlSelf->lights_out__DOT__LFSR__DOT__sreg),7);
    }
    bufp->chgBit(oldp+12,(vlSelf->clk));
    bufp->chgBit(oldp+13,(vlSelf->rst));
    bufp->chgBit(oldp+14,(vlSelf->trigger));
    bufp->chgSData(oldp+15,(vlSelf->clktickN),16);
    bufp->chgCData(oldp+16,(vlSelf->data_out),8);
    bufp->chgIData(oldp+17,(vlSelf->lights_out__DOT__F1FSM__DOT__next_state),32);
}

void Vlights_out___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlights_out___024root__trace_cleanup\n"); );
    // Init
    Vlights_out___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlights_out___024root*>(voidSelf);
    Vlights_out__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
