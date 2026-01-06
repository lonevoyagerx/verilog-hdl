module jk_tb;
reg j,k,clk;
wire q,qbar;
jk_flipflop uut(j,k,clk,q,qbar);

always #5 clk = ~clk;

initial begin
    $dumpfile("jk_wave.vcd");
    $dumpvars(0,jk_tb);
    $monitor("j = %b k = %b clk == %b q == %b qbar == %b",j,k,clk,q,qbar);

    clk = 0;

    j = 0; k = 0; #10;
    j = 0; k = 1; #10;
    j = 1; k = 0; #10;
    j = 1; k = 1; #10;

    $finish;
end
endmodule
