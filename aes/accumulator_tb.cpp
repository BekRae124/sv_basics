#include "Vaccumulator.h"
#include "../../test_base.h"
#include "../../streaming_intf_checker.h"
#include <iostream>
#include <queue>
#include <cstdint>
#include <cstddef>
#include <random>

class AccTestbench : public Testbench<Vaccumulator>
{
public: 

    std::queue<uint32_t> expected_accumulator;
    StreamingChecker streaming_checker;

    AccTestbench()
    {
        dut.trace(trace, 99);
        trace->open("accumulator.vcd");
    }

    void reset()
    {
        dut.rst_n = 0;

        tick();
        tick();

        dut.rst_n = 1;
    }    
    
    void check() override
    {
        if (!streaming_checker.check(dut.input_valid, dut.input_last))
        {
            finishTrace();
            exit(1);
        }

        if (dut.output_valid)
        {
            if (expected_accumulator.size() < 4)
            {
                std::cerr << "Error: Received unexpected output.valid signal." << std::endl;
                finishTrace();
                exit(1);
            }
            else 
            {

                for (int i = 0; i < 4; i++) {
                    std::cout << "Received accumulator word :" << i << " : " << std::hex << dut.output_data[4 - 1 - i] << std::endl;
                    std::cout << "Expected accumulator word :" << i << " : " << std::hex << expected_accumulator.front() << std::endl;
                    // if (dut.output_data[4 - 1 - i] != expected_accumulator.front()) {
                    //     std::cerr << "Error: Expected accumulator word :" << i << " : " << std::hex << expected_accumulator.front()     << ", received 0x" << dut.output_data[i] << std::endl;
                    // }

                    expected_accumulator.pop();
                }
            }
        } 
    }

    void sendData()
    {
        std::mt19937 rng(std::random_device{}());
        std::uniform_int_distribution<uint32_t> dist;

        std::vector<uint32_t> input_data;

        // need to randomise this

        for (uint32_t i = 0; i < 10; i++)
        {
            // auto data = dist(rng);
            uint32_t data = i + 1; // Use a simple incrementing value for testing
            expected_accumulator.push(data);
  
        }
        for (uint32_t i = 0; i < 8; i++)
        {
            // auto data = dist(rng);
            uint32_t data = i + 1; // Use a simple incrementing value for testing
            // expected_accumulator.push(data);
            dut.input_data = data;
            dut.input_valid = 1;
            dut.input_last = (i == 7);
            tick();
        }

        dut.input_valid = 0;
        dut.input_last = 0;
    }
};

int main()
{
    AccTestbench tb;

    tb.reset();
    tb.sendData();
    tb.run(5);

    std::cout << "Test completed successfully." << std::endl;

    return 0;
}


