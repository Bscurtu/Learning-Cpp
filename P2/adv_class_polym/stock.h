
class Stock
{
    public:
        std::vector<Book*> stockList;

        Stock() = default;

        void    get_list()
        {
            for (Book* actual : stockList)
            {
                actual -> get_details();
            }
        }

        Book* operator[](size_t index) const {
            return stockList[index];
        }
};
