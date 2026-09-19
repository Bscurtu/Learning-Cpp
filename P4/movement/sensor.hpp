
class sensor
{
    private:
        std::vector<std::shared_ptr<float>> logs;

    public:
        sensor(){};

        void add_data(double data)
        {
            logs.push_back(std::make_shared<float>(data));
        }

        std::vector<std::shared_ptr<float>> get_data()
        {
            return logs;
        }
};