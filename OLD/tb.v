// Code your testbench here
// or browse Examples
module tb;

reg clk, reset;

RISC_V_Processor processor(.clk(clk), .reset(reset));

initial
begin
  $dumpfile("dump.vcd");
  $dumpvars();
  clk = 1'd0;
  reset = 1'd1;
  #10
  reset = 1'd0;
  #500
  $finish;
end

always #5 clk=~clk;

endmodule
