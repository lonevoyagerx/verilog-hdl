module even_parity_check_tb();
reg[3:0]in;
reg p;
wire error;
even_parity_gen uut(error,in,p);

initial
begin
     
     $dumpfile("dump.vcd");
     $dumpvars(0,even_parity_check_tb);
     $monitor("in=%b p=%b error=%b",error,in,p);


in=4'b1010; p=1'b0; #10
in=4'b1110; p=1'b1; #10
in=4'b0101; p=1'b0; #10
in=4'b1011; p=1'b1; #10

$finish;
end
endmodule