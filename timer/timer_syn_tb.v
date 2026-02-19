`timescale 1ns/1ps

module timer_tb;

    reg clk = 0;
    reg rst;
    reg start;
    reg [7:0] load;
    wire done;

    // Clock generation
    always #5 clk = ~clk;   // 10ns period

    timer_syn uut (
        .clk(clk),
        .rst(rst),
        .start(start),
        .load(load),
        .done(done)
    );

    initial begin

             $dumpfile("dump.vcd");
             $dumpvars();
             $monitor("clk = %b rst = %b start = %b load = %b done = %b",clk,rst,start,load,done);


        rst = 1;
        start = 0;
        load = 8'd10;

        #20 rst = 0;

        // Start timer
        #10 start = 1;
        #10 start = 0;

        // Wait and finish
        #200 $finish;
    end

endmodule
