#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    int numbers_guests, budget;
    const int easter_bread_price = 4;
    const double egg_price = 0.45;
    const int easter_bread_needed = 3;
    const int egg_needed = 2;

    std::cin >> numbers_guests >> budget;

    int easter_bread_bought = std::ceil(static_cast<double>(numbers_guests) / easter_bread_needed);
    int eggs_bread_bought = numbers_guests * egg_needed;

    double total_sum = budget - (easter_bread_bought * easter_bread_price + eggs_bread_bought * egg_price);

    if (total_sum >= 0)
    {
        std::cout << "Lyubo bought " << easter_bread_bought << " Easter bread and " << eggs_bread_bought << " eggs." << std::endl;
        std::cout << "He has " << std::fixed << std::setprecision(2) << total_sum << " lv. left." << std::endl;
    }
    else
    {
        std::cout << "Lyubo doesn't have enough money." << std::endl;
        std::cout << "He needs " << std::fixed << std::setprecision(2) << std::abs(total_sum) << " lv. more." << std::endl;
    }

    return 0;
}
