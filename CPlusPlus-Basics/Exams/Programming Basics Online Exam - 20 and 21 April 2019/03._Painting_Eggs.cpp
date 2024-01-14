#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    std::string eggs_size, eggs_color;
    int number_lots, price = 0;
    const double expenses = 0.65;

    std::cin >> eggs_size >> eggs_color >> number_lots;

    if (eggs_size == "Large")
    {
        if (eggs_color == "Red")
        {
            price = 16;
        }
        else if (eggs_color == "Green")
        {
            price = 12;
        }
        else if (eggs_color == "Yellow")
        {
            price = 9;
        }
    }
    else if (eggs_size == "Medium")
    {
        if (eggs_color == "Red")
        {
            price = 13;
        }
        else if (eggs_color == "Green")
        {
            price = 9;
        }
        else if (eggs_color == "Yellow")
        {
            price = 7;
        }
    }
    else if (eggs_size == "Small")
    {
        if (eggs_color == "Red")
        {
            price = 9;
        }
        else if (eggs_color == "Green")
        {
            price = 8;
        }
        else if (eggs_color == "Yellow")
        {
            price = 5;
        }
    }

    double total = price * number_lots * expenses;
    std::cout << std::fixed << std::setprecision(2) << total << " leva." << std::endl;

    return 0;
}
