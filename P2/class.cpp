
#include <iostream>
#include <string>
#include <vector>

class Employe
{
    private:
        std::string name;
        float salary;
    
    public:
        Employe(std::string namee, float income){
            name = namee;
            salary = income;
        }

        std::string get_name()
        {
            return (name);
        }

        float get_salary()
        {
            return (salary);
        }

        void change_name(std::string new_name)
        {
            name = new_name;
        }

        void change_salary(float quantity)
        {
            salary += quantity;
        }
};

class   List_employes
{
    private:
        std::vector<Employe> allEmployes;

    public:
        List_employes()
        {
            std::vector<Employe> allEmployes;
        }

        void add_employe(Employe employee)
        {
            allEmployes.push_back(employee);
            std::cout << employee.get_name() << " added to the list \n";
        }

        void get_workers()
        {
            for (Employe emp : allEmployes) {
                std::cout << emp.get_name() << "\n";
            }
        }
};

int main()
{
    List_employes list;
    Employe ana("ana", 18000);
    Employe maria("Maria", 18000);
    list.add_employe(ana);
    list.add_employe(maria);
    list.get_workers();
}