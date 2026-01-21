module bin_gray_con_tb();
reg[3:0]in;
wire[3:0]out;

bin_gray_con uut(out,in);

initial begin
    
    $dumpfile("dump.vcd");
    $dumpvars(0,bin_gray_con_tb);
    $monitor("in=%b out=%b",in,out);

    in=4'b1010; #10
    in=4'b1000; #10
    in=4'b0101; #10
    in=4'b1110; #10
    in=4'b0010; #10
 
 $finish;
end
endmodule 
