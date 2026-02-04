module four_mux_tb;
reg a,b,c,d;
reg[1:0]sel;
wire y;

four_1_mux uut(a,b,c,d,,sel,y);

initial begin 
    $dumpfile("dump.vcd");
    $dumpvars(0,four_mux_tb);
    $monitor("a = %b b = %b c = %b d = %b sel = %b y = %b",a,b,c,d,sel,y);

         a = 0; b = 1; c = 0; d = 1;
    sel = 2'b00; #10;   
    sel = 2'b01; #10;   
    sel = 2'b10; #10;   
    sel = 2'b11; #10;   

     a = 1; b = 0; c = 1; d = 0;
    sel = 2'b00; #10;
    sel = 2'b01; #10;
    sel = 2'b10; #10;
    sel = 2'b11; #10;

    $finish;
end
endmodule

 