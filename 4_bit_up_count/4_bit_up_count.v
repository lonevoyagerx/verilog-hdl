module tb_up_counter_4bit();
    reg clk;
    reg reset;
    wire [3:0] count;

    // Instantiate the Unit Under Test (UUT)
    up_counter_4bit uut (
        .clk(clk),
        .reset(reset),
        .count(count)
    );

    // Clock generation (10ns period)
    always #5 clk = ~clk;

    initial begin
        // Initialize Inputs
        clk = 0;
        reset = 0;

        // Apply Reset
        #10 reset = 1;
        #10 reset = 0;

        // Run simulation for 200ns
        #200;
        $finish;
    end

    initial begin
        $monitor("Time=%0t | Reset=%b | Count=%d (%b)", $time, reset, count, count);
    end
endmodule
