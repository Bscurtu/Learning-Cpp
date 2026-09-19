#include <cstddef>
#include <cstdint>
#include <algorithm>

class NetworkPacket
{
    private:
        uint8_t* payload;
        size_t size;
        uint32_t packet_id;

    public:
        NetworkPacket(uint8_t* spayload, size_t ssize, uint32_t spacket_id)
        : payload(spayload), size(ssize), packet_id(spacket_id) {}

        ~NetworkPacket()
        {
            delete[] payload;
        }

        // 2. Constructor de Copia
        NetworkPacket(const NetworkPacket& copying)
            : size(copying.size), packet_id(copying.packet_id)
        {
            payload = new uint8_t[size];
            std::copy(copying.payload, copying.payload + size, payload);
        }

        NetworkPacket& operator=(const NetworkPacket& equal) {
            if (this != &equal) {
                delete[] payload;
                
                size = equal.size;
                packet_id = equal.packet_id;

                payload = new uint8_t[size];
                std::copy(equal.payload, equal.payload + size, payload);
            }
            return *this;
        }

        NetworkPacket(NetworkPacket&& moving) noexcept
            : payload(moving.payload), size(moving.size), packet_id(moving.packet_id)
        {
            moving.payload = nullptr;
            moving.size = 0;
            moving.packet_id = 0;
        }

        NetworkPacket& operator=(NetworkPacket&& moving) noexcept {
            if (this != &moving) {
                delete[] payload;

                payload = moving.payload;
                size = moving.size;
                packet_id = moving.packet_id;

                moving.payload = nullptr;
                moving.size = 0;
                moving.packet_id = 0;
            }
            return *this;
        }
};