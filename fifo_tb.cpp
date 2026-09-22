#include "Vfifo.h"
#include "verilated_vcd_c.h"

#include <iostream>
#include <cassert>

class Testbench
{
public:
    Vfifo dut;

    vluint64_t sim_time = 0;
    VerilatedVcdC* trace;

    Testbench()
    {
        Verilated::traceEverOn(true);

        trace = new VerilatedVcdC;
        dut.trace(trace, 99);
        trace->open("fifo.vcd");
    }

    ~Testbench()
    {
        trace->close();
        delete trace;
    }

    void tick()
    {
        dut.clk = 0;
        dut.eval();
        trace->dump(sim_time++);

        dut.clk = 1;
        dut.eval();
        trace->dump(sim_time++);
    }

    void reset()
    {
        dut.reset = 1;
        dut.write_en = 0;
        dut.read_en = 0;
        dut.write_data = 0;

        tick();

        dut.reset = 0;
    }

    void write_fifo(int data)
    {
        dut.write_en = 1;
        dut.write_data = data;
        dut.read_en = 0;

        std::cout << "write " << (int)dut.write_data << std::endl;

        tick();
        dut.write_en = 0;
    }

    int read_fifo()
    {
        dut.read_en = 1;
        dut.write_en = 0;

        tick();

        dut.read_en = 0;

        std::cout << "read " << (int)dut.read_data << std::endl;

        return dut.read_data;
    }
};

void testSimple(Testbench& tb)
{
    tb.reset();

    tb.write_fifo(1);

    assert(tb.read_fifo() == 1);
    std::cout << "Simple test has passed /n";
}

int main()
{
    Testbench tb;

    testSimple(tb);

    return 0;
}