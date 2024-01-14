#include <iostream>
#include <iomanip>

int main()
{
    float movie_budget;
    int extras;
    float extras_clothing_price;

    std::cin >> movie_budget >> extras >> extras_clothing_price;

    float decor = movie_budget * 0.10;

    float extras_clothing_total;

    if (extras > 150)
    {
        extras_clothing_total = (extras_clothing_price * extras) - ((extras_clothing_price * extras) * 0.10);
    }
    else
    {
        extras_clothing_total = extras_clothing_price * extras;
    }

    float total_movie_cost = movie_budget - (decor + extras_clothing_total);

    if (movie_budget > total_movie_cost && total_movie_cost >= 0)
    {
        std::cout << "Action!\nWingard starts filming with " << std::fixed << std::setprecision(2) << total_movie_cost << " leva left." << std::endl;
    }
    else
    {
        std::cout << "Not enough money!\nWingard needs " << std::fixed << std::setprecision(2) << std::abs(total_movie_cost) << " leva more." << std::endl;
    }

    return 0;
}
