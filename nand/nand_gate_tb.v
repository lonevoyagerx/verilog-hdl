module nand_gate_tb;
reg a,b;
wire y;

nand_gate dut(a,b,y);

initial begin
    $dumpfile("dump.vcd");
    $dumpvars(0,nand_gate_tb);
    $monitor("a = %b b = %b y = %b", a,b,y);

    a = 0; b = 0; #10;
    a = 1; b = 0; #10;
    a = 0; b = 1; #10;

    $finish;
end
endmodule