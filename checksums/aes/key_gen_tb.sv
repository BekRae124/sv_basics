#include "Vkey_gen.h"
#include "../../../test_base.h"
#include <iostream>
#include <queue>
#include <cstdint>
#include <cstddef>

class KeyGenTestbench : public Testbench
{
public: 

    Vaes dut;
    std::queue<uint32_t> expected_aes;

    KeyGenTestbench()
    {
        dut.trace(trace, 99);
        trace->open("key_gen.vcd");
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
        dut.rst_n = 0;

        dut.key[0] = 0x0C0D0E0F;
        dut.key[1] = 0x08090A0B;
        dut.key[2] = 0x04050607;
        dut.key[3] = 0x00010203;
        tick();
        tick();

        dut.rst_n = 1;
    }    
    
    void run(int n)
    {
        for (int i = 0; i < n; i++)
        {
            tick();
        }
    }

    void check()
    {
        if (dut.ciphertext_valid)
        {
            std::cout << "Ciphertext valid signal received." << dut.ciphertext[0] << dut.ciphertext[1] << dut.ciphertext[2] << dut.ciphertext[3] << " expected 69C4E0D86A7B0430D8CDB78070B4C55A"<< std::endl;
    //         if (expected_aes.empty())
    //         {
    //             std::cerr << "Error: Received unexpected ciphertext_valid signal." << std::endl;
    //             exit(1);
    //         }
    //         else 
    //         {
                // if (dut.ciphertext != 0x69C4E0D86A7B0430D8CDB78070B4C55A)
                // {
                //     std::cerr << "Error: Expected ciphertext = 0x" << std::hex << expected_aes.front() << ", received 0x" << dut.ciphertext << std::endl;
                //     exit(1);
                // }
    //         }
        } 
    }

    // uint32_t encrypt_aes()
    // {
    //     //use hard coded version for now 

    //     return 0x69C4E0D86A7B0430D8CDB78070B4C55A;
    // }

    void sendData()
    {
        // expected_aes.push(encrypt_aes());
      
        dut.plaintext[0] = 0xCCDDEEFF;
        dut.plaintext[1] = 0x8899AABB;
        dut.plaintext[2] = 0x44556677;
        dut.plaintext[3] = 0x00112233;
        // dut.plaintext = 0x00112233445566778899AABBCCDDEEFF;
        dut.plaintext_valid = 1;
        // dut.key = 0x000102030405060708090A0B0C0D0E0F;


        tick();

        dut.plaintext_valid = 0;
    }
};

int main()
{
    AesTestbench tb;

    tb.reset();
    tb.sendData();

    tb.run(20);

    std::cout << "Test completed successfully." << std::endl;

    return 0;
}



