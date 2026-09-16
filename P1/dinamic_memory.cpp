
#include <iostream>

float *save_space(int size)
{
    float *array;

    try
    {
        array = new float (size);
        return array;
    }
    catch (std::badalloc&)
    {
        return (nullptr);
    }
        
}

int main()
{
    float *array = save_space(10);
    if (array != nullptr)
        std::cout << "Array creado :)\n";
    delete [] array;
}