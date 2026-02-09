`timescale 1ns/1ps

module tb_uart_tx;

    reg clk;
    reg rst;
    reg tx_start;
    reg [7:0] data;
    wire tx;
    wire busy;

     uart_tx dut (
        .clk      (clk),
        .rst      (rst),
        .tx_start (tx_start),
        .data     (data),
        .tx       (tx),
        .busy     (busy)
    );

     always #5 clk = ~clk;

    initial begin
         clk = 0;
        rst = 1;
        tx_start = 0;
        data = 8'h00;

         #20 rst = 0;

         #10 data = 8'hA5;
            tx_start = 1;

         #10 tx_start = 0;

         wait (busy == 0);

         #20 data = 8'h3C;
            tx_start = 1;
        #10 tx_start = 0;

         #200 $finish;
    end

     initial begin
        $monitor("Time=%0t | tx_start=%b | busy=%b | tx=%b | data=%h",
                  $time, tx_start, busy, tx, data);
    end

endmodule
