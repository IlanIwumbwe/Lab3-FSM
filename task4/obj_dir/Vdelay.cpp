// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdelay.h"
#include "Vdelay__Syms.h"

//============================================================
// Constructors

Vdelay::Vdelay(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdelay__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , trigger{vlSymsp->TOP.trigger}
    , n{vlSymsp->TOP.n}
    , time_out{vlSymsp->TOP.time_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vdelay::Vdelay(const char* _vcname__)
    : Vdelay(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdelay::~Vdelay() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vdelay___024root___eval_initial(Vdelay___024root* vlSelf);
void Vdelay___024root___eval_settle(Vdelay___024root* vlSelf);
void Vdelay___024root___eval(Vdelay___024root* vlSelf);
#ifdef VL_DEBUG
void Vdelay___024root___eval_debug_assertions(Vdelay___024root* vlSelf);
#endif  // VL_DEBUG
void Vdelay___024root___final(Vdelay___024root* vlSelf);

static void _eval_initial_loop(Vdelay__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vdelay___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vdelay___024root___eval_settle(&(vlSymsp->TOP));
        Vdelay___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vdelay::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdelay::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdelay___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vdelay___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vdelay::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vdelay::final() {
    Vdelay___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdelay::hierName() const { return vlSymsp->name(); }
const char* Vdelay::modelName() const { return "Vdelay"; }
unsigned Vdelay::threads() const { return 1; }
