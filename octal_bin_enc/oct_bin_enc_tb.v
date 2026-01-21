module octal_bin_enc_tb();
reg [7:0]in;
wire [2:0]out;

octal_bin_enc uut(in,out);

initial
begin

    $dumpfile("dump.vcd");
    $dumpvars(0,octal_bin_enc_tb);
    $monitor("in=%b out=%b",in,out);
    
in=8'b00000000; #10
in=8'b00000001; #10
in=8'b00000010; #10
in=8'b00000100; #10
in=8'b00001000; #10
in=8'b00010000; #10
in=8'b00100000; #10
in=8'b01000000; #10
in=8'b10000000; #10
$finish;
end
endmodule