
template <typename T>
class processor
{
    private:
        std::vector<std::shared_ptr<T>> data;

    public:
        processor(){};

        void copy_data(std::vector<std::shared_ptr<T>> copy)
        {
            data = copy;
        }

        void move_data(std::vector<std::shared_ptr<T>> &&move)
        {
            data = std::move(move);
        }
};