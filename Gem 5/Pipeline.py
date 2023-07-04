import sys
import m5
from m5.objects import *

# Create the system object
system = System()

# Set the clock frequency of the system
system.clk_domain = SrcClockDomain()
system.clk_domain.clock = '1GHz'
system.clk_domain.voltage_domain = VoltageDomain()

# Set the memory size and type
system.mem_mode = 'timing'
system.mem_ranges = [AddrRange('512MB')]

# Create the Root object and connect it to the system
root = Root(full_system=False, system=system)

# Create a CPU object and connect it to the system
cpu = AtomicSimpleCPU()
system.cpu = cpu

# Create a memory object and connect it to the system
system.mem_ctrl = DDR3_1600_8x8()
# system.mem_ctrl = SimpleMemory(latency="100ns", bandwidth="16000MB/s", range=AddrRange('512MB'))

# Load the executable file into the memory
process = Process()
# print(hex(id(os.path.abspath("Pipeline.py"))))
process.cmd = ['/home/bahareh/Desktop/CA/gem5/configs/tutorial/part1/Vtop']
system.cpu.workload = process
system.cpu.createThreads()

# Specify the simulation parameters
m5.instantiate()
print("Beginning simulation!")
# Run the simulation
exit_event = m5.simulate()

# Print the statistics
print('Exiting @ tick', m5.curTick(), 'because', exit_event.getCause())




#'/home/bahareh/Desktop/RISC/Final/obj_dir'
