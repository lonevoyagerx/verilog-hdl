module tb_dff;

    parameter N = 5;

    reg              clk;
    reg              rst;
    reg  [N-1:0]     d;
    wire [N-1:0]     q_async;
    wire [N-1:0]     q_sync;

    // Instantiate async reset DFF
    dff_async #(.N(N)) U1 (
        .clk(clk),
        .rst(rst),
        .d(d),
        .q(q_async)
    );

    // Instantiate sync reset DFF
    dff_sync #(.N(N)) U2 (
        .clk(clk),
        .rst(rst),
        .d(d),
        .q(q_sync)
    );

    // Clock generation (10 time unit period)
    always #5 clk = ~clk;

    initial begin
        clk = 0;
        rst = 1;
        d   = 5'b00000;

        #12 rst = 0;        // release reset

        #10 d = 5'b10101;
        #10 d = 5'b01010;

        #7  rst = 1;        // async reset triggers immediately
        #8  rst = 0;

        #10 d = 5'b11100;
        #20 $finish;
    end

    initial begin
        $monitor("Time=%0t | rst=%b | d=%b | q_async=%b | q_sync=%b",
                 $time, rst, d, q_async, q_sync);
    end

endmodule
