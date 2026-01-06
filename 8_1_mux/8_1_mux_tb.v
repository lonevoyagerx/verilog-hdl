module eight_one_mux_tb();
reg[7:0]in;
reg[2:0]sel;
wire y;
eight_one_mux uut(.in(in),.sel(sel),.y(y));
initial begin
    in=8'b10101010; sel=3'b000; #10;
    in=8'b10101010; sel=3'b001; #10;
    in=8'b10101010; sel=3'b010; #10;
    in=8'b10101010; sel=3'b011; #10;
    in=8'b10101010; sel=3'b100; #10;
    in=8'b10101010; sel=3'b101; #10;
    in=8'b10101010; sel=3'b110; #10;
    in=8'b10101010; sel=3'b111; #10;
    $finish;
end
initial begin
    $monitor("in=%b sel=%b y=%b",in,sel,y);
    $dumpfile("dump.vcd");
    $dumpvars(0,eight_one_mux_tb);
end
endmodule