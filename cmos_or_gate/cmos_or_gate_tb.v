module tb_cmos_or_gate;

    reg a,b;
    wire y;

     cmos_or_gate DUT (.a(a), .b(b), .y(y));

    initial begin
          $dumpfile("dump.vcd");
          $dumpvars(0,tb_cmos_or_gate);
          $monitor("a = %b | b = %b | y = %b",a,b,y);

          a = 0; b = 0; #10;
          a = 0; b = 1; #10;
          a = 1; b = 0; #10;
          a = 1; b = 1; #10;

          $finish;

    end

endmodule
