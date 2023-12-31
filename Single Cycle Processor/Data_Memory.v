//Module Data_Memory takes a 64-bit memory address, a 64-bit write data, and control signals for memory write and read operations as inputs.
//This module provides a 64-bit read data and eight 64-bit output elements as outputs.
//This module reads and writes data from and to the memory and stores the data in an 8x64-bit array.

module Data_Memory(
    input [63:0] mem_addr,
    input[63:0] write_data,
    input clk, mem_write, mem_read,
  output reg [63:0] read_data,
  output[63:0] element1,
  output[63:0] element2 ,
  output[63:0] element3,
  output[63:0] element4,
  output[63:0] element5,
  output[63:0] element6,
  output[63:0] element7,
  output[63:0] element8);
reg[0:7] data_mem[63:0];
initial
begin
    data_mem[0] = 64'd0;
    data_mem[1] = 64'd0;
    data_mem[2] = 64'd0;
    data_mem[3] = 64'd0;
    data_mem[4] = 64'd0;
    data_mem[5] = 64'd0;
    data_mem[6] = 64'd0;
    data_mem[7] = 64'd0;
    data_mem[8] = 64'd0;
    data_mem[9] = 64'd0;
    data_mem[10] = 64'd0;
    data_mem[11] = 64'd0;
    data_mem[12] = 64'd0;
    data_mem[13] = 64'd0;
    data_mem[14] = 64'd0;
    data_mem[15] = 64'd0;
    data_mem[16] = 64'd0;
    data_mem[17] = 64'd0;
    data_mem[18] = 64'd0;
    data_mem[19] = 64'd0;
    data_mem[20] = 64'd0;
    data_mem[21] = 64'd0;
    data_mem[22] = 64'd0;
    data_mem[23] = 64'd0;
    data_mem[24] = 64'd0;
    data_mem[25] = 64'd0;
    data_mem[26] = 64'd0;
    data_mem[27] = 64'd0;
    data_mem[28] = 64'd0;
    data_mem[29] = 64'd0;
    data_mem[30] = 64'd0;
    data_mem[31] = 64'd0;
    data_mem[32] = 64'd0;
    data_mem[33] = 64'd0;
    data_mem[34] = 64'd0;
    data_mem[35] = 64'd0;
    data_mem[36] = 64'd0;
    data_mem[37] = 64'd0;
    data_mem[38] = 64'd0;
    data_mem[39] = 64'd0;
    data_mem[40] = 64'd0;
    data_mem[41] = 64'd0;
    data_mem[42] = 64'd0;
    data_mem[43] = 64'd0;
    data_mem[44] = 64'd0;
    data_mem[45] = 64'd0;
    data_mem[46] = 64'd0;
    data_mem[47] = 64'd0;
    data_mem[48] = 64'd0;
    data_mem[49] = 64'd0;
    data_mem[50] = 64'd0;
    data_mem[51] = 64'd0;
    data_mem[52] = 64'd0;
    data_mem[53] = 64'd0;
    data_mem[54] = 64'd0;
    data_mem[55] = 64'd0;
    data_mem[56] = 64'd0;
    data_mem[57] = 64'd0;
    data_mem[58] = 64'd0;
    data_mem[59] = 64'd0;
    data_mem[60] = 64'd0;
    data_mem[61] = 64'd0;
    data_mem[62] = 64'd0;
    data_mem[63] = 64'd0;
end
always @(negedge clk)
begin
    if (mem_write)
        begin
            data_mem[mem_addr] = write_data[7:0];
data_mem[mem_addr + 1] = write_data[15:8];
data_mem[mem_addr + 2] = write_data[23:16];
data_mem[mem_addr + 3] = write_data[31:24];
data_mem[mem_addr + 4] = write_data[39:32];
data_mem[mem_addr + 5] = write_data[47:40];
data_mem[mem_addr + 6] = write_data[55:48];
data_mem[mem_addr + 7] = write_data[63:56];
end
end
  always @(*)
    begin
        if(mem_read)
        begin
            read_data = { data_mem[mem_addr + 7], data_mem[mem_addr + 6], data_mem[mem_addr + 5], data_mem[mem_addr + 4], data_mem[mem_addr + 3], data_mem[mem_addr + 2], data_mem[mem_addr + 1], data_mem[mem_addr] };
end
end
  assign element1= {data_mem[7],data_mem[6],data_mem[5], data_mem[4], data_mem[3], data_mem[2], data_mem[1], data_mem[0]};
assign element2 = { data_mem[15], data_mem[14], data_mem[13], data_mem[12], data_mem[11], data_mem[10], data_mem[9], data_mem[8] };
assign element3 = { data_mem[23], data_mem[22], data_mem[21], data_mem[20], data_mem[19], data_mem[18], data_mem[17], data_mem[16] };
assign element4 = { data_mem[31], data_mem[30], data_mem[29], data_mem[28], data_mem[27], data_mem[26], data_mem[25], data_mem[24] };
assign element5 = { data_mem[39], data_mem[38], data_mem[37], data_mem[36], data_mem[35], data_mem[34], data_mem[33], data_mem[32] };
assign element6 = { data_mem[47], data_mem[46], data_mem[45], data_mem[44], data_mem[43], data_mem[42], data_mem[41], data_mem[40] };
assign element7 = { data_mem[55], data_mem[54], data_mem[53], data_mem[52], data_mem[51], data_mem[50], data_mem[49], data_mem[48] };
assign element8 = { data_mem[63], data_mem[62], data_mem[61], data_mem[60], data_mem[59], data_mem[58], data_mem[57], data_mem[56] };
endmodule