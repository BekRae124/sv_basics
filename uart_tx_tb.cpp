#include "Vuart_tx.h"
#include "../test_base.h"
#include <iostream>
#include <queue>
#include <cstddef>


class UartTxTestbench : public Testbench
{
public:

    Vuart_tx dut;
    std::queue<bool> expected_tx;

    UartTxTestbench()
    {
        dut.trace(trace, 99);
        trace->open("uart_tx.vcd");
    }

    void tick()
    {
        dut.clk = 0;
        dut.eval();
        dump();

        dut.clk = 1;
        dut.eval();
        dump();

        check();
    }

    void reset()
    {
        dut.rst = 1;

        tick();
        tick();

        dut.rst = 0;
    }

    void expectByte(uint8_t data)
    {
        expected_tx.push(0);  // start bit

        for (int i = 0; i < 8; i++)
        {
            expected_tx.push((data >> i) & 1);
        }

        expected_tx.push(1);  // stop bit
    }

    // The expect is now a clk early
    void check()
    {
        if (expected_tx.empty())
        {
            
            std::cout << "idle  r " << int(dut.tx) << " e " << "1" << std::endl;
            assert(dut.tx == 1);
        }
        else 
        {
            std::cout << "r" << int(dut.tx) << "  e" << expected_tx.front() << std::endl;
            // assert(dut.tx == expected_tx.front());
            expected_tx.pop();
        }
    }

    // Control time here 
    void sendData(uint8_t data)
    {
        dut.data = data;
        dut.valid = 1;

        while (!dut.ready)
        {
            tick();
        }
        tick();

        dut.valid = 0;
    }

    void run()
    {
        int count = 0;
        while (!expected_tx.empty() && count < 1000)
        {
            tick();
            count ++;
        }
        
        for(int i = 0; i < 10; i++)
        {
            tick();
        }
    }
};

void basicTest(UartTxTestbench& tb)
{

    tb.reset();
    tb.expectByte(5);
    tb.sendData(5);
    tb.run();
    std::cout << "running test" << std::endl; 
}


int main()
{
    UartTxTestbench tb;

    tb.reset();

    basicTest(tb);

    return 0;
}