#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    int budget, fishers;
    double rent = 0, discount = 1, additional_discount = 1;

    std::string season;
    std::cin >> budget >> season >> fishers;

    if (season == "Spring")
    {
        rent = 3000;
    }
    else if (season == "Summer" || season == "Autumn")
    {
        rent = 4200;
    }
    else if (season == "Winter")
    {
        rent = 2600;
    }

    if (fishers <= 6)
    {
        discount = 0.90;
    }
    else if (fishers <= 11)
    {
        discount = 0.85;
    }
    else if (fishers >= 12)
    {
        discount = 0.75;
    }

    double total_rent = rent * discount;

    if (fishers % 2 == 0 && season != "Autumn")
    {
        additional_discount = 0.95;
    }

    total_rent = budget - (total_rent * additional_discount);

    if (total_rent >= 0)
    {
        std::cout << "Yes! You have " << std::fixed << std::setprecision(2) << total_rent << " leva left." << std::endl;
    }
    else
    {
        std::cout << "Not enough money! You need " << std::fixed << std::setprecision(2) << std::abs(total_rent) << " leva." << std::endl;
    }

    return 0;
}
