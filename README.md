# V-RISC Pipeline Processor Final Project

## Overview
This project involves the design and implementation of a V-RISC pipeline processor in a 5-stage pipeline using Verilog and the GEM5 simulation environment. The main objective is to compare the execution time of instruction sequences in both SingleCycle and Pipelined implementations of the processor.

**Verilog Codes Source:** [https://github.com/hammadmaqdoom/RISC-V-Pipelined-Processor](https://github.com/hammadmaqdoom/RISC-V-Pipelined-Processor)

## Project Objectives
- **Primary Goal:** Compare the execution time of a program running on both SingleCycle and Pipelined processor implementations.
- **Implementation:** Design and simulate the processor using Verilog and GEM5, focusing on the performance impact of a 5-stage pipeline.

## Implementation Details

### SingleCycle Processor Design
In the SingleCycle processor implementation, each instruction is executed sequentially. After fetching, decoding, and executing an instruction, the next instruction starts only after the previous one completes. The Verilog code for this processor includes several modules:

- **ALU Module (alu_64):** Implements arithmetic and logic operations.
- **ALU Control Module (ALU_Control):** Determines the operation type based on input signals.
- **Control Unit Module (Control_Unit):** Generates control signals based on instruction opcode.
- **Data Generator Module (data_generator):** Produces immediate data values based on instruction type.
- **Adder Module (Adder):** Performs addition operations.
- **Data Memory Module (Data_Memory):** Handles memory read and write operations.
- **Instruction Memory Module (Instruction_Memory):** Stores and fetches instructions.
- **Instruction Parser Module (Instruction_Parser):** Extracts instruction fields like opcode and function code.
- **Multiplexer Module (mux2x1):** Selects between two input values based on control signal.
- **Program Counter Module (Program_Counter):** Maintains the address of the current instruction.
- **Register File Module (registerFile):** Manages the processor's registers.

### Pipelined Processor Design
The Pipelined processor improves efficiency by overlapping instruction execution across five stages: Fetch, Decode, Execute, Memory, and WriteBack. Key modules, in addition to those in the SingleCycle implementation, include:

- **EX/MEM Register Module (EX_MEM):** Holds outputs from the Execute stage for the Memory stage.
- **Forwarding Unit Module (Forwarding_Unit):** Manages data hazards by forwarding data between pipeline stages.
- **ID/EX Register Module (ID_EX):** Holds outputs from the Decode stage for the Execute stage.
- **IF/ID Register Module (IF_ID):** Holds outputs from the Fetch stage for the Decode stage.
- **MEM/WB Register Module (MEM_WB):** Holds outputs from the Memory stage for the WriteBack stage.
- **Triple Multiplexer Module (MUX_Triple):** Selects between three input values based on control signals.

### Simulation and Testing
The Verilog code is compiled into C++ using Verilator, allowing simulation within the GEM5 environment. The simulation process includes:

1. **Installing Verilator:**
   ```sh
   sudo apt-get install verilator
   ```

2. **Verilog Code Compilation:**
   Use Verilator to convert the Verilog code into an executable C++ file.
   ```sh
   verilator -Wall --cc RISC_V_processor.v --exe RISC_V_processorWrapper.cpp
   verilator -Wall --cc RISC_V_Processor_Pipelined.v --exe RISC_V_Processor_Pipelined_Wrapper.cpp
   ```

3. **Creating CppWrapper:** A C++ interface is created to simulate Verilog behavior in the GEM5 environment.

4. **Building Executables:**
   ```sh
   make -j -f VRISC_V_processor.mk VRISC_V_processor
   make -j -f VRISC_V_Processor_Pipelined.mk VRISC_V_Processor_Pipelined
   ```

5. **Running Simulations:** The processors are simulated using the GEM5 tool, with configurations set in a Python script based on the GEM5 documentation.

## Directory Structure

- **SingleCycle Folder:**
  - Contains the Verilog files for the SingleCycle processor.
  - Key files: `Instruction_Memory.v`, `Data_Memory.v`, `Control_Unit.v`, `ALU_Control.v`, etc.
  
- **Pipelined Folder (Stage5):**
  - Contains the Verilog files for the Pipelined processor.
  - Key files: `EX_MEM.v`, `ID_EX.v`, `IF_ID.v`, `MEM_WB.v`, etc.
  
- **CppWrapper Files:**
  - `RISC_V_processorWrapper.cpp`: Wrapper for SingleCycle processor.
  - `RISC_V_Processor_Pipelined_Wrapper.cpp`: Wrapper for Pipelined processor.

## Running the Project

1. **Compile Verilog to C++:**
   ```sh
   verilator -Wall --cc RISC_V_processor.v --exe RISC_V_processorWrapper.cpp
   verilator -Wall --cc RISC_V_Processor_Pipelined.v --exe RISC_V_Processor_Pipelined_Wrapper.cpp
   ```

2. **Build Executables:**
   ```sh
   make -j -f VRISC_V_processor.mk VRISC_V_processor
   make -j -f VRISC_V_Processor_Pipelined.mk VRISC_V_Processor_Pipelined
   ```

3. **Simulate in GEM5:**
   - Use the appropriate script files for SingleCycle and Pipelined processors.
  
## Conclusion
The project successfully demonstrates the design and performance comparison of V-RISC processors implemented as SingleCycle and Pipelined versions. The 5-stage pipelined processor shows improved efficiency by overlapping instruction execution stages, reducing overall execution time.
