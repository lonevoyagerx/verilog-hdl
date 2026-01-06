module half_adder_tb;
reg a,b;
wire sum,carry;
half_adder ha1(sum,carry,a,b);
initial begin
    $dumpfile("dump.vcd");
    $dumpvars(0,half_adder_tb);
    $monitor("a=%b b=%b sum=%b carry=%b",a,b,sum,carry);
    a=0;b=0;  #10;
    a=0;b=1;  #10;              
    a=1;b=0;  #10;
    a=1;b=1;  #10;

    $finish;

end
endmodule