#include <fstream>
#include <iostream>
#include <vector>
#include <cstdint>

// This program is capable of reading any file, no matter the size
int main()
{
    std::ifstream file_in("output.txt", std::ios::binary);
    if (file_in.is_open())
    {
        file_in.seekg(0, std::ios::end);
        
        size_t size = file_in.tellg();
        std::cout << size;
        std::vector<uint8_t> buffer(size);
        
        file_in.seekg(0, std::ios::beg);
        file_in.read(reinterpret_cast<char*>(buffer.data()), size);
        
        for (uint8_t actual : buffer)
        {
            std::cout << static_cast<char>(actual);
        }
    }
}