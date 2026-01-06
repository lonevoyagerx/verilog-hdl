module eight_demux_tb;
reg in,en;
reg[2:0]sel;
output [7:0] out;
eight_demux_tb uut(in,en,sel,out);
initial
begin
    $dumpfile("dump.vcd");
    $dumpvars(0,eight_demux_tb);
    $monitor("in = %b en = %b sel = %b out = %b",in,en,sel,out);
in=1;en=1;
sel=3'b000; #10
sel=3'b001; #10
sel=3'b010; #10
sel=3'b011; #10
sel=3'b100; #10
sel=3'b101; #10
sel=3'b110; #10
sel=3'b111; #10
en=0; #10
en=1; #10
in=0; #10
in=1; #10

$finish;
end
endmodule