
#include <iostream>

struct Punto
{
    float x;
    float y;
};

int main()
{
    Punto p1;

    std::cout << "Please, add the x point \n";
    std::cin >> p1.x;
    std::cout << "Please, add the y point \n";
    std::cin >> p1.y;
    std::cout << "X point: " << p1.x << " Y point: " << p1.y << "\n";
}