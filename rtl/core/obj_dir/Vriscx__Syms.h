// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VRISCX__SYMS_H_
#define VERILATED_VRISCX__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vriscx.h"

// INCLUDE MODULE CLASSES
#include "Vriscx___024root.h"

// SYMS CLASS (contains all model state)
class Vriscx__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vriscx* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vriscx___024root               TOP;

    // CONSTRUCTORS
    Vriscx__Syms(VerilatedContext* contextp, const char* namep, Vriscx* modelp);
    ~Vriscx__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
