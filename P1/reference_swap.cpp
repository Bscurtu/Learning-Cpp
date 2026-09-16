
#include <iostream>

void swap_without_ptr(int &a, int &b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 2, b = 4;

    std::cout << "Original \t a: " << a << " b: " << b << "\n";
    swap_without_ptr(a, b);
    std::cout << "Aftere Swap: \t a: " << a << " b: " << b << "\n";
}