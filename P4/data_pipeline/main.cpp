#include <iostream>
#include <vector>
#include <cstdint>
#include <iomanip>
#include <functional>
#include <algorithm>
#include "buffer.hpp"
#include "processor.hpp"

int main()
{
    std::vector<uint8_t> raw_data = { 0x99, 0x20, 0x30, 0x40, 0x50 };
    Buffer my_buffer(std::move(raw_data));
    Processor pipeline;

    pipeline.add_stage([](Buffer& buf) {
        std::transform(buf.begin(), buf.end(), buf.begin(), [](uint8_t byte) {
            return byte ^ 0xFF;
        });
    });

    pipeline.add_stage([](Buffer& buf) {
        std::for_each(buf.begin(), buf.end(), [](uint8_t& byte) {
            byte += 1;
        });
    });

    Buffer result_buffer = pipeline.run(std::move(my_buffer));
    result_buffer.print();
    return 0;
}