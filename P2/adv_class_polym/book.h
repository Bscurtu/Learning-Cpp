
#include <iostream>
#include <vector>
#include <string>

class Book
{
    private:
        int id;
        std::string name;
        int quantity_now;
        std::string author;

    public:
        Book(std::string b_name, int b_quantity_now, int b_id, std::string b_author)
        {
            name = b_name;
            quantity_now = b_quantity_now;
            id = b_id;
            author = b_author;
        }

        virtual void get_name() const{
            std::cout << "Title: "<< name << std::endl;
        }

        virtual void get_author() const{
            std::cout << "By: " << author << std::endl;
        }

        virtual void get_stock() const{
            std::cout << "Available: " << quantity_now << std::endl;
        }

        virtual void get_details() const{
            get_name();
            get_author();
            get_stock();
            std::cout << std::endl;
        }

        virtual void add(int many) {
            if (many <= 0)
            {
                std::cout << "Error, quantity must be greater than 0" << std::endl;
                return ;
            }
            quantity_now += many;
        }

        virtual bool available() const{
            if (quantity_now > 0)
                return true;
            return false;
        }

        virtual ~Book() = default;
};

enum FantasyTypes {high, low, urban, other};

class Fantasy : public Book
{
    public:
        FantasyTypes type;

        Fantasy(std::string b_name, int b_quantity_now, int b_id, std::string b_author, FantasyTypes b_type)
        : Book(b_name, b_quantity_now, b_id, b_author) {
            type = b_type;
        };

        void get_fantasy_type() const{
            switch(this -> type)
            {
                case 0:
                    std::cout << "Type: High" << std::endl;
                    break ;
                case 1:
                    std::cout << "Type: Low" << std::endl;
                    break ;
                case 2:
                    std::cout << "Type: Urban" << std::endl;
                    break ;
                default:
                    std::cout << "Type: Other" << std::endl;
                    break ;
            }
        }

        void get_details() const override{
            get_name();
            get_author();
            get_fantasy_type();
            get_stock();
            std::cout << std::endl;
        }
};

class Mystery : public Book
{
    private:

    public:
        Mystery(std::string b_name, int b_quantity_now, int b_id, std::string b_author) 
        : Book(b_name, b_quantity_now, b_id, b_author) {};
};

class Romance : public Book
{
    private:

    public:
        Romance(std::string b_name, int b_quantity_now, int b_id, std::string b_author) 
        : Book(b_name, b_quantity_now, b_id, b_author) {};
};