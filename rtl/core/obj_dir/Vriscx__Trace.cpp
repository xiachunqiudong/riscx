// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vriscx__Syms.h"


void Vriscx___024root__traceChgSub0(Vriscx___024root* vlSelf, VerilatedVcd* tracep);

void Vriscx___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vriscx___024root* const __restrict vlSelf = static_cast<Vriscx___024root*>(voidSelf);
    Vriscx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vriscx___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vriscx___024root__traceChgSub0(Vriscx___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+0,(((((IData)(vlSelf->riscx__DOT__if_u__DOT__dec_bjp) 
                                        & (IData)(vlSelf->riscx__DOT__if_u__DOT__prdt_taken))
                                        ? ((0x67U == 
                                            (0x7fU 
                                             & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr))
                                            ? ((0U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                    >> 0xfU)))
                                                ? 0U
                                                : 4U)
                                            : vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r)
                                        : vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r) 
                                      + (((IData)(vlSelf->riscx__DOT__if_u__DOT__dec_bjp) 
                                          & (IData)(vlSelf->riscx__DOT__if_u__DOT__prdt_taken))
                                          ? vlSelf->riscx__DOT__if_u__DOT__dec_bjp_imm
                                          : 4U))),32);
            tracep->chgIData(oldp+1,(vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r),32);
            tracep->chgIData(oldp+2,(vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr),32);
            tracep->chgBit(oldp+3,(vlSelf->riscx__DOT__if_u__DOT__prdt_taken));
            tracep->chgIData(oldp+4,(vlSelf->riscx__DOT__if_id_u__DOT__pc_dff__DOT__qout_r),32);
            tracep->chgIData(oldp+5,(vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r),32);
            tracep->chgBit(oldp+6,(vlSelf->riscx__DOT__dec_rs1_en));
            tracep->chgBit(oldp+7,(vlSelf->riscx__DOT__dec_rs2_en));
            tracep->chgCData(oldp+8,((0x1fU & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                               >> 0xfU))),5);
            tracep->chgCData(oldp+9,((0x1fU & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                               >> 0x14U))),5);
            tracep->chgIData(oldp+10,(vlSelf->riscx__DOT__rf_rs1_rdata),32);
            tracep->chgIData(oldp+11,(((1U & ((0U == 
                                               (0x1fU 
                                                & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0x14U))) 
                                              | (~ (IData)(vlSelf->riscx__DOT__dec_rs2_en))))
                                        ? 0U : (((0x1fU 
                                                  & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                     >> 0xfU)) 
                                                 == (IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i))
                                                 ? vlSelf->riscx__DOT__regfile_u__DOT__rd_wdata_i
                                                 : 
                                                ((0x1eU 
                                                  >= 
                                                  (0x1fU 
                                                   & ((vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                       >> 0x14U) 
                                                      - (IData)(1U))))
                                                  ? 
                                                 vlSelf->riscx__DOT__regfile_u__DOT__reg_data
                                                 [(0x1fU 
                                                   & ((vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                       >> 0x14U) 
                                                      - (IData)(1U)))]
                                                  : 0U)))),32);
            tracep->chgIData(oldp+12,((((((IData)(vlSelf->riscx__DOT__ex_rd_en) 
                                          & (IData)(vlSelf->riscx__DOT__dec_rs1_en)) 
                                         & (0U != (0x1fU 
                                                   & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                      >> 0xfU)))) 
                                        & ((0x1fU & 
                                            (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                             >> 0xfU)) 
                                           == (0x1fU 
                                               & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                  >> 7U))))
                                        ? vlSelf->riscx__DOT__ex_alu_res
                                        : (((((IData)(vlSelf->riscx__DOT__ex_mem_u__DOT__ex_rd_en_dff__DOT__qout_r) 
                                              & (IData)(vlSelf->riscx__DOT__dec_rs1_en)) 
                                             & (0U 
                                                != 
                                                (0x1fU 
                                                 & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                    >> 0xfU)))) 
                                            & ((0x1fU 
                                                & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0xfU)) 
                                               == (IData)(vlSelf->riscx__DOT__ex_mem_u__DOT__ex_rd_idx_dff__DOT__qout_r)))
                                            ? vlSelf->riscx__DOT__ex_mem_u__DOT__ex_rd_wdata_dff__DOT__qout_r
                                            : vlSelf->riscx__DOT__rf_rs1_rdata))),32);
            tracep->chgIData(oldp+13,((((((IData)(vlSelf->riscx__DOT__ex_rd_en) 
                                          & (IData)(vlSelf->riscx__DOT__dec_rs2_en)) 
                                         & (0U != (0x1fU 
                                                   & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                      >> 0x14U)))) 
                                        & ((0x1fU & 
                                            (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                             >> 0x14U)) 
                                           == (0x1fU 
                                               & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                  >> 7U))))
                                        ? vlSelf->riscx__DOT__ex_alu_res
                                        : (((((IData)(vlSelf->riscx__DOT__ex_mem_u__DOT__ex_rd_en_dff__DOT__qout_r) 
                                              & (IData)(vlSelf->riscx__DOT__dec_rs2_en)) 
                                             & (0U 
                                                != 
                                                (0x1fU 
                                                 & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                    >> 0x14U)))) 
                                            & ((0x1fU 
                                                & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0x14U)) 
                                               == (IData)(vlSelf->riscx__DOT__ex_mem_u__DOT__ex_rd_idx_dff__DOT__qout_r)))
                                            ? vlSelf->riscx__DOT__ex_mem_u__DOT__ex_rd_wdata_dff__DOT__qout_r
                                            : vlSelf->riscx__DOT__rf_rs1_rdata))),32);
            tracep->chgIData(oldp+14,(vlSelf->riscx__DOT__dec_imm),32);
            tracep->chgCData(oldp+15,((0x1fU & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                >> 7U))),5);
            tracep->chgBit(oldp+16,(vlSelf->riscx__DOT__dec_rd_en));
            tracep->chgIData(oldp+17,(vlSelf->riscx__DOT__id_ex_u__DOT__pc_dff__DOT__qout_r),32);
            tracep->chgIData(oldp+18,(vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r),32);
            tracep->chgIData(oldp+19,(vlSelf->riscx__DOT__id_ex_u__DOT__alu_op1_dff__DOT__qout_r),32);
            tracep->chgIData(oldp+20,(vlSelf->riscx__DOT__id_ex_u__DOT__alu_op2_dff__DOT__qout_r),32);
            tracep->chgIData(oldp+21,(vlSelf->riscx__DOT__id_ex_u__DOT__alu_fun_dff__DOT__qout_r),32);
            tracep->chgBit(oldp+22,(vlSelf->riscx__DOT__id_ex_u__DOT__prdt_taken_dff__DOT__qout_r));
            tracep->chgCData(oldp+23,(vlSelf->riscx__DOT__id_ex_u__DOT__rd_idx_dff__DOT__qout_r),5);
            tracep->chgBit(oldp+24,(vlSelf->riscx__DOT__id_ex_u__DOT__rd_en_dff__DOT__qout_r));
            tracep->chgIData(oldp+25,((vlSelf->riscx__DOT__id_ex_u__DOT__pc_dff__DOT__qout_r 
                                       + ((IData)(vlSelf->riscx__DOT__id_ex_u__DOT__prdt_taken_dff__DOT__qout_r)
                                           ? 4U : vlSelf->riscx__DOT__id_ex_u__DOT__alu_fun_dff__DOT__qout_r))),32);
            tracep->chgIData(oldp+26,(vlSelf->riscx__DOT__ex_alu_res),32);
            tracep->chgCData(oldp+27,((0x1fU & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                >> 7U))),5);
            tracep->chgBit(oldp+28,(vlSelf->riscx__DOT__ex_rd_en));
            tracep->chgIData(oldp+29,(vlSelf->riscx__DOT__ex_mem_u__DOT__pc_dff__DOT__qout_r),32);
            tracep->chgIData(oldp+30,(vlSelf->riscx__DOT__ex_mem_u__DOT__instr_dff__DOT__qout_r),32);
            tracep->chgIData(oldp+31,(vlSelf->riscx__DOT__ex_mem_u__DOT__alu_res_dff__DOT__qout_r),32);
            tracep->chgCData(oldp+32,(vlSelf->riscx__DOT__ex_mem_u__DOT__ex_rd_idx_dff__DOT__qout_r),5);
            tracep->chgBit(oldp+33,(vlSelf->riscx__DOT__ex_mem_u__DOT__ex_rd_en_dff__DOT__qout_r));
            tracep->chgIData(oldp+34,(vlSelf->riscx__DOT__ex_mem_u__DOT__ex_rd_wdata_dff__DOT__qout_r),32);
            tracep->chgIData(oldp+35,(((IData)(vlSelf->riscx__DOT__ex_pipe_flush)
                                        ? (vlSelf->riscx__DOT__id_ex_u__DOT__pc_dff__DOT__qout_r 
                                           + ((IData)(vlSelf->riscx__DOT__id_ex_u__DOT__prdt_taken_dff__DOT__qout_r)
                                               ? 4U
                                               : vlSelf->riscx__DOT__id_ex_u__DOT__alu_fun_dff__DOT__qout_r))
                                        : ((((IData)(vlSelf->riscx__DOT__if_u__DOT__dec_bjp) 
                                             & (IData)(vlSelf->riscx__DOT__if_u__DOT__prdt_taken))
                                             ? ((0x67U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr))
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                      >> 0xfU)))
                                                  ? 0U
                                                  : 4U)
                                                 : vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r)
                                             : vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r) 
                                           + (((IData)(vlSelf->riscx__DOT__if_u__DOT__dec_bjp) 
                                               & (IData)(vlSelf->riscx__DOT__if_u__DOT__prdt_taken))
                                               ? vlSelf->riscx__DOT__if_u__DOT__dec_bjp_imm
                                               : 4U)))),32);
            tracep->chgBit(oldp+36,(vlSelf->riscx__DOT__if_u__DOT__dec_bjp));
            tracep->chgBit(oldp+37,((0x63U == (0x7fU 
                                               & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr))));
            tracep->chgBit(oldp+38,((0x6fU == (0x7fU 
                                               & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr))));
            tracep->chgBit(oldp+39,((0x67U == (0x7fU 
                                               & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr))));
            tracep->chgCData(oldp+40,((0x1fU & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                >> 0xfU))),5);
            tracep->chgIData(oldp+41,(vlSelf->riscx__DOT__if_u__DOT__dec_bjp_imm),32);
            tracep->chgBit(oldp+42,((0U == (0x1fU & 
                                            (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                             >> 0xfU)))));
            tracep->chgBit(oldp+43,((1U == (0x1fU & 
                                            (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                             >> 0xfU)))));
            tracep->chgIData(oldp+44,(((0x67U == (0x7fU 
                                                  & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr))
                                        ? ((0U == (0x1fU 
                                                   & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                      >> 0xfU)))
                                            ? 0U : 4U)
                                        : vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r)),32);
            tracep->chgIData(oldp+45,((((IData)(vlSelf->riscx__DOT__if_u__DOT__dec_bjp) 
                                        & (IData)(vlSelf->riscx__DOT__if_u__DOT__prdt_taken))
                                        ? ((0x67U == 
                                            (0x7fU 
                                             & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr))
                                            ? ((0U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                    >> 0xfU)))
                                                ? 0U
                                                : 4U)
                                            : vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r)
                                        : vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r)),32);
            tracep->chgIData(oldp+46,((((IData)(vlSelf->riscx__DOT__if_u__DOT__dec_bjp) 
                                        & (IData)(vlSelf->riscx__DOT__if_u__DOT__prdt_taken))
                                        ? vlSelf->riscx__DOT__if_u__DOT__dec_bjp_imm
                                        : 4U)),32);
            tracep->chgCData(oldp+47,((0x7fU & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr)),7);
            tracep->chgIData(oldp+48,((((- (IData)(
                                                   (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                    >> 0x1fU))) 
                                        << 0xdU) | 
                                       ((0x1000U & 
                                         (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                          >> 0x13U)) 
                                        | ((0x800U 
                                            & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                    >> 7U))))))),32);
            tracep->chgIData(oldp+49,((((- (IData)(
                                                   (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                    >> 0x1fU))) 
                                        << 0x15U) | 
                                       ((0x100000U 
                                         & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                            >> 0xbU)) 
                                        | ((0xff000U 
                                            & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr) 
                                           | ((0x800U 
                                               & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                  >> 9U)) 
                                              | (0x7feU 
                                                 & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                    >> 0x14U))))))),32);
            tracep->chgIData(oldp+50,((((- (IData)(
                                                   (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                        >> 0x14U))),32);
            tracep->chgBit(oldp+51,((0U != (0x1fU & 
                                            (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                             >> 0xfU)))));
            tracep->chgBit(oldp+52,((0U != (0x1fU & 
                                            (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                             >> 0x14U)))));
            tracep->chgBit(oldp+53,(((((IData)(vlSelf->riscx__DOT__ex_rd_en) 
                                       & (IData)(vlSelf->riscx__DOT__dec_rs1_en)) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0xfU)))) 
                                     & ((0x1fU & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                  >> 0xfU)) 
                                        == (0x1fU & 
                                            (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                             >> 7U))))));
            tracep->chgBit(oldp+54,(((((IData)(vlSelf->riscx__DOT__ex_mem_u__DOT__ex_rd_en_dff__DOT__qout_r) 
                                       & (IData)(vlSelf->riscx__DOT__dec_rs1_en)) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0xfU)))) 
                                     & ((0x1fU & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                  >> 0xfU)) 
                                        == (IData)(vlSelf->riscx__DOT__ex_mem_u__DOT__ex_rd_idx_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+55,(((((IData)(vlSelf->riscx__DOT__ex_rd_en) 
                                       & (IData)(vlSelf->riscx__DOT__dec_rs2_en)) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0x14U)))) 
                                     & ((0x1fU & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                  >> 0x14U)) 
                                        == (0x1fU & 
                                            (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                             >> 7U))))));
            tracep->chgBit(oldp+56,(((((IData)(vlSelf->riscx__DOT__ex_mem_u__DOT__ex_rd_en_dff__DOT__qout_r) 
                                       & (IData)(vlSelf->riscx__DOT__dec_rs2_en)) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0x14U)))) 
                                     & ((0x1fU & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                  >> 0x14U)) 
                                        == (IData)(vlSelf->riscx__DOT__ex_mem_u__DOT__ex_rd_idx_dff__DOT__qout_r)))));
            tracep->chgCData(oldp+57,((0x7fU & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)),7);
            tracep->chgCData(oldp+58,((7U & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+59,((vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                       >> 0x19U)),7);
            tracep->chgIData(oldp+60,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[0]),32);
            tracep->chgIData(oldp+61,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[1]),32);
            tracep->chgIData(oldp+62,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[2]),32);
            tracep->chgIData(oldp+63,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[3]),32);
            tracep->chgIData(oldp+64,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[4]),32);
            tracep->chgIData(oldp+65,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[5]),32);
            tracep->chgIData(oldp+66,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[6]),32);
            tracep->chgIData(oldp+67,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[7]),32);
            tracep->chgIData(oldp+68,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[8]),32);
            tracep->chgIData(oldp+69,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[9]),32);
            tracep->chgIData(oldp+70,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[10]),32);
            tracep->chgIData(oldp+71,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[11]),32);
            tracep->chgIData(oldp+72,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[12]),32);
            tracep->chgIData(oldp+73,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[13]),32);
            tracep->chgIData(oldp+74,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[14]),32);
            tracep->chgIData(oldp+75,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[15]),32);
            tracep->chgIData(oldp+76,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[16]),32);
            tracep->chgIData(oldp+77,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[17]),32);
            tracep->chgIData(oldp+78,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[18]),32);
            tracep->chgIData(oldp+79,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[19]),32);
            tracep->chgIData(oldp+80,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[20]),32);
            tracep->chgIData(oldp+81,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[21]),32);
            tracep->chgIData(oldp+82,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[22]),32);
            tracep->chgIData(oldp+83,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[23]),32);
            tracep->chgIData(oldp+84,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[24]),32);
            tracep->chgIData(oldp+85,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[25]),32);
            tracep->chgIData(oldp+86,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[26]),32);
            tracep->chgIData(oldp+87,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[27]),32);
            tracep->chgIData(oldp+88,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[28]),32);
            tracep->chgIData(oldp+89,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[29]),32);
            tracep->chgIData(oldp+90,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[30]),32);
            tracep->chgIData(oldp+91,(vlSelf->riscx__DOT__regfile_u__DOT__i),32);
            tracep->chgCData(oldp+92,((0x7fU & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)),7);
            tracep->chgCData(oldp+93,((7U & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+94,((vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                       >> 0x19U)),7);
            tracep->chgBit(oldp+95,((0x33U == (0x7fU 
                                               & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))));
            tracep->chgBit(oldp+96,((0x13U == (0x7fU 
                                               & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))));
            tracep->chgBit(oldp+97,(((3U == (0x7fU 
                                             & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)) 
                                     | (0x23U == (0x7fU 
                                                  & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+98,((0x63U == (0x7fU 
                                               & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))));
            tracep->chgBit(oldp+99,((0x37U == (0x7fU 
                                               & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))));
            tracep->chgBit(oldp+100,((0x17U == (0x7fU 
                                                & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))));
            tracep->chgBit(oldp+101,(vlSelf->riscx__DOT__ex_u__DOT__al_ali));
            tracep->chgBit(oldp+102,((0U == (7U & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0xcU)))));
            tracep->chgBit(oldp+103,((IData)((0x40000000U 
                                              == (0x40007000U 
                                                  & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+104,((1U == (7U & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0xcU)))));
            tracep->chgBit(oldp+105,((2U == (7U & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0xcU)))));
            tracep->chgBit(oldp+106,((3U == (7U & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0xcU)))));
            tracep->chgBit(oldp+107,((4U == (7U & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0xcU)))));
            tracep->chgBit(oldp+108,((IData)((0x5000U 
                                              == (0x40007000U 
                                                  & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+109,((IData)((0x40005000U 
                                              == (0x40007000U 
                                                  & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+110,((6U == (7U & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0xcU)))));
            tracep->chgBit(oldp+111,((7U == (7U & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0xcU)))));
            tracep->chgBit(oldp+112,((((((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                         & (0U == (7U 
                                                   & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                      >> 0xcU)))) 
                                        | ((3U == (0x7fU 
                                                   & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)) 
                                           | (0x23U 
                                              == (0x7fU 
                                                  & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))) 
                                       | (0x37U == 
                                          (0x7fU & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))) 
                                      | (0x17U == (0x7fU 
                                                   & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+113,((IData)((0x40000033U 
                                              == (0x4000707fU 
                                                  & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+114,(((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                      & (1U == (7U 
                                                & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0xcU))))));
            tracep->chgBit(oldp+115,(((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                      & (IData)((0x5000U 
                                                 == 
                                                 (0x40007000U 
                                                  & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))))));
            tracep->chgBit(oldp+116,(((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                      & (IData)((0x40005000U 
                                                 == 
                                                 (0x40007000U 
                                                  & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))))));
            tracep->chgBit(oldp+117,(((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                      & (7U == (7U 
                                                & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0xcU))))));
            tracep->chgBit(oldp+118,(((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                      & (6U == (7U 
                                                & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0xcU))))));
            tracep->chgBit(oldp+119,(((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                      & (4U == (7U 
                                                & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0xcU))))));
            tracep->chgBit(oldp+120,(((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                      & (2U == (7U 
                                                & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0xcU))))));
            tracep->chgBit(oldp+121,(((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                      & (3U == (7U 
                                                & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0xcU))))));
            tracep->chgIData(oldp+122,(vlSelf->riscx__DOT__ex_u__DOT__alu_op1),32);
            tracep->chgIData(oldp+123,(vlSelf->riscx__DOT__ex_u__DOT__alu_op2),32);
            tracep->chgIData(oldp+124,((vlSelf->riscx__DOT__ex_u__DOT__alu_op1 
                                        + vlSelf->riscx__DOT__ex_u__DOT__alu_op2)),32);
            tracep->chgIData(oldp+125,(vlSelf->riscx__DOT__ex_u__DOT__sub_res),32);
            tracep->chgIData(oldp+126,((vlSelf->riscx__DOT__ex_u__DOT__alu_op1 
                                        & vlSelf->riscx__DOT__ex_u__DOT__alu_op2)),32);
            tracep->chgIData(oldp+127,((vlSelf->riscx__DOT__ex_u__DOT__alu_op1 
                                        | vlSelf->riscx__DOT__ex_u__DOT__alu_op2)),32);
            tracep->chgIData(oldp+128,(vlSelf->riscx__DOT__ex_u__DOT__xor_res),32);
            tracep->chgIData(oldp+129,((vlSelf->riscx__DOT__ex_u__DOT__sub_res 
                                        >> 0x1fU)),32);
            tracep->chgBit(oldp+130,((IData)((0x63U 
                                              == (0x707fU 
                                                  & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+131,((IData)((0x1063U 
                                              == (0x707fU 
                                                  & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+132,((IData)((0x4063U 
                                              == (0x707fU 
                                                  & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+133,((IData)((0x5063U 
                                              == (0x707fU 
                                                  & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+134,((IData)((0x6063U 
                                              == (0x707fU 
                                                  & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+135,((IData)((0x7063U 
                                              == (0x707fU 
                                                  & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+136,((0U != vlSelf->riscx__DOT__ex_u__DOT__xor_res)));
            tracep->chgBit(oldp+137,((vlSelf->riscx__DOT__ex_u__DOT__sub_res 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+138,(((IData)((0x63U 
                                               == (0x707fU 
                                                   & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->riscx__DOT__ex_u__DOT__xor_res))))));
            tracep->chgBit(oldp+139,(((IData)((0x1063U 
                                               == (0x707fU 
                                                   & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))) 
                                      & (0U != vlSelf->riscx__DOT__ex_u__DOT__xor_res))));
            tracep->chgBit(oldp+140,(((IData)((0x4063U 
                                               == (0x707fU 
                                                   & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))) 
                                      & (vlSelf->riscx__DOT__ex_u__DOT__sub_res 
                                         >> 0x1fU))));
            tracep->chgBit(oldp+141,(((IData)((0x5063U 
                                               == (0x707fU 
                                                   & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))) 
                                      & (~ (vlSelf->riscx__DOT__ex_u__DOT__sub_res 
                                            >> 0x1fU)))));
            tracep->chgBit(oldp+142,(((IData)((0x6063U 
                                               == (0x707fU 
                                                   & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))) 
                                      & (vlSelf->riscx__DOT__ex_u__DOT__sub_res 
                                         >> 0x1fU))));
            tracep->chgBit(oldp+143,(((IData)((0x7063U 
                                               == (0x707fU 
                                                   & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))) 
                                      & (~ (vlSelf->riscx__DOT__ex_u__DOT__sub_res 
                                            >> 0x1fU)))));
            tracep->chgBit(oldp+144,(vlSelf->riscx__DOT__ex_u__DOT__branch_res));
            tracep->chgBit(oldp+145,(((0x63U == (0x7fU 
                                                 & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)) 
                                      & ((IData)(vlSelf->riscx__DOT__ex_u__DOT__branch_res) 
                                         ^ (IData)(vlSelf->riscx__DOT__id_ex_u__DOT__prdt_taken_dff__DOT__qout_r)))));
            tracep->chgIData(oldp+146,(((IData)(vlSelf->riscx__DOT__id_ex_u__DOT__prdt_taken_dff__DOT__qout_r)
                                         ? 4U : vlSelf->riscx__DOT__id_ex_u__DOT__alu_fun_dff__DOT__qout_r)),32);
        }
        tracep->chgBit(oldp+147,(vlSelf->clk));
        tracep->chgBit(oldp+148,(vlSelf->rst_n));
    }
}

void Vriscx___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vriscx___024root* const __restrict vlSelf = static_cast<Vriscx___024root*>(voidSelf);
    Vriscx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
