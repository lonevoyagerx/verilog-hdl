module ripple_tb;
     reg clk;
    reg clear;
     wire [3:0] q;

     ripple_up_counter uut (.clk(clk), .clear(clear), .q(q));

     always #5 clk = ~clk;

     initial begin
         clk = 1'b0;
        clear = 1'b0;

         #5 clear = 1'b1; // Assert reset
        #10 clear = 1'b0; // De-assert reset

         $monitor("Time=%0t | Clear=%0b | Clock=%0b | Count=%0d", $time, clear, clk, q);

         #200 $stop;  
    $finish;
    end

    
     initial begin
      $dumpfile("dump.vcd");
      $dumpvars(0, ripple_tb);
    end

endmodule
