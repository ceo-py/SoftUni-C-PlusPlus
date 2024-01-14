#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    double budget;
    double fuel_needed;
    std::string day_of_the_week;

    std::cin >> budget >> fuel_needed >> day_of_the_week;

    double fuel_price = fuel_needed * 2.10;
    double total_price = fuel_price + 100;

    if (day_of_the_week == "Saturday")
    {
        total_price *= 0.90;
    }
    else if (day_of_the_week == "Sunday")
    {
        total_price *= 0.80;
    }

    double money_left = std::abs(budget - total_price);

    if (budget >= total_price)
    {
        std::cout << "Safari time! Money left: " << std::fixed << std::setprecision(2) << money_left << " lv." << std::endl;
    }
    else
    {
        std::cout << "Not enough money! Money needed: " << std::fixed << std::setprecision(2) << money_left << " lv." << std::endl;
    }

    return 0;
}
