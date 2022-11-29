// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vregfile.h"
#include "Vregfile__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vregfile::Vregfile(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vregfile__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , rd_en_i{vlSymsp->TOP.rd_en_i}
    , rd_idx_i{vlSymsp->TOP.rd_idx_i}
    , rd_wdata_i{vlSymsp->TOP.rd_wdata_i}
    , rs1_idx_i{vlSymsp->TOP.rs1_idx_i}
    , rs2_idx_i{vlSymsp->TOP.rs2_idx_i}
    , rs1_rdata_o{vlSymsp->TOP.rs1_rdata_o}
    , rs2_rdata_o{vlSymsp->TOP.rs2_rdata_o}
    , rs1_x1_rdata_o{vlSymsp->TOP.rs1_x1_rdata_o}
    , rootp{&(vlSymsp->TOP)}
{
}

Vregfile::Vregfile(const char* _vcname__)
    : Vregfile(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vregfile::~Vregfile() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vregfile___024root___eval_initial(Vregfile___024root* vlSelf);
void Vregfile___024root___eval_settle(Vregfile___024root* vlSelf);
void Vregfile___024root___eval(Vregfile___024root* vlSelf);
QData Vregfile___024root___change_request(Vregfile___024root* vlSelf);
#ifdef VL_DEBUG
void Vregfile___024root___eval_debug_assertions(Vregfile___024root* vlSelf);
#endif  // VL_DEBUG
void Vregfile___024root___final(Vregfile___024root* vlSelf);

static void _eval_initial_loop(Vregfile__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vregfile___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vregfile___024root___eval_settle(&(vlSymsp->TOP));
        Vregfile___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vregfile___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("regfile.v", 8, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vregfile___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vregfile::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vregfile::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vregfile___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vregfile___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vregfile___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("regfile.v", 8, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vregfile___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vregfile::final() {
    Vregfile___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vregfile::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vregfile::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vregfile___024root__traceInitTop(Vregfile___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vregfile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregfile___024root*>(voidSelf);
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vregfile___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vregfile___024root__traceRegister(Vregfile___024root* vlSelf, VerilatedVcd* tracep);

void Vregfile::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vregfile___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
