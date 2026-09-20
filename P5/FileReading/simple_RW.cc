#include <iostream>
#include <fstream>
#include <vector>
#include <cstdint>

int main()
{
    // Writing data
    std::vector<uint8_t> data = { 0x48, 0x45, 0x4C, 0x4C, 0x4F };
    std::ofstream file_out("output.txt", std::ios::binary);
    if (file_out.is_open()) {
        file_out.write(reinterpret_cast<const char*>(data.data()), data.size());
        file_out.close();
    }


    // Reading data
    std::vector<uint8_t> read_data(5);
    std::ifstream file_in("output.txt", std::ios::binary);
    if (file_in.is_open()) {
        file_in.read(reinterpret_cast<char*>(read_data.data()), read_data.size());
        file_in.close();
    }
    for (uint8_t byte : read_data) {
        std::cout << static_cast<char>(byte);
    }
    std::cout << "\n";
    return 0;
}