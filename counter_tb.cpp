#include "Vcounter.h"

#include <iostream>
#include <cassert>

void tick(Vcounter& dut)
{
    dut.clk = 0;
    dut.eval();

    dut.clk = 1;
    dut.eval();
}

void reset(Vcounter& dut)
{
    // Initial values
    dut.clk = 0;
    dut.reset = 1;
    dut.enable = 0;
    dut.eval();
}

void enable(Vcounter& dut)
{
    // Initial values
    dut.clk = 0;
    dut.reset = 0;
    dut.enable = 1;
    dut.eval();
}

void testReset(Vcounter& dut)
{
    reset(dut);
    tick(dut);

    assert(dut.count == 0);

    enable(dut);
    tick(dut);
    tick(dut);

    reset(dut);
    tick(dut);

    assert(dut.count == 0);

    std::cout << "Reset test passed\n";
}

void testCount(Vcounter& dut)
{
    reset(dut);
    tick(dut);
    enable(dut);

    for(int i = 0; i < 8; i++)
    {
        assert(dut.count == i);
        tick(dut);
    };

    std::cout << "Passed count test\n";
}

void testOverflow(Vcounter& dut)
{
    reset(dut);
    tick(dut);
    enable(dut);

    for(int i = 0; i < 50; i++)
    {
        assert(dut.count == i%8);
        tick(dut);
    };

    std::cout << "Passed overflow test\n";

}

void testDisabled(Vcounter& dut)
{
    reset(dut);
    tick(dut);

    for(int i = 0; i < 50; i++)
    {
        assert(dut.count == 0);
        tick(dut);
    };

    std::cout << "Passed disabled test\n";
}

int main()
{
    Vcounter dut;

    reset(dut);

    testReset(dut);
    testCount(dut);
    testOverflow(dut);
    testDisabled(dut);

    return 0;
}

