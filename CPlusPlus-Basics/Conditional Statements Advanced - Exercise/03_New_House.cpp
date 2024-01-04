#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    std::string type_flower;
    int count_flower, budget;
    double flower_price = 0;
    double price_correction = 1;

    std::cin >> type_flower >> count_flower >> budget;

    if (type_flower == "Roses")
    {
        flower_price = 5;
        if (count_flower > 80)
        {
            price_correction = 0.90;
        }
    }
    else if (type_flower == "Dahlias")
    {
        flower_price = 3.80;
        if (count_flower > 90)
        {
            price_correction = 0.85;
        }
    }
    else if (type_flower == "Tulips")
    {
        flower_price = 2.80;
        if (count_flower > 80)
        {
            price_correction = 0.85;
        }
    }
    else if (type_flower == "Narcissus")
    {
        flower_price = 3;
        if (count_flower < 120)
        {
            price_correction = 1.15;
        }
    }
    else if (type_flower == "Gladiolus")
    {
        flower_price = 2.50;
        if (count_flower < 80)
        {
            price_correction = 1.20;
        }
    }

    double total_sum = budget - (flower_price * count_flower) * price_correction;

    if (total_sum >= 0)
    {
        std::cout << "Hey, you have a great garden with " << count_flower << " " << type_flower << " and " << std::fixed << std::setprecision(2) << total_sum << " leva left." << std::endl;
    }
    else
    {
        std::cout << "Not enough money, you need " << std::fixed << std::setprecision(2) << std::abs(total_sum) << " leva more." << std::endl;
    }

    return 0;
}
