

enum Type {berlina, sedan, pickup, other};

class Car
{
    private:
        std::string plate;
        int seats;
        Type carBody;

    public:
        Car(std::string rplate, int rseats, Type rtype) : plate(rplate), seats(rseats), carBody(rtype){};

        virtual int get_seats()
        {
            return seats;
        }

        virtual std::string get_plate()
        {
            return plate;
        }

        virtual std::string get_type()
        {
            switch(carBody)
            {
                case (0):
                    return "Berlina";
                    break;
                case (1):
                    return "Sedan";
                    break;
                case (2):
                    return "Pickup";
                    break;
                case (3):
                    return "other";
                    break;
                default:
                    return "ERROR";
                    break;
            }
        }

        virtual void    get_details()
        {
            std::cout << " Type: " << get_type() << "\n Plate: " << get_plate() << "\n Seats: " << get_seats() << "\n Motor: "<< "unknown" << std::endl;
            std::cout << "----------------" << std::endl;
        }

        virtual ~Car() = default;
};

enum DieselMotor {TDI, OM617, M57, dCi } ;

constexpr std::string_view to_string(DieselMotor motor)
{
    switch (motor)
    {
        case(DieselMotor::TDI): return "1.9TDI";
        case(DieselMotor::OM617): return "OM617";
        case(DieselMotor::M57): return "M57";
        case(DieselMotor::dCi): return "1.5dCi";
        default: return "unknown";
    }
};

class DieselCar : public Car
{
    private:
        DieselMotor motor;

    public:
        DieselCar(std::string rplate, int rseats, Type rtype, DieselMotor rmotor) : Car(rplate, rseats, rtype)
        {
            motor = rmotor;
        };

        void    get_details() override
        {
            std::cout << " Type: " << get_type() << "\n Plate: " << get_plate() << "\n Seats: " << get_seats() << "\nMotor: "<<to_string(motor) << std::endl;
            std::cout << "----------------" << std::endl;
        }
};

enum GasMotor {B58, EA888, XK6, F120 } ;

constexpr std::string_view to_string(GasMotor motor)
{
    switch (motor)
    {
        case(GasMotor::B58): return "B58";
        case(GasMotor::EA888): return "EA888";
        case(GasMotor::XK6): return "XK6";
        case(GasMotor::F120): return "F120";
        default: return "unknown";
    }
};

class PetrolCar : public Car
{
    private:
        GasMotor motor;

    public:
        PetrolCar(std::string rplate, int rseats, Type rtype, GasMotor rmotor) : Car(rplate, rseats, rtype), motor(rmotor){};

        GasMotor get_motor()
        {
            return motor;
        }

        virtual void    get_details() override
        {
            std::cout << " Type: " << get_type() << "\n Plate: " << get_plate() << "\n Seats: " << get_seats() << "\nMotor: "<<to_string(motor) << std::endl;
            std::cout << "----------------" << std::endl;
        }
};

