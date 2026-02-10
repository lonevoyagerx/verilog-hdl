module tb_signal_monitor;

    reg [3:0] signal_a, signal_b;
    reg [1:0] mode_select;
    reg clk, reset;

    wire [2:0] status_leds;
    wire [3:0] control_out;

    signal_monitor dut (
        .signal_a(signal_a),
        .signal_b(signal_b),
        .mode_select(mode_select),
        .clk(clk),
        .reset(reset),
        .status_leds(status_leds),
        .control_out(control_out)
    );

    always #5 clk = ~clk;

    initial begin
        $dumpfile("lab6.vcd");
        $dumpvars(0, tb_signal_monitor);

        $monitor(
            "clk = %b | reset = %b | mode_select = %b | signal_a = %b | signal_b = %b | status_leds = %b | control_out = %b",
            clk, reset, mode_select, signal_a, signal_b, status_leds,
            control_out);

        clk = 0;
        reset = 1;
        signal_a = 0;
        signal_b = 0;
        mode_select = 2'b00;

        #20 reset = 0;

        mode_select = 2'b00;
        signal_a = 4'd7;
        signal_b = 4'd3;
        #20;

        mode_select = 2'b01;
        signal_a = 4'd12;
        signal_b = 4'd5;
        #20;

        signal_a = 4'd3;
        signal_b = 4'd9;
        #20;

        mode_select = 2'b11;
        signal_a = 4'd10;
        signal_b = 4'd6;
        #20;

        mode_select = 2'b10;
        #80;

        $finish;
    end

endmodule
