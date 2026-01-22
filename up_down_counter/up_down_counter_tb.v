`timescale 1ns/1ps

module tb_up_down_counter;

    reg clk;
    reg rst;
    reg up_down;
    wire [3:0] count;

     up_down_counter dut (
        .clk(clk),
        .rst(rst),
        .up_down(up_down),
        .count(count)
    );

     always #5 clk = ~clk;

    initial begin

        $dumpfile("dump.vcd");
        $dumpvars(0,tb_up_down_counter);
        $monitor("clk = %b rst = %b up_down = %b count = %b",clk,rst,up_down,count);
         clk = 0;
        rst = 1;
        up_down = 1;

         #10 rst = 0;

         #50 up_down = 1;

         #50 up_down = 0;

         #50 $finish;
    end

endmodule
