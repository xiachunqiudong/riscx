// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vriscx.h"
#include "Vriscx__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vriscx::Vriscx(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vriscx__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , rootp{&(vlSymsp->TOP)}
{
}

Vriscx::Vriscx(const char* _vcname__)
    : Vriscx(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vriscx::~Vriscx() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vriscx___024root___eval_initial(Vriscx___024root* vlSelf);
void Vriscx___024root___eval_settle(Vriscx___024root* vlSelf);
void Vriscx___024root___eval(Vriscx___024root* vlSelf);
QData Vriscx___024root___change_request(Vriscx___024root* vlSelf);
#ifdef VL_DEBUG
void Vriscx___024root___eval_debug_assertions(Vriscx___024root* vlSelf);
#endif  // VL_DEBUG
void Vriscx___024root___final(Vriscx___024root* vlSelf);

static void _eval_initial_loop(Vriscx__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vriscx___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vriscx___024root___eval_settle(&(vlSymsp->TOP));
        Vriscx___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vriscx___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("riscx.v", 3, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vriscx___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vriscx::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vriscx::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vriscx___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vriscx___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vriscx___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("riscx.v", 3, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vriscx___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vriscx::final() {
    Vriscx___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vriscx::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vriscx::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vriscx___024root__traceInitTop(Vriscx___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vriscx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscx___024root*>(voidSelf);
    Vriscx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vriscx___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vriscx___024root__traceRegister(Vriscx___024root* vlSelf, VerilatedVcd* tracep);

void Vriscx::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vriscx___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
