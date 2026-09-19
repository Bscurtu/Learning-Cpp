
#include <iostream>
#include <vector>

template <typename T>
T maximum(T a, T b) {
    if (a > b)
        return a;
    return b;
}

template <typename S>
S searching(const std::vector<S> &list, size_t id)
{
    for (const S& actual : list)
    {
        if (actual.id == id)
            return actual;
    }
    throw std::out_of_range("Elemento con el ID especificado no encontrado.");
};

template <typename O>
class Stack
{
    public:
    std::vector<O> list;

    Stack(){};

    void push(const O& data)
    {
        list.push_back(data);
    }

    void pop()
    {
        if (list.empty()) {
            throw std::out_of_range("There are no objects in the list.");
        }
        list.pop_back();
    }

    O operator[](int index)
    {
        return list.at(index);
    }
};

int main() {
    Stack<int> myStack;
    try
    {
        for (int i = 0; i < 30; i++)
        {
            myStack.push(i);
        }

        for (int i = 0; i < 40; i++)
        {
            std::cout << "Index " << i << "\t Value: " << myStack[i] << std::endl;
        }
    }
    catch (const std::out_of_range& e) {
        std::cout << "\n Error: " << e.what() << std::endl;
    }

    return 0;
}