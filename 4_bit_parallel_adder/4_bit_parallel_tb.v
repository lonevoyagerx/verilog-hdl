module bit_parallel_tb;

reg[3:0] a,b;
reg cin;
wire[3:0] sum;
wire carry;

parallel_adder uut(a,b,cin,sum,carry );
  initial begin
    $dumpfile("dump.vcd");
    $dumpvars(0,bit_parallel_tb);
    $monitor("a = %b b = %b cin = %b sum = %b carry = %b",a,b,cin,sum,carry );

    a = 4'b0011; b = 4'b0001; cin = 1;

    $finish;
  end
endmodule