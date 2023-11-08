// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vlights_out.h"
#include "Vlights_out__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vlights_out::Vlights_out(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vlights_out__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , trigger{vlSymsp->TOP.trigger}
    , data_out{vlSymsp->TOP.data_out}
    , clktickN{vlSymsp->TOP.clktickN}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vlights_out::Vlights_out(const char* _vcname__)
    : Vlights_out(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vlights_out::~Vlights_out() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vlights_out___024root___eval_initial(Vlights_out___024root* vlSelf);
void Vlights_out___024root___eval_settle(Vlights_out___024root* vlSelf);
void Vlights_out___024root___eval(Vlights_out___024root* vlSelf);
#ifdef VL_DEBUG
void Vlights_out___024root___eval_debug_assertions(Vlights_out___024root* vlSelf);
#endif  // VL_DEBUG
void Vlights_out___024root___final(Vlights_out___024root* vlSelf);

static void _eval_initial_loop(Vlights_out__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vlights_out___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vlights_out___024root___eval_settle(&(vlSymsp->TOP));
        Vlights_out___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vlights_out::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vlights_out::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vlights_out___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vlights_out___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vlights_out::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vlights_out::final() {
    Vlights_out___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vlights_out::hierName() const { return vlSymsp->name(); }
const char* Vlights_out::modelName() const { return "Vlights_out"; }
unsigned Vlights_out::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vlights_out::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vlights_out___024root__trace_init_top(Vlights_out___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vlights_out___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlights_out___024root*>(voidSelf);
    Vlights_out__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vlights_out___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vlights_out___024root__trace_register(Vlights_out___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vlights_out::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vlights_out___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
