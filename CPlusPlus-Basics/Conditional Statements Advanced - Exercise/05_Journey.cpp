#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    double budget, percentFromBudget;
    std::string season, destination, accommodation;

    std::cin >> budget >> season;

    if (budget <= 100)
    {
        destination = "Bulgaria";

        if (season == "summer")
        {
            percentFromBudget = 0.30;
        }
        else if (season == "winter")
        {
            percentFromBudget = 0.70;
        }
    }
    else if (budget <= 1000)
    {
        destination = "Balkans";

        if (season == "summer")
        {
            percentFromBudget = 0.40;
        }
        else if (season == "winter")
        {
            percentFromBudget = 0.80;
        }
    }
    else
    {
        destination = "Europe";
        percentFromBudget = 0.90;
    }

    if (season == "winter" || budget > 1000)
    {
        accommodation = "Hotel";
    }
    else
    {
        accommodation = "Camp";
    }

    double totalSum = budget * percentFromBudget;

    std::cout << "Somewhere in " << destination << std::endl;
    std::cout << accommodation << " - " << std::fixed << std::setprecision(2) << totalSum << std::endl;

    return 0;
}
