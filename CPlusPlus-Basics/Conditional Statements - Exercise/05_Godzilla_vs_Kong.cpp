#include <iostream>
#include <iomanip>

int main()
{
    double film_budget, price_per_one_extra;
    int count_extras;

    std::cin >> film_budget >> count_extras >> price_per_one_extra;

    double decorator_expenses = film_budget * 0.10;
    double extras_over_onehundred_off = 0.10;
    double gear_for_extras;

    if (count_extras > 150)
    {
        gear_for_extras = count_extras * price_per_one_extra;
        gear_for_extras = gear_for_extras - (gear_for_extras * extras_over_onehundred_off);
    }
    else
    {
        gear_for_extras = count_extras * price_per_one_extra;
    }

    gear_for_extras += decorator_expenses;

    if (film_budget >= gear_for_extras)
    {
        double total_movie_cost = film_budget - gear_for_extras;
        std::cout << "Action!\nWingard starts filming with " << std::fixed << std::setprecision(2) << total_movie_cost << " leva left." << std::endl;
    }
    else
    {
        double total_movie_cost = gear_for_extras - film_budget;
        std::cout << "Not enough money!\nWingard needs " << std::fixed << std::setprecision(2) << total_movie_cost << " leva more." << std::endl;
    }

    return 0;
}
