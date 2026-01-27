module tb5();
reg clk,rst,sin;
wire[3:0] pout;

sipo uut(clk,rst,sin,pout);

initial begin
    clk=0;

forever #5 clk=~clk;
end
initial begin
      $dumpfile("dump.vcd");
      $dumpvars(0,tb5);
      $monitor("clk = %b rst = %b sin = %b pout = %b",clk,rst,sin,pout);


rst=1; sin=1; #5
rst=0; sin=0; #10
rst=1; sin=1; #10
sin=1; #10
sin=1; #10
sin=0; #10
sin=1; #5

$finish;
end
endmodule