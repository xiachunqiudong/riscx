// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdecode__Syms.h"


void Vdecode___024root__traceInitSub0(Vdecode___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vdecode___024root__traceInitTop(Vdecode___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vdecode___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vdecode___024root__traceInitSub0(Vdecode___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"instr_i", false,-1, 31,0);
        tracep->declBus(c+2,"dec_rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+3,"dec_rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+4,"dec_rd_idx_o", false,-1, 4,0);
        tracep->declBit(c+5,"dec_rs1_en_o", false,-1);
        tracep->declBit(c+6,"dec_rs2_en_o", false,-1);
        tracep->declBit(c+7,"dec_rd_en_o", false,-1);
        tracep->declBus(c+8,"dec_imm_o", false,-1, 31,0);
        tracep->declBus(c+9,"dec_rs1_i", false,-1, 31,0);
        tracep->declBus(c+10,"dec_rs2_i", false,-1, 31,0);
        tracep->declBus(c+1,"decode instr_i", false,-1, 31,0);
        tracep->declBus(c+2,"decode dec_rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+3,"decode dec_rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+4,"decode dec_rd_idx_o", false,-1, 4,0);
        tracep->declBit(c+5,"decode dec_rs1_en_o", false,-1);
        tracep->declBit(c+6,"decode dec_rs2_en_o", false,-1);
        tracep->declBit(c+7,"decode dec_rd_en_o", false,-1);
        tracep->declBus(c+8,"decode dec_imm_o", false,-1, 31,0);
        tracep->declBus(c+9,"decode dec_rs1_i", false,-1, 31,0);
        tracep->declBus(c+10,"decode dec_rs2_i", false,-1, 31,0);
        tracep->declBus(c+11,"decode opcode", false,-1, 6,0);
        tracep->declBus(c+12,"decode rd", false,-1, 4,0);
        tracep->declBus(c+13,"decode fun3", false,-1, 2,0);
        tracep->declBus(c+14,"decode rs1", false,-1, 4,0);
        tracep->declBus(c+15,"decode rs2", false,-1, 4,0);
        tracep->declBus(c+16,"decode fun7", false,-1, 6,0);
    }
}

void Vdecode___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vdecode___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vdecode___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vdecode___024root__traceRegister(Vdecode___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vdecode___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vdecode___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vdecode___024root__traceCleanup, vlSelf);
    }
}

void Vdecode___024root__traceFullSub0(Vdecode___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vdecode___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vdecode___024root* const __restrict vlSelf = static_cast<Vdecode___024root*>(voidSelf);
    Vdecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vdecode___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vdecode___024root__traceFullSub0(Vdecode___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->instr_i),32);
        tracep->fullCData(oldp+2,(vlSelf->dec_rs1_idx_o),5);
        tracep->fullCData(oldp+3,(vlSelf->dec_rs2_idx_o),5);
        tracep->fullCData(oldp+4,(vlSelf->dec_rd_idx_o),5);
        tracep->fullBit(oldp+5,(vlSelf->dec_rs1_en_o));
        tracep->fullBit(oldp+6,(vlSelf->dec_rs2_en_o));
        tracep->fullBit(oldp+7,(vlSelf->dec_rd_en_o));
        tracep->fullIData(oldp+8,(vlSelf->dec_imm_o),32);
        tracep->fullIData(oldp+9,(vlSelf->dec_rs1_i),32);
        tracep->fullIData(oldp+10,(vlSelf->dec_rs2_i),32);
        tracep->fullCData(oldp+11,((0x7fU & vlSelf->instr_i)),7);
        tracep->fullCData(oldp+12,((0x1fU & (vlSelf->instr_i 
                                             >> 7U))),5);
        tracep->fullCData(oldp+13,((7U & (vlSelf->instr_i 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+14,((0x1fU & (vlSelf->instr_i 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+15,((0x1fU & (vlSelf->instr_i 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+16,((vlSelf->instr_i 
                                    >> 0x19U)),7);
    }
}
