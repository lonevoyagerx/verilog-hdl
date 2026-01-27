module tb4();
reg clk,rst,sin;
wire sout;

siso uut(clk,rst,sin,sout);

initial begin
    
    clk=0;

forever #5 clk=~clk;
 
 end
   initial begin
      $dumpfile("dump.vcd");
      $dumpvars(0,tb4);
      $monitor("clk = %b rst = %b sin = %b sout = %b",clk,rst,sin,sout);

rst=1; sin=1; #5
rst=0; sin=0; #10
rst=1; sin=1; #10
sin=1; #10
sin=1; #10
sin=0; #10

$finish;
end
endmodule