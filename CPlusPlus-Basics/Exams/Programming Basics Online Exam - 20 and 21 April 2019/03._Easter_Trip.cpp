#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    std::string destination, dates;
    int night_numbers, price = 0;

    std::cin >> destination >> dates >> night_numbers;

    if (destination == "France")
    {
        if (dates == "21-23")
        {
            price = 30;
        }
        else if (dates == "24-27")
        {
            price = 35;
        }
        else if (dates == "28-31")
        {
            price = 40;
        }
    }
    else if (destination == "Italy")
    {
        if (dates == "21-23")
        {
            price = 28;
        }
        else if (dates == "24-27")
        {
            price = 32;
        }
        else if (dates == "28-31")
        {
            price = 39;
        }
    }
    else if (destination == "Germany")
    {
        if (dates == "21-23")
        {
            price = 32;
        }
        else if (dates == "24-27")
        {
            price = 37;
        }
        else if (dates == "28-31")
        {
            price = 43;
        }
    }

    double total_price = price * night_numbers;

    std::cout << "Easter trip to " << destination << " : " << std::fixed << std::setprecision(2) << total_price << " leva." << std::endl;

    return 0;
}
