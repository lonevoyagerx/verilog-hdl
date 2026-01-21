module four_comp_tb();
reg[3:0]a;
reg[3:0]b;
wire x,y,z;

four_bit uut(x,y,z,a,b);

initial begin
    $dumpfile("dump.vcd");
    $dumpvars(0,four_comp_tb);
    $monitor("a=%b b=%b x=%b y=%b z=%b ",a,b,x,y,z);

    a = 5; b = 10; #10;
    a = 10; b = 10; #10;
    a = 5; b = 30; #10;
    a = 7; b = 10; #10;

    $finish;
end
endmodule