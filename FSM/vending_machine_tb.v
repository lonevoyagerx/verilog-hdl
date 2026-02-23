module vending_machine_tb;
    reg clk;
    reg reset;
    reg [4:0] coin;

    wire dispense;
    wire change;

     vending_machine uut(clk,rst,coin,dispense,change);

     always #5 clk = ~clk;

     initial begin
        clk = 0;
        reset = 1;
        coin = 0;

     #10 reset = 0;

 
        #10 coin = 10;
        #10 coin = 0;    

        #20 coin = 10;
        #10 coin = 0;

         #30;

       
        #10 coin = 20;
        #10 coin = 0;

        #20 coin = 10;
        #10 coin = 0;

        #30;

       
        #10 coin = 20;
        #10 coin = 0;

        #20 coin = 20;
        #10 coin = 0;

        #30;

         $finish;
    end

     initial begin
        $dumpfile("dump.vcd");
        $dumpvars();
        $monitor("Time=%0t | coin=%0d | dispense=%b | change=%b",
                  $time, coin, dispense, change);
    end

endmodule