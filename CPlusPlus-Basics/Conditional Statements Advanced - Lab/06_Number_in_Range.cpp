#include <iostream>

int main()
{
    int number;
    std::cin >> number;

    std::string output;

    if (number != 0 && -100 <= number && number <= 100)
    {
        output = "Yes";
    }
    else
    {
        output = "No";
    }

    std::cout << output << std::endl;

    return 0;
}
