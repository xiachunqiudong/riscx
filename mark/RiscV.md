

## RV32I

|       | fetch               |    decode     |      execute      |      memory      |     write back      |
| ----- | ------------------- | :-----------: | :---------------: | :--------------: | :-----------------: |
| AL    | pc = pc + 4         | rs1, rs2, rd  |  rd = rs1 op rs2  |       none       |         rd          |
| ALI   | pc = pc + 4         | rs1, imm, rd  |  rd = rs1 op imm  |       none       |         rd          |
| BXX   | pc_next = pc + imm  |   rs1, rs2    | jump = rs1 op rs2 |       none       |        none         |
| JAL   | pc_next = pc + imm  |    imm, rd    |       none        |       none       |     rd = pc + 4     |
| JALR  | pc_next = rs1 + imm | rs1, imm, rd  |       none        |       none       |     rd = pc + 4     |
| LOAD  | pc = pc + 4         | rs1, imm, rd  | maddr = rs1 + imm | mdata = M[maddr] |     rd = maddr      |
| STORE | pc = pc + 4         | rs1, rs2, imm | maddr = rs1 + imm |  M[addr] = rs2   |        none         |
| LUI   | pc = pc + 4         |    imm, rd    |       none        |       none       |      rd = imm       |
| AUIPC | pc = pc + 4         |    imm, rd    |  imm = imm + pc   |       none       |      rd = imm       |
| CSR   | pc = pc + 4         | csr, rs1, rd  |       none        |       none       | csr = rs1, rd = csr |
| CSRI  | pc = pc + 4         | csr, imm, rd  |       none        |       none       | csr = imm, rd = csr |
