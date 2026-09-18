
class Car;

class   Inventory
{
    private:
        std::vector<std::unique_ptr<PetrolCar>> PetrolList;
        std::vector<std::unique_ptr<DieselCar>> DieselList;

    public:
        Inventory(){};

        void check_data(std::string &rplate, int rseats, Type rtype) const
        {
            if (rplate.length() != 6 || rseats > 10 || rtype > 3)
                throw std::invalid_argument("Invalid setting for a car.");
        }

        void create_car(std::string rplate, int rseats, Type rtype, DieselMotor dmotor)
        {
            check_data(rplate, rseats, rtype);
            DieselList.push_back(std::make_unique<DieselCar>(rplate, rseats, rtype, dmotor));
        }

        void create_car(std::string rplate, int rseats, Type rtype, GasMotor pmotor)
        {
            check_data(rplate, rseats, rtype);
            PetrolList.push_back(std::make_unique<PetrolCar>(rplate, rseats, rtype, pmotor));
        }

        void show_cars()
        {
            for (const auto& car : DieselList)
            {
                car->get_details();
            }
            for (const auto& car : PetrolList)
            {
                car->get_details();
            }
        }
};