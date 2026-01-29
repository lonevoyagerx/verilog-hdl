module tb();
reg clk,rst,d;
wire master,q;
master_slave_ff uut(clk,rst,d,master,q);

initial begin
   clk=0;
forever#5 clk=~clk;
end
initial begin
       $dumpfile("dump.vcd");
      $dumpvars(0,tb);
      $monitor("clk = %b rst = %b d = %b master = %b q = %b",clk,rst,d,master,q);

d=1;rst=1; #10
d=1;rst=0; #5
d=1;rst=1; #10
d=0;rst=1; #10
d=1;rst=1; #10
d=0;rst=1; #10
d=1;rst=1; #10
$finish;
end
endmodule