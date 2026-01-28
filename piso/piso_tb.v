module piso_tb();
reg clk,rst,ld;
reg [3:0]pin;
wire sout;

piso uut(clk,rst,ld,pin,sout);
  initial begin
      clk=0;
  forever #5 clk=~clk;
 end
  initial begin

      $dumpfile("dump.vcd");
      $dumpvars(0,piso_tb);
      $monitor("clk = %b rst = %b pin = %b sout = %b",clk,rst,pin,sout);
    
     rst=1;ld=0; pin=4'b1101; #5
     rst=0;ld=1; pin=4'b1010; #10
     rst=1; pin=4'b0101; #10
     pin=4'b1011; #10
     pin=4'b1101;ld=0; #10
     pin=4'b0000; #10
     pin=4'b1101;ld=1; #5
$finish;
end
endmodule