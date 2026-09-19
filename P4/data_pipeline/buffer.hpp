

// This class uses rule of zero, std::vector has it's own ROF
class Buffer
{
    private:
        std::vector<uint8_t> data;

    public:
        explicit Buffer(std::vector<uint8_t> sdata) : data(std::move(sdata)) {};

        size_t get_size() const { return data.size(); }

        // Get begin and end, with and without const, makes code faster when data is not changed
        auto begin() { return data.begin(); }
        auto end() { return data.end(); }

        auto begin() const { return data.begin(); }
        auto end() const { return data.end(); }

        void print(bool hex_format = true) const
        {
            std::cout << "Buffer Data (" << data.size() << " bytes): [ ";
            for (uint8_t byte : data)
            {
                if (hex_format)
                {
                    std::cout << "0x"
                            << std::hex << std::setw(2) << std::setfill('0')
                            << static_cast<int>(byte) << " ";
                }
                else
                {
                    // Print as integer values (0-255)
                    std::cout << static_cast<int>(byte) << " ";
                }
            }
            std::cout << std::dec << "]\n"; // Reset stream back to decimal
        }

};

