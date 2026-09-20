#pragma once
#include <iostream>
#include <fstream>
#include <cstdint>
#include <string>
#include <utility>

class Packet
{
public:

    struct Header {
        uint8_t id;
        uint8_t version;
        uint64_t size;
    };
    Header header;
    std::string info;

    Packet(uint8_t sid, uint8_t sversion, std::string sinfo)
        : header{sid, sversion, static_cast<uint64_t>(sinfo.size())}, info(std::move(sinfo)) {}

    void save_to_file(const std::string& filename) const
    {
        std::ofstream file(filename, std::ios::binary);
        if (file.is_open())
        {
            file.write(reinterpret_cast<const char*>(&header), sizeof(Header));
            file.write(info.data(), header.size);
        }
    }

    Packet(const std::string& filename)
    {
        std::ifstream file(filename, std::ios::binary);
        if (file.is_open())
        {
            file.read(reinterpret_cast<char*>(&header), sizeof(Header));
            info.resize(header.size);
            file.read(info.data(), header.size);
        }
    }
};