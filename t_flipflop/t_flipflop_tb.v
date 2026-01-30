module t_flipflop_tb;

reg t,clk;
wire q,qbar;

t_flipflop uut( .t(t), .clk(clk), .q(q), .qbar(qbar));

always #05 clk = ~clk ;

initial begin
    $dumpfile("t_flipflop.vcd");
    $dumpvars(0,t_flipflop_tb);
    $monitor(" t= %b clk = %b q = %b qbar = %b",t,clk,q,qbar);
    clk = 0;
    t = 0;#12;
    t = 1;#10;
    t = 0;#15;
    t = 1;#10;

    $finish;
end
endmodule


