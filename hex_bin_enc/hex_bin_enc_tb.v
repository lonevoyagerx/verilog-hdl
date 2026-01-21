module hex_bin_enc_tb();
reg[15:0]in;
wire[3:0]out;

hex_bin_enc uut(in,out);

initial begin
    
    $dumpfile("dump.vcd");
    $dumpvars(0,hex_bin_enc_tb);
    $monitor("in=%b out=%b",in,out);

    in=16'h0000; #10;
    in=16'h8000; #10;
    in=16'h0400; #10;
    in=16'h0002; #10;

$finish;
end
endmodule
