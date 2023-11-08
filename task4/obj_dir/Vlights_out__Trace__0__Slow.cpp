// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vlights_out__Syms.h"


VL_ATTR_COLD void Vlights_out___024root__trace_init_sub__TOP__0(Vlights_out___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vlights_out__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlights_out___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+13,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBit(c+15,"trigger", false,-1);
    tracep->declBus(c+16,"clktickN", false,-1, 15,0);
    tracep->declBus(c+17,"data_out", false,-1, 7,0);
    tracep->pushNamePrefix("lights_out ");
    tracep->declBus(c+19,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+20,"RANDOM_N_WIDTH", false,-1, 31,0);
    tracep->declBit(c+13,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBit(c+15,"trigger", false,-1);
    tracep->declBus(c+16,"clktickN", false,-1, 15,0);
    tracep->declBus(c+17,"data_out", false,-1, 7,0);
    tracep->declBus(c+1,"random_n", false,-1, 6,0);
    tracep->declBit(c+2,"random_pulse", false,-1);
    tracep->declBit(c+3,"one_second_pulse", false,-1);
    tracep->declBit(c+4,"cmd_seq", false,-1);
    tracep->declBit(c+5,"cmd_delay", false,-1);
    tracep->pushNamePrefix("ClkTick ");
    tracep->declBus(c+21,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+13,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBit(c+4,"en", false,-1);
    tracep->declBus(c+16,"N", false,-1, 15,0);
    tracep->declBit(c+3,"tick", false,-1);
    tracep->declBus(c+6,"count", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Delay ");
    tracep->declBus(c+20,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+13,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBit(c+5,"trigger", false,-1);
    tracep->declBus(c+1,"n", false,-1, 6,0);
    tracep->declBit(c+2,"time_out", false,-1);
    tracep->declBus(c+7,"count", false,-1, 6,0);
    tracep->declBus(c+8,"current_state", false,-1, 31,0);
    tracep->declBus(c+9,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("F1FSM ");
    tracep->declBus(c+19,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBit(c+10,"en", false,-1);
    tracep->declBit(c+13,"clk", false,-1);
    tracep->declBit(c+15,"trigger", false,-1);
    tracep->declBit(c+4,"cmd_seq", false,-1);
    tracep->declBit(c+5,"cmd_delay", false,-1);
    tracep->declBus(c+17,"data_out", false,-1, 7,0);
    tracep->declBus(c+11,"current_state", false,-1, 31,0);
    tracep->declBus(c+18,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LFSR ");
    tracep->declBus(c+20,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+13,"clk", false,-1);
    tracep->declBus(c+1,"data_out", false,-1, 7,1);
    tracep->declBus(c+12,"sreg", false,-1, 7,1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vlights_out___024root__trace_init_top(Vlights_out___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vlights_out__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlights_out___024root__trace_init_top\n"); );
    // Body
    Vlights_out___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vlights_out___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vlights_out___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vlights_out___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vlights_out___024root__trace_register(Vlights_out___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vlights_out__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlights_out___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vlights_out___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vlights_out___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vlights_out___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vlights_out___024root__trace_full_sub_0(Vlights_out___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vlights_out___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlights_out___024root__trace_full_top_0\n"); );
    // Init
    Vlights_out___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlights_out___024root*>(voidSelf);
    Vlights_out__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vlights_out___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vlights_out___024root__trace_full_sub_0(Vlights_out___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vlights_out__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlights_out___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->lights_out__DOT____Vcellout__LFSR__data_out),7);
    bufp->fullBit(oldp+2,(((0U != vlSelf->lights_out__DOT__Delay__DOT__current_state) 
                           & ((1U != vlSelf->lights_out__DOT__Delay__DOT__current_state) 
                              & (2U == vlSelf->lights_out__DOT__Delay__DOT__current_state)))));
    bufp->fullBit(oldp+3,(vlSelf->lights_out__DOT__one_second_pulse));
    bufp->fullBit(oldp+4,(vlSelf->lights_out__DOT__cmd_seq));
    bufp->fullBit(oldp+5,(vlSelf->lights_out__DOT__cmd_delay));
    bufp->fullSData(oldp+6,(vlSelf->lights_out__DOT__ClkTick__DOT__count),16);
    bufp->fullCData(oldp+7,(vlSelf->lights_out__DOT__Delay__DOT__count),7);
    bufp->fullIData(oldp+8,(vlSelf->lights_out__DOT__Delay__DOT__current_state),32);
    bufp->fullIData(oldp+9,(((0U == vlSelf->lights_out__DOT__Delay__DOT__current_state)
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
    bufp->fullBit(oldp+10,(vlSelf->lights_out__DOT____Vcellinp__F1FSM__en));
    bufp->fullIData(oldp+11,(vlSelf->lights_out__DOT__F1FSM__DOT__current_state),32);
    bufp->fullCData(oldp+12,(vlSelf->lights_out__DOT__LFSR__DOT__sreg),7);
    bufp->fullBit(oldp+13,(vlSelf->clk));
    bufp->fullBit(oldp+14,(vlSelf->rst));
    bufp->fullBit(oldp+15,(vlSelf->trigger));
    bufp->fullSData(oldp+16,(vlSelf->clktickN),16);
    bufp->fullCData(oldp+17,(vlSelf->data_out),8);
    bufp->fullIData(oldp+18,(vlSelf->lights_out__DOT__F1FSM__DOT__next_state),32);
    bufp->fullIData(oldp+19,(8U),32);
    bufp->fullIData(oldp+20,(7U),32);
    bufp->fullIData(oldp+21,(0x10U),32);
}
