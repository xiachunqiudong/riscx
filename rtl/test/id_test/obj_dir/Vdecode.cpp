// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdecode.h"
#include "Vdecode__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vdecode::Vdecode(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vdecode__Syms(_vcontextp__, _vcname__, this)}
    , instr_i{vlSymsp->TOP.instr_i}
    , dec_rs1_idx_o{vlSymsp->TOP.dec_rs1_idx_o}
    , dec_rs2_idx_o{vlSymsp->TOP.dec_rs2_idx_o}
    , dec_rd_idx_o{vlSymsp->TOP.dec_rd_idx_o}
    , dec_rs1_en_o{vlSymsp->TOP.dec_rs1_en_o}
    , dec_rs2_en_o{vlSymsp->TOP.dec_rs2_en_o}
    , dec_rd_en_o{vlSymsp->TOP.dec_rd_en_o}
    , dec_imm_o{vlSymsp->TOP.dec_imm_o}
    , dec_rs1_i{vlSymsp->TOP.dec_rs1_i}
    , dec_rs2_i{vlSymsp->TOP.dec_rs2_i}
    , rootp{&(vlSymsp->TOP)}
{
}

Vdecode::Vdecode(const char* _vcname__)
    : Vdecode(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vdecode::~Vdecode() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vdecode___024root___eval_initial(Vdecode___024root* vlSelf);
void Vdecode___024root___eval_settle(Vdecode___024root* vlSelf);
void Vdecode___024root___eval(Vdecode___024root* vlSelf);
QData Vdecode___024root___change_request(Vdecode___024root* vlSelf);
#ifdef VL_DEBUG
void Vdecode___024root___eval_debug_assertions(Vdecode___024root* vlSelf);
#endif  // VL_DEBUG
void Vdecode___024root___final(Vdecode___024root* vlSelf);

static void _eval_initial_loop(Vdecode__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vdecode___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vdecode___024root___eval_settle(&(vlSymsp->TOP));
        Vdecode___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vdecode___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("decode.v", 5, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vdecode___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vdecode::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdecode::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdecode___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vdecode___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vdecode___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("decode.v", 5, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vdecode___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vdecode::final() {
    Vdecode___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vdecode::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vdecode::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vdecode___024root__traceInitTop(Vdecode___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdecode___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdecode___024root*>(voidSelf);
    Vdecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vdecode___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vdecode___024root__traceRegister(Vdecode___024root* vlSelf, VerilatedVcd* tracep);

void Vdecode::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vdecode___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
