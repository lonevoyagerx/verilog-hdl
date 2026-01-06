module d_flipflop_tb;
reg d,clk;
wire q,qbar;

d_flipflop uut( .d(d), .clk(clk), .q(q), .qbar(qbar));

initial begin
    clk = 0;
    forever begin
        clk = ~clk; #05;
    end
end

initial begin

    $dumpfile("d_flipflop_wave.vcd");
    $dumpvars(0,d_flipflop_tb);
    $monitor("clk = %b d = %b q = %b qbar = %b",clk,d,q,qbar);

    d = 0; #10;
    d = 1; #10;
    d = 0; #10;
    d = 1; #10;

    $finish;
end
endmodule