
#include "lib.hpp"

int main()
{
    Inventory Invent;

    try
    {
        Invent.create_car("123abc", 3, Type::sedan, DieselMotor::TDI);
        Invent.create_car("333gdf", 3, Type::berlina, GasMotor::B58);
        Invent.create_car("222222", 3, Type::pickup, DieselMotor::OM617);
        Invent.create_car("123", 3, Type::sedan, GasMotor::EA888);
    }
    catch (std::invalid_argument& error)
    {
        std::cout << "Error trying to create car: " << error.what() << "\n\n" << std::endl;
    }
    Invent.show_cars();
}