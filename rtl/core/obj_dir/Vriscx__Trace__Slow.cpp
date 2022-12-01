// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vriscx__Syms.h"


void Vriscx___024root__traceInitSub0(Vriscx___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vriscx___024root__traceInitTop(Vriscx___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vriscx___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vriscx___024root__traceInitSub0(Vriscx___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+11,"clk", false,-1);
        tracep->declBit(c+12,"rst_n", false,-1);
        tracep->declBit(c+11,"riscx clk", false,-1);
        tracep->declBit(c+12,"riscx rst_n", false,-1);
        tracep->declBus(c+5,"riscx if_pc_next", false,-1, 31,0);
        tracep->declBus(c+6,"riscx pr_pc", false,-1, 31,0);
        tracep->declBus(c+6,"riscx if_pc", false,-1, 31,0);
        tracep->declBus(c+13,"riscx if_instr", false,-1, 31,0);
        tracep->declBus(c+7,"riscx if_id_pc", false,-1, 31,0);
        tracep->declBus(c+8,"riscx if_id_instr", false,-1, 31,0);
        tracep->declBit(c+11,"riscx pru clk", false,-1);
        tracep->declBit(c+12,"riscx pru rst_n", false,-1);
        tracep->declBit(c+14,"riscx pru stall_i", false,-1);
        tracep->declBus(c+5,"riscx pru pc_next_i", false,-1, 31,0);
        tracep->declBus(c+6,"riscx pru pc_o", false,-1, 31,0);
        tracep->declBus(c+6,"riscx pru pc_r", false,-1, 31,0);
        tracep->declBus(c+6,"riscx ifu pc_i", false,-1, 31,0);
        tracep->declBus(c+5,"riscx ifu if_pc_next_o", false,-1, 31,0);
        tracep->declBit(c+15,"riscx ifu if_req_valid_o", false,-1);
        tracep->declBit(c+16,"riscx ifu if_req_ready_i", false,-1);
        tracep->declBus(c+17,"riscx ifu if_req_pc_o", false,-1, 31,0);
        tracep->declBit(c+18,"riscx ifu if_resp_valid_i", false,-1);
        tracep->declBit(c+19,"riscx ifu if_resp_ready_o", false,-1);
        tracep->declBit(c+20,"riscx ifu if_resp_err_i", false,-1);
        tracep->declBus(c+21,"riscx ifu if_resp_instr_i", false,-1, 31,0);
        tracep->declBus(c+13,"riscx ifu if_instr_o", false,-1, 31,0);
        tracep->declBus(c+6,"riscx ifu if_pc_o", false,-1, 31,0);
        tracep->declBus(c+21,"riscx ifu instr", false,-1, 31,0);
        tracep->declBit(c+1,"riscx ifu dec_bjp", false,-1);
        tracep->declBit(c+22,"riscx ifu dec_bxx", false,-1);
        tracep->declBit(c+23,"riscx ifu dec_jal", false,-1);
        tracep->declBit(c+24,"riscx ifu dec_jalr", false,-1);
        tracep->declBus(c+25,"riscx ifu dec_jalr_rs1_idx", false,-1, 4,0);
        tracep->declBus(c+2,"riscx ifu dec_bjp_imm", false,-1, 31,0);
        tracep->declBit(c+3,"riscx ifu prdt_taken", false,-1);
        tracep->declBit(c+26,"riscx ifu jalr_rs1_x0", false,-1);
        tracep->declBit(c+27,"riscx ifu jalr_rs1_x1", false,-1);
        tracep->declBus(c+9,"riscx ifu prdt_pc_add_op1", false,-1, 31,0);
        tracep->declBus(c+2,"riscx ifu prdt_pc_add_op2", false,-1, 31,0);
        tracep->declBus(c+10,"riscx ifu pc_add_op1", false,-1, 31,0);
        tracep->declBus(c+4,"riscx ifu pc_add_op2", false,-1, 31,0);
        tracep->declBus(c+21,"riscx ifu fmd_1 instr_i", false,-1, 31,0);
        tracep->declBit(c+1,"riscx ifu fmd_1 dec_bjp_o", false,-1);
        tracep->declBit(c+22,"riscx ifu fmd_1 dec_bxx_o", false,-1);
        tracep->declBit(c+23,"riscx ifu fmd_1 dec_jal_o", false,-1);
        tracep->declBit(c+24,"riscx ifu fmd_1 dec_jalr_o", false,-1);
        tracep->declBus(c+25,"riscx ifu fmd_1 dec_jalr_rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+2,"riscx ifu fmd_1 dec_bjp_imm_o", false,-1, 31,0);
        tracep->declBus(c+28,"riscx ifu fmd_1 opcode", false,-1, 6,0);
        tracep->declBus(c+29,"riscx ifu fmd_1 bjp_imm_bxx", false,-1, 31,0);
        tracep->declBus(c+30,"riscx ifu fmd_1 bjp_imm_jal", false,-1, 31,0);
        tracep->declBus(c+31,"riscx ifu fmd_1 bjp_imm_jalr", false,-1, 31,0);
        tracep->declBit(c+11,"riscx if_idu clk", false,-1);
        tracep->declBit(c+12,"riscx if_idu rst_n", false,-1);
        tracep->declBit(c+14,"riscx if_idu stall_i", false,-1);
        tracep->declBus(c+6,"riscx if_idu if_pc_i", false,-1, 31,0);
        tracep->declBus(c+13,"riscx if_idu if_instr_i", false,-1, 31,0);
        tracep->declBus(c+7,"riscx if_idu if_id_pc_o", false,-1, 31,0);
        tracep->declBus(c+8,"riscx if_idu if_id_instr_o", false,-1, 31,0);
        tracep->declBus(c+32,"riscx if_idu pc_dff_lr DW", false,-1, 31,0);
        tracep->declBit(c+11,"riscx if_idu pc_dff_lr clk", false,-1);
        tracep->declBit(c+12,"riscx if_idu pc_dff_lr rst_n", false,-1);
        tracep->declBit(c+33,"riscx if_idu pc_dff_lr ld_en", false,-1);
        tracep->declBus(c+6,"riscx if_idu pc_dff_lr din", false,-1, 31,0);
        tracep->declBus(c+7,"riscx if_idu pc_dff_lr qout", false,-1, 31,0);
        tracep->declBus(c+7,"riscx if_idu pc_dff_lr qout_r", false,-1, 31,0);
        tracep->declBus(c+32,"riscx if_idu instr_dff_lr DW", false,-1, 31,0);
        tracep->declBit(c+11,"riscx if_idu instr_dff_lr clk", false,-1);
        tracep->declBit(c+12,"riscx if_idu instr_dff_lr rst_n", false,-1);
        tracep->declBit(c+33,"riscx if_idu instr_dff_lr ld_en", false,-1);
        tracep->declBus(c+13,"riscx if_idu instr_dff_lr din", false,-1, 31,0);
        tracep->declBus(c+8,"riscx if_idu instr_dff_lr qout", false,-1, 31,0);
        tracep->declBus(c+8,"riscx if_idu instr_dff_lr qout_r", false,-1, 31,0);
    }
}

void Vriscx___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vriscx___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vriscx___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vriscx___024root__traceRegister(Vriscx___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vriscx___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vriscx___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vriscx___024root__traceCleanup, vlSelf);
    }
}

void Vriscx___024root__traceFullSub0(Vriscx___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vriscx___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vriscx___024root* const __restrict vlSelf = static_cast<Vriscx___024root*>(voidSelf);
    Vriscx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vriscx___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vriscx___024root__traceFullSub0(Vriscx___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->riscx__DOT__ifu__DOT__dec_bjp));
        tracep->fullIData(oldp+2,(vlSelf->riscx__DOT__ifu__DOT__dec_bjp_imm),32);
        tracep->fullBit(oldp+3,(vlSelf->riscx__DOT__ifu__DOT__prdt_taken));
        tracep->fullIData(oldp+4,((((IData)(vlSelf->riscx__DOT__ifu__DOT__dec_bjp) 
                                    & (IData)(vlSelf->riscx__DOT__ifu__DOT__prdt_taken))
                                    ? vlSelf->riscx__DOT__ifu__DOT__dec_bjp_imm
                                    : 4U)),32);
        tracep->fullIData(oldp+5,(((((IData)(vlSelf->riscx__DOT__ifu__DOT__dec_bjp) 
                                     & (IData)(vlSelf->riscx__DOT__ifu__DOT__prdt_taken))
                                     ? ((0x67U == (0x7fU 
                                                   & vlSelf->riscx__DOT__ifu__DOT__if_resp_instr_i))
                                         ? ((0U == 
                                             (0x1fU 
                                              & (vlSelf->riscx__DOT__ifu__DOT__if_resp_instr_i 
                                                 >> 0xfU)))
                                             ? 0U : 
                                            ((1U == 
                                              (0x1fU 
                                               & (vlSelf->riscx__DOT__ifu__DOT__if_resp_instr_i 
                                                  >> 0xfU)))
                                              ? 1U : 2U))
                                         : vlSelf->riscx__DOT__pru__DOT__pc_r)
                                     : vlSelf->riscx__DOT__pru__DOT__pc_r) 
                                   + (((IData)(vlSelf->riscx__DOT__ifu__DOT__dec_bjp) 
                                       & (IData)(vlSelf->riscx__DOT__ifu__DOT__prdt_taken))
                                       ? vlSelf->riscx__DOT__ifu__DOT__dec_bjp_imm
                                       : 4U))),32);
        tracep->fullIData(oldp+6,(vlSelf->riscx__DOT__pru__DOT__pc_r),32);
        tracep->fullIData(oldp+7,(vlSelf->riscx__DOT__if_idu__DOT__pc_dff_lr__DOT__qout_r),32);
        tracep->fullIData(oldp+8,(vlSelf->riscx__DOT__if_idu__DOT__instr_dff_lr__DOT__qout_r),32);
        tracep->fullIData(oldp+9,(((0x67U == (0x7fU 
                                              & vlSelf->riscx__DOT__ifu__DOT__if_resp_instr_i))
                                    ? ((0U == (0x1fU 
                                               & (vlSelf->riscx__DOT__ifu__DOT__if_resp_instr_i 
                                                  >> 0xfU)))
                                        ? 0U : ((1U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->riscx__DOT__ifu__DOT__if_resp_instr_i 
                                                     >> 0xfU)))
                                                 ? 1U
                                                 : 2U))
                                    : vlSelf->riscx__DOT__pru__DOT__pc_r)),32);
        tracep->fullIData(oldp+10,((((IData)(vlSelf->riscx__DOT__ifu__DOT__dec_bjp) 
                                     & (IData)(vlSelf->riscx__DOT__ifu__DOT__prdt_taken))
                                     ? ((0x67U == (0x7fU 
                                                   & vlSelf->riscx__DOT__ifu__DOT__if_resp_instr_i))
                                         ? ((0U == 
                                             (0x1fU 
                                              & (vlSelf->riscx__DOT__ifu__DOT__if_resp_instr_i 
                                                 >> 0xfU)))
                                             ? 0U : 
                                            ((1U == 
                                              (0x1fU 
                                               & (vlSelf->riscx__DOT__ifu__DOT__if_resp_instr_i 
                                                  >> 0xfU)))
                                              ? 1U : 2U))
                                         : vlSelf->riscx__DOT__pru__DOT__pc_r)
                                     : vlSelf->riscx__DOT__pru__DOT__pc_r)),32);
        tracep->fullBit(oldp+11,(vlSelf->clk));
        tracep->fullBit(oldp+12,(vlSelf->rst_n));
        tracep->fullIData(oldp+13,(vlSelf->riscx__DOT__if_instr),32);
        tracep->fullBit(oldp+14,(0U));
        tracep->fullBit(oldp+15,(vlSelf->riscx__DOT__ifu__DOT__if_req_valid_o));
        tracep->fullBit(oldp+16,(vlSelf->riscx__DOT__ifu__DOT__if_req_ready_i));
        tracep->fullIData(oldp+17,(vlSelf->riscx__DOT__ifu__DOT__if_req_pc_o),32);
        tracep->fullBit(oldp+18,(vlSelf->riscx__DOT__ifu__DOT__if_resp_valid_i));
        tracep->fullBit(oldp+19,(vlSelf->riscx__DOT__ifu__DOT__if_resp_ready_o));
        tracep->fullBit(oldp+20,(vlSelf->riscx__DOT__ifu__DOT__if_resp_err_i));
        tracep->fullIData(oldp+21,(vlSelf->riscx__DOT__ifu__DOT__if_resp_instr_i),32);
        tracep->fullBit(oldp+22,((0x63U == (0x7fU & vlSelf->riscx__DOT__ifu__DOT__if_resp_instr_i))));
        tracep->fullBit(oldp+23,((0x6fU == (0x7fU & vlSelf->riscx__DOT__ifu__DOT__if_resp_instr_i))));
        tracep->fullBit(oldp+24,((0x67U == (0x7fU & vlSelf->riscx__DOT__ifu__DOT__if_resp_instr_i))));
        tracep->fullCData(oldp+25,((0x1fU & (vlSelf->riscx__DOT__ifu__DOT__if_resp_instr_i 
                                             >> 0xfU))),5);
        tracep->fullBit(oldp+26,((0U == (0x1fU & (vlSelf->riscx__DOT__ifu__DOT__if_resp_instr_i 
                                                  >> 0xfU)))));
        tracep->fullBit(oldp+27,((1U == (0x1fU & (vlSelf->riscx__DOT__ifu__DOT__if_resp_instr_i 
                                                  >> 0xfU)))));
        tracep->fullCData(oldp+28,((0x7fU & vlSelf->riscx__DOT__ifu__DOT__if_resp_instr_i)),7);
        tracep->fullIData(oldp+29,((((- (IData)((vlSelf->riscx__DOT__ifu__DOT__if_resp_instr_i 
                                                 >> 0x1fU))) 
                                     << 0xdU) | ((0x1000U 
                                                  & (vlSelf->riscx__DOT__ifu__DOT__if_resp_instr_i 
                                                     >> 0x13U)) 
                                                 | ((0x800U 
                                                     & (vlSelf->riscx__DOT__ifu__DOT__if_resp_instr_i 
                                                        << 4U)) 
                                                    | ((0x7e0U 
                                                        & (vlSelf->riscx__DOT__ifu__DOT__if_resp_instr_i 
                                                           >> 0x14U)) 
                                                       | (0x1eU 
                                                          & (vlSelf->riscx__DOT__ifu__DOT__if_resp_instr_i 
                                                             >> 7U))))))),32);
        tracep->fullIData(oldp+30,((((- (IData)((vlSelf->riscx__DOT__ifu__DOT__if_resp_instr_i 
                                                 >> 0x1fU))) 
                                     << 0x15U) | ((0x100000U 
                                                   & (vlSelf->riscx__DOT__ifu__DOT__if_resp_instr_i 
                                                      >> 0xbU)) 
                                                  | ((0xff000U 
                                                      & vlSelf->riscx__DOT__ifu__DOT__if_resp_instr_i) 
                                                     | ((0x800U 
                                                         & (vlSelf->riscx__DOT__ifu__DOT__if_resp_instr_i 
                                                            >> 9U)) 
                                                        | (0x7feU 
                                                           & (vlSelf->riscx__DOT__ifu__DOT__if_resp_instr_i 
                                                              >> 0x14U))))))),32);
        tracep->fullIData(oldp+31,((((- (IData)((vlSelf->riscx__DOT__ifu__DOT__if_resp_instr_i 
                                                 >> 0x1fU))) 
                                     << 0xcU) | (vlSelf->riscx__DOT__ifu__DOT__if_resp_instr_i 
                                                 >> 0x14U))),32);
        tracep->fullIData(oldp+32,(0x20U),32);
        tracep->fullBit(oldp+33,(1U));
    }
}
