
#include "packet.hh"

int main()
{
    Packet hola(1, 2, "Everyday im learning something new about cpp that was not in my roadmap");
    hola.save_to_file("file.txt");
    Packet create_from_file("file.txt");
    std::cout << "Original: " << hola.info << std::endl << "New: " << create_from_file.info << std::endl;
}