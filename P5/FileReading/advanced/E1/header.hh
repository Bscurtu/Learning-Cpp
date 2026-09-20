
class Header
{
    private:
        uint32_t id;
        uint16_t version;
        uint64_t timestamp;
    
    public:
        Header(uint32_t sid, uint16_t sversion, uint64_t stimestamp)
        :
        id(sid), version(sversion), timestamp(stimestamp){};

        // This constructor is only valid with primitive or simple data types
        Header(std::string file)
        {
            std::ifstream file_int(file, std::ios::binary);
            if (file_int.is_open())
            {
                file_int.read(reinterpret_cast<char*>(this), sizeof(*this));
            };
        }

        uint32_t get_id() const { return id; }
        uint16_t get_version() const { return version; }
        uint64_t get_timestamp() const { return timestamp; };
        void save_in(std::string file)
        {
            std::ofstream file_out(file, std::ios::binary);
            if (file_out.is_open())
            {
                file_out.write(reinterpret_cast<char*>(this), sizeof(*this));
            };
        };
        void get_details()
        {
            std::cout << "Id: " << get_id() << " version: " << get_version() << " timestamp " << get_timestamp() << std::endl;
        }
};