module xor_gate_tb;
reg a,b;
wire y1,y2,y3;

xor_gate a1(y1,a,b);

xor_gate a2(y2,a,b);

xor_gate a3(y3,a,b);

initial begin
   
        $dumpfile("dump.vcd");
        $dumpvars(0,xor_gate_tb);
        $monitor("a = %b b = %b y1 = %b y2 = %b y3 = %b",a,b,y1,y2,y3);

        a = 0;b = 0;#10;
        a = 0;b = 1;#10;
        a = 1;b = 0;#10;
        a = 1;b = 1;#10;
$finish;
end
endmodule