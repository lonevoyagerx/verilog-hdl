module nor_gate_tb;
reg a;
reg b;
wire y;

norgate uut(.a(a), .b(b), .y(y));

initial begin
    $dumpfile("nor_wave.vcd");
    $dumpvars(0,nor_gate_tb);
    $monitor("a = %b b = %b y = %b",a,b,y);

    a=0; b=0; #10;
    a=0; b=1; #10;
    a=1; b=0; #10;
    a=1; b=1; #10;
    $finish;
end
endmodule