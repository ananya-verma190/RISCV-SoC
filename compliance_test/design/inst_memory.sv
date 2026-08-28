module inst_memory (
    input  logic        clk,
    input  logic        reset,
    input  logic        cs_n,       // Active Low Chip Select
    input  logic        we_n,       // Active Low Write Enable
    input  logic [31:0] address,
    input  logic [31:0] write_inst,
    output logic [31:0] instruction
);

    localparam BASE      = 32'h8000_0000;
    localparam MEM_BYTES = 262144; // must match data_memory.sv

    logic [7:0] mem [0:MEM_BYTES-1];
    wire [31:0] local_addr = address - BASE;
    wire        in_range   = (address >= BASE) && (local_addr < MEM_BYTES) && (address[1:0] == 2'b00);


    // Synchronous Write Logic (Program Loading)
    // Only happens if Chip is Selected AND Write is Enabled (cs_n=0, we_n=0)
    always_ff @(posedge clk) begin
        if (!cs_n && !we_n && in_range) begin
            mem[local_addr + 0] <= write_inst[7:0];
            mem[local_addr + 1] <= write_inst[15:8];
            mem[local_addr + 2] <= write_inst[23:16];
            mem[local_addr + 3] <= write_inst[31:24];
        end
    end

//    always_comb begin
//    if (!cs_n && we_n && address <= 1020 && address[1:0] == 2'b00)
//        instruction = {mem[address+3], mem[address+2], mem[address+1], mem[address+0]};
//    else
//        instruction = 32'h00000013;
//end
    // Combinational Read Logic (Instruction Fetch)
    // Only happens if Chip is Selected AND Write is NOT Enabled (cs_n=0, we_n=1)
    always_comb begin
        if (reset)
            instruction = 32'h00000013;
        else if (!cs_n && we_n && in_range)
            instruction = { mem[local_addr+3], mem[local_addr+2], mem[local_addr+1], mem[local_addr+0] };
        else
            instruction = 32'h00000013;
    end

endmodule
