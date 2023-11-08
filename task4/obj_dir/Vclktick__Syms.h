// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCLKTICK__SYMS_H_
#define VERILATED_VCLKTICK__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vclktick.h"

// INCLUDE MODULE CLASSES
#include "Vclktick___024root.h"

// SYMS CLASS (contains all model state)
class Vclktick__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vclktick* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vclktick___024root             TOP;

    // CONSTRUCTORS
    Vclktick__Syms(VerilatedContext* contextp, const char* namep, Vclktick* modelp);
    ~Vclktick__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
