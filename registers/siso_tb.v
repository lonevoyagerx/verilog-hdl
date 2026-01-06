module siso_shift_register_tb;
reg si,clk,rst;
wire sout;
siso_shift_register uut(.si(si), .clk(clk), .rst(rst), .so(so));

initial begin
    clk = 0;
    forever begin #10 clk = ~clk;
end
end
initial begin
    
    $dumpfile("siso_wave.vcd");
    $dumpvars(0,siso_shift_register_tb);
    rst=1;si=1;#13;
    rst=0;si=0;#25;
    rst=1;si=1;#12;
    rst=1;
    rst=0;

    $finish;
end
endmodule