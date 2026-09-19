#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int x = 1;
    int y = 1;
    auto simple = [&](int jk) {y++; std::cout << "Add x and y, and substract the number passed to lambda: " << x + y - jk << std::endl; };
    simple(0);


    std::vector<int> numbers = {1, 4, 7, 10, 15, 22, 33, 40};
    auto print_filtered = [&numbers](auto predicate)
    {
        std::for_each(numbers.begin(), numbers.end(), [predicate](int actual) {
            if (predicate(actual))
            {
                std::cout << actual << "\n";
            }
        });
    };

    int i = 26;

    std::cout << "Greater than " << i << ": \n";
    print_filtered([i](int val) { return val > i; });

    std::cout << "Less than or equal to: " << i << ": \n";
    print_filtered([i](int val) { return val <= i; });


    /* ---------- Lambda for searching specific text in LOGS -------------*/
    // search_error can be reused to search any text, also any lenght or other parameter
    
    std::vector<std::string> Logs;
    for (int j = 0; j < 100; j++)
    {
        Logs.push_back("200, OK");
        Logs.push_back("Error in network");
        Logs.push_back("500, error in line 42, payment.php, variable 'Paid' not declared");
    }

    auto search_error = [&Logs](auto predicate)
    {
        std::for_each(Logs.begin(), Logs.end(), [predicate](const std::string& actual)
        {
            if (predicate(actual))
            {
                std::cout << "Message: " << actual << std::endl;
            }
        });
    };

    // Search for Error keyword
    std::cout << "\n\n--- LOGS with error: --- \n";
    std::string searching = "Error";
    search_error([searching](const std::string& actual) {
        return actual.find(searching) != std::string::npos;
    });

    // Search for long Logs
    std::cout << "\n\n --- LOGS with more than 50 characters --- \n";
    search_error([](const std::string& actual) {
        return actual.length() > 50;
    });
};