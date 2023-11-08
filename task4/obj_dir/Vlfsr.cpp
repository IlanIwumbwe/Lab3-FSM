// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vlfsr.h"
#include "Vlfsr__Syms.h"

//============================================================
// Constructors

Vlfsr::Vlfsr(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vlfsr__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , data_out{vlSymsp->TOP.data_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vlfsr::Vlfsr(const char* _vcname__)
    : Vlfsr(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vlfsr::~Vlfsr() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vlfsr___024root___eval_initial(Vlfsr___024root* vlSelf);
void Vlfsr___024root___eval_settle(Vlfsr___024root* vlSelf);
void Vlfsr___024root___eval(Vlfsr___024root* vlSelf);
#ifdef VL_DEBUG
void Vlfsr___024root___eval_debug_assertions(Vlfsr___024root* vlSelf);
#endif  // VL_DEBUG
void Vlfsr___024root___final(Vlfsr___024root* vlSelf);

static void _eval_initial_loop(Vlfsr__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vlfsr___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vlfsr___024root___eval_settle(&(vlSymsp->TOP));
        Vlfsr___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vlfsr::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vlfsr::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vlfsr___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vlfsr___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vlfsr::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vlfsr::final() {
    Vlfsr___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vlfsr::hierName() const { return vlSymsp->name(); }
const char* Vlfsr::modelName() const { return "Vlfsr"; }
unsigned Vlfsr::threads() const { return 1; }
