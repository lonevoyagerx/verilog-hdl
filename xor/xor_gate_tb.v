module xor_gate_tb;
reg a;
reg b;
wire y;

xorgate uut(.a(a), .b(b), .y(y));

initial begin
    $dumpfile("xor_wave.vcd");
    $dumpvars(0,xor_gate_tb);

    a=0; b=0; #10;
    a=0; b=1; #10;
    a=1; b=0; #10;
    a=1; b=1; #10;
    $finish;
end
endmodule