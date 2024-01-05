#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    double vacation_budget;
    std::string season;

    std::cin >> vacation_budget >> season;

    double total;

    if (season == "Summer" && vacation_budget <= 1000)
    {
        total = vacation_budget * 0.65;
        std::cout << "Alaska - Camp - " << std::fixed << std::setprecision(2) << total << std::endl;
    }
    else if (season == "Summer" && vacation_budget <= 3000)
    {
        total = vacation_budget * 0.80;
        std::cout << "Alaska - Hut - " << std::fixed << std::setprecision(2) << total << std::endl;
    }
    else if (season == "Winter" && vacation_budget <= 1000)
    {
        total = vacation_budget * 0.45;
        std::cout << "Morocco - Camp - " << std::fixed << std::setprecision(2) << total << std::endl;
    }
    else if (season == "Winter" && vacation_budget <= 3000)
    {
        total = vacation_budget * 0.60;
        std::cout << "Morocco - Hut - " << std::fixed << std::setprecision(2) << total << std::endl;
    }
    else if (vacation_budget > 3000 && season == "Summer")
    {
        total = vacation_budget * 0.90;
        std::cout << "Alaska - Hotel - " << std::fixed << std::setprecision(2) << total << std::endl;
    }
    else
    {
        total = vacation_budget * 0.90;
        std::cout << "Morocco - Hotel - " << std::fixed << std::setprecision(2) << total << std::endl;
    }

    return 0;
}
