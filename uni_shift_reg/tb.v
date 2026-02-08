`timescale 1ns/1ps

module tb_universal_shift_reg;

    reg clk;
    reg rst;
    reg [1:0] sel;
    reg [3:0] pdata;
    reg sin;
    wire [3:0] q;

    // Instantiate DUT
    universal_shift_reg dut (
        .clk   (clk),
        .rst   (rst),
        .sel   (sel),
        .pdata (pdata),
        .sin   (sin),
        .q     (q)
    );

    // Clock generation (10 ns period)
    always #5 clk = ~clk;

    initial begin
        // Initialize signals
        clk   = 0;
        rst   = 1;
        sel   = 2'b00;
        pdata = 4'b0000;
        sin   = 0;

        // Reset
        #10 rst = 0;

        // -------------------------------
        // Parallel Load
        // -------------------------------
        #10 sel = 2'b11;
            pdata = 4'b1010;

        // -------------------------------
        // Hold
        // -------------------------------
        #10 sel = 2'b00;

        // -------------------------------
        // Shift Left
        // -------------------------------
        #10 sel = 2'b01; sin = 1;
        #10 sin = 0;

        // -------------------------------
        // Shift Right
        // -------------------------------
        #10 sel = 2'b10; sin = 1;
        #10 sin = 0;

        // -------------------------------
        // Hold again
        // -------------------------------
        #10 sel = 2'b00;

        // Finish simulation
        #20 $finish;
    end

    // Monitor output
    initial begin
        $monitor("Time=%0t | sel=%b | sin=%b | pdata=%b | q=%b",
                 $time, sel, sin, pdata, q);
    end

endmodule
