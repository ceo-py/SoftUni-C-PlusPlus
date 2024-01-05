#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    double car_budget;
    std::string season;

    std::cin >> car_budget >> season;

    double total;

    if (season == "Summer" && car_budget <= 100)
    {
        total = car_budget * 0.35;
        std::cout << "Economy class\nCabrio - " << std::fixed << std::setprecision(2) << total << std::endl;
    }
    else if (season == "Summer" && car_budget <= 500)
    {
        total = car_budget * 0.45;
        std::cout << "Compact class\nCabrio - " << std::fixed << std::setprecision(2) << total << std::endl;
    }
    else if (season == "Winter" && car_budget <= 100)
    {
        total = car_budget * 0.65;
        std::cout << "Economy class\nJeep - " << std::fixed << std::setprecision(2) << total << std::endl;
    }
    else if (season == "Winter" && car_budget <= 500)
    {
        total = car_budget * 0.80;
        std::cout << "Compact class\nJeep - " << std::fixed << std::setprecision(2) << total << std::endl;
    }
    else if (car_budget > 500)
    {
        total = car_budget * 0.90;
        std::cout << "Luxury class\nJeep - " << std::fixed << std::setprecision(2) << total << std::endl;
    }

    return 0;
}
