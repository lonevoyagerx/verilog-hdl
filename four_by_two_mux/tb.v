 
module tb_mux4_1;

    reg  a, b, c, d;
    reg  [1:0] sel;
    wire z;

     mux4_1_using_2_1 dut (
        .a(a), .b(b), .c(c), .d(d),
        .sel(sel),
        .z(z)
    );

    initial begin

        $dumpfile("mux4_1.vcd");
        $dumpvars(0, tb_mux4_1);
        $monitor("Time=%0t | sel=%b | a=%b b=%b c=%b d=%b | z=%b",
                  $time, sel, a, b, c, d, z);
         
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

