module even_parity_gen_tb();
reg[3:0]in;
wire p;
even_parity_gen uut(in,p);

initial
begin
     
     $dumpfile("dump.vcd");
     $dumpvars(0,even_parity_gen_tb);
     $monitor("in=%b p=%b",in,p);


in=4'b1010; #10
in=4'b1110; #10
in=4'b0101; #10
in=4'b1011; #10
$finish;
end
endmodule