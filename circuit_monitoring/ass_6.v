module signal_monitor (
    input wire [3:0] signal_a,
    input wire [3:0] signal_b,
    input wire [1:0] mode_select,
    input wire clk,
    input wire reset,

    output reg [2:0] status_leds,
    output reg [3:0] control_out
);

    reg [1:0] test_cnt;
    reg [3:0] next_control;

    always @(*) begin
        status_leds  = 3'b000;
        next_control = 4'b0000;

        case (mode_select)

            2'b00: begin
                next_control = signal_a + signal_b;
                status_leds  = 3'b001;
            end

            2'b01: begin
                if (signal_a > signal_b) begin
                    next_control = signal_a - signal_b;
                    status_leds  = 3'b100;
                end else if (signal_a < signal_b) begin
                    next_control = signal_b - signal_a;
                    status_leds  = 3'b010;
                end else begin
                    next_control = 4'b0000;
                    status_leds  = 3'b001;
                end
            end

            2'b10: begin
                case (test_cnt)
                    2'd0: next_control = 4'd0;
                    2'd1: next_control = 4'd5;
                    2'd2: next_control = 4'd10;
                    2'd3: next_control = 4'd15;
                endcase
                status_leds = 3'b111;
            end

            2'b11: begin
                next_control = (signal_a + signal_b) >> 1;
                status_leds  = 3'b111;
            end

        endcase
    end

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            control_out <= 4'b0000;
            test_cnt    <= 2'b00;
        end else begin
            control_out <= next_control;

            if (mode_select == 2'b10) test_cnt <= test_cnt + 1'b1;
            else test_cnt <= 2'b00;
        end
    end

endmodule
