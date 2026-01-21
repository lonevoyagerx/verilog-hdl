 module dec_bcd_enc_tb();
  reg[9:0]in;
  wire [3:0]out;

 dec_bcd_enc uut(in,out);

 initial
begin
     $dumpfile("dec_bcd_enc");
    $dumpvars(0,dec_bcd_enc_tb);
    $monitor("in=%b out=%b",in,out);


      in=10'b0000000100; #10;
      in=10'b1000000000; #10;
      in=10'b0000100000; #10;
      in=10'b0000001010; #10;
      

  
  $finish;
end
endmodule