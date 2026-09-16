
#include <iostream>

enum Type {library, supermarket, other};

class Store
{
    private:
        std::string adress;
        std::string name;
        int id;
        Type type;

    public:
        Store(std::string v_address, std::string v_name, int v_id, Type v_type)
        :
        adress(v_address), name(v_name), id(v_id), type(v_type) {};

        virtual void get_name() const
        {
            std::cout << name << "\n";
        }
};

/* Basic class, can be added books and bookshelves to it */
class Library : public Store
{
    private:
        
    public:
        Library(std::string v_address, std::string v_name, int v_id)
        : Store(v_address, v_name, v_id, Type::library)
        {
            
        }
};

/* Basic class, can be added products */
class Supermarket : public Store
{
    private:

    public:
        Supermarket(std::string v_address, std::string v_name, int v_id)
        : Store(v_address, v_name, v_id, Type::supermarket)
        {

        }
};

int main()
{
    int id;

    id = 0;
    Library AnaLibrary("Big street", "ANAlising books", id++);
    AnaLibrary.get_name();

    Supermarket PacoSuper("North street", "Hiper Paco", id++);
    PacoSuper.get_name();
}