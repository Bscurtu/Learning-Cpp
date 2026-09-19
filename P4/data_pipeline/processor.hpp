
class Processor
{
    private:
    std::vector<std::function<void(Buffer&)>> list;

    public:
    Processor(){};

    void add_stage(std::function<void(Buffer&)> stage)
    {
        list.push_back(stage);
    }

    auto run(Buffer&& input)
    {
        Buffer current = std::move(input);
        for (const auto& actual : list)
        {
            actual(current);
        }
        return current;
    }

    auto operator[](int i){
        return list[i];
    }
};