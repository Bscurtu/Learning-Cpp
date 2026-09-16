
#include "book.h"
#include "stock.h"

int main()
{
    /* Setting a simple id */
    int id = 0;
    size_t index_searching;
    Stock list;

    /* Adding to the vector 2 different books */
    list.stockList.push_back(new Fantasy("How to learn C++", 2, id++, "Me", FantasyTypes::low));
    list.stockList.push_back(new Mystery("Everyday is a new opportunity to learn", 1, id++, "Motivation"));
    list.get_list();

    /* Using operators to access a specific index */
    std::cout << "Searching..." << std::endl;
    
    index_searching = 3;
    if (index_searching >= id)
        std::cout << "Not in inventory" << std::endl;
    else
    {
        Book *searching = list[index_searching];
        searching->get_details();
    }

    return 0;
}