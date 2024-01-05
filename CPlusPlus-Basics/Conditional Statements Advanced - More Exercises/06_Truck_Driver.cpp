#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    std::string season;
    int kilometers;

    std::cin >> season >> kilometers;

    double price_per_kilometer = 0;

    if (kilometers <= 5000)
    {
        if (season == "Spring" || season == "Autumn")
        {
            price_per_kilometer = 0.75;
        }
        else if (season == "Summer")
        {
            price_per_kilometer = 0.90;
        }
        else if (season == "Winter")
        {
            price_per_kilometer = 1.05;
        }
    }
    else if (kilometers <= 10000)
    {
        if (season == "Spring" || season == "Autumn")
        {
            price_per_kilometer = 0.95;
        }
        else if (season == "Summer")
        {
            price_per_kilometer = 1.10;
        }
        else if (season == "Winter")
        {
            price_per_kilometer = 1.25;
        }
    }
    else if (kilometers <= 20000)
    {
        price_per_kilometer = 1.45;
    }

    double total_sum = ((price_per_kilometer * kilometers) * 4) * 0.90;
    std::cout << std::fixed << std::setprecision(2) << total_sum << std::endl;

    return 0;
}
