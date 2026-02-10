module traffic_light_monitoring_tb;
    reg [1:0] state;

    wire red, yellow, green;

    traffic_light_bug uut(state,red,yellow,green);

    initial begin
        $monitor("Time  State  R Y G");
        state = 2'b00; #10;
        state = 2'b01; #10;
        state = 2'b10; #10;
        state = 2'b11; #10;
        state = 2'b01; #10;
        $finish;
    end

    initial begin
        $dumpfile("dump.vcd"); $dumpvars;
        $monitor("%4t   %b     %b %b %b",
                  $time, state, red, yellow, green);
    end
endmodule