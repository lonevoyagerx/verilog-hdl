module timer_syn (
    input clk,
    input rst,          // synchronous reset
    input start,
    input [7:0] load,
    output reg done
);

    reg [7:0] count;
    reg running;

    always @(posedge clk) begin
        if (rst) begin
            count   <= 8'd0;
            running <= 1'b0;
            done    <= 1'b0;
        end
        else begin
            // start pulse loads counter
            if (start && !running) begin
                count   <= load;
                running <= 1'b1;
                done    <= 1'b0;
            end

            // countdown
            else if (running) begin
                if (count == 8'd1) begin
                    count   <= 8'd0;
                    running <= 1'b0;
                    done    <= 1'b1;
                end
                else begin
                    count <= count - 1'b1;
                end
            end
        end
    end

endmodule

 