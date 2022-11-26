`include "defines.v"

module fetch_if2icb(
    // IF REQ CHANNEL
    input                     if_req_valid_i,
    output                    if_req_ready_o,
    input [`PC_WIDTH-1:0]     if_req_pc_i,
    // IF RESP CHANNEL
    output                    if_resp_valid_o,    
    input                     if_resp_ready_i,
    output                    if_resp_err_o,
    output [`INSTR_WIDTH-1:0] if_resp_instr_o
);

    // get instruction from ITCM
    // REQ CHANNEL
    output                        if2itcm_icb_req_valid_o,
    input                         if2itcm_icb_req_ready_i,
    output [`ITCM_ADDR_WIDTH-1:0] if2itcm_icb_req_addr_o,
    // RESP CHANNEL
    input                         if2itcm_icb_resp_valid_i,
    output                        if2itcm_icb_resp_ready_o,
    input                         if2itcm_icb_resp_err_i,
    input [`ITCM_DATA_WIDTH-1:0]  if2itcm_icb_resp_rdata_i

endmodule