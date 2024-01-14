#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    double budget;
    std::cin >> budget;

    std::string product;
    int product_counter = 0;
    double starting_budget = budget;

    while (std::cin >> product && product != "Stop")
    {
        double price;
        std::cin >> price;
        product_counter++;

        if (product_counter % 3 == 0)
        {
            price *= 0.50;
        }

        budget -= price;

        if (budget < 0)
        {
            std::cout << "You don't have enough money!" << std::endl;
            std::cout << "You need " << std::fixed << std::setprecision(2) << std::abs(budget) << " leva!" << std::endl;
            break;
        }
    }

    if (product == "Stop")
    {
        std::cout << "You bought " << product_counter << " products for " << std::fixed << std::setprecision(2) << std::abs(budget - starting_budget) << " leva." << std::endl;
    }

    return 0;
}
