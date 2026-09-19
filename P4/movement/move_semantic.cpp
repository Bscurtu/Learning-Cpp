
#include "lib.hpp"

int main()
{
    sensor S;
    processor<float> P;

    for (int i = 0; i < 10000000; i++)
    {
        S.add_data(std::rand() % 1000 * 0.365);
    }

    P.copy_data(S.get_data());
    std::cout << "Data copied" << std::endl;
    P.move_data(S.get_data());
    std::cout << "Data moved" << std::endl;
}