
#include "lib.hh"

// We create a header, then save it in a file, and lates copy that info from the file to other header
int main()
{
    Header head(1, 2, 2);
    head.save_in("output.bin");
    Header create_from_file("output.bin");
    create_from_file.get_details();
}