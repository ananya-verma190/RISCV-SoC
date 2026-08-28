module data_memory(
    input  logic        clk,
    input  logic        cs_n,         // Chip Select (Active Low)
    input  logic        we_n,         // Write Enable (Active Low)
    input  logic [31:0] addr,         // Address from ALU
    input  logic [31:0] write_data,   // Data from rs2
    input  logic [3:0]  byte_enable,  // Mask for SB, SH, SW
    output logic [31:0] read_data     // Data to Writeback
);
   
    localparam BASE      = 32'h8000_0000;
    localparam MEM_BYTES = 262144; // 256KB — adjust once we know actual signature region size

    logic [7:0] mem [0:MEM_BYTES-1];
    wire [31:0] local_addr = (addr - BASE) & ~32'h3;
    wire        in_range   = (addr >= BASE) && (local_addr < MEM_BYTES);

    // --- Synchronous Write Logic ---
    // Occurs only if the chip is selected (cs_n=0) AND write is enabled (we_n=0)
    always_ff @(posedge clk) begin
        if (!cs_n && !we_n && in_range) begin
            if (byte_enable[0]) mem[local_addr + 0] <= write_data[7:0];
            if (byte_enable[1]) mem[local_addr + 1] <= write_data[15:8];
            if (byte_enable[2]) mem[local_addr + 2] <= write_data[23:16];
            if (byte_enable[3]) mem[local_addr + 3] <= write_data[31:24];
        end
    end

    // --- Combinational Read Logic ---
    // Industry standard: Only drive the bus if chip is selected and we are NOT writing
    always_comb begin
        if (!cs_n && we_n && in_range)
            read_data = {mem[local_addr+3], mem[local_addr+2], mem[local_addr+1], mem[local_addr]};
        else if (!cs_n && we_n)
            read_data = 32'h0;
        else
            read_data = 32'h0;
    end
endmodule
