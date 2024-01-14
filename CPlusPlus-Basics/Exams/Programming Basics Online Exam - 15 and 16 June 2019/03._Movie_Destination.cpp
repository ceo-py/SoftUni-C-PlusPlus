#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    double movie_budget, price, money_left;
    std::string movie_destination, season;
    int number_days;

    std::cin >> movie_budget >> movie_destination >> season >> number_days;

    if (movie_destination == "Dubai" && season == "Winter")
    {
        price += 45'000;
    }
    else if (movie_destination == "Dubai" && season == "Summer")
    {
        price += 40'000;
    }
    else if (movie_destination == "Sofia" && season == "Summer")
    {
        price += 12'500;
    }
    else if (movie_destination == "Sofia" && season == "Winter")
    {
        price += 17'000;
    }
    else if (movie_destination == "London" && season == "Winter")
    {
        price += 24'000;
    }
    else if (movie_destination == "London" && season == "Summer")
    {
        price += 20'250;
    }

    if (movie_destination == "Dubai")
    {
        price = price - (price * 0.30);
    }
    else if (movie_destination == "Sofia")
    {
        price = price + (price * 0.25);
    }

    double total = price * number_days;
    money_left = movie_budget - total;

    if (movie_budget >= total)
    {
        std::cout << "The budget for the movie is enough! We have " << std::fixed << std::setprecision(2) << money_left << " leva left!" << std::endl;
    }
    else
    {
        std::cout << "The director needs " << std::fixed << std::setprecision(2) << std::abs(money_left) << " leva more!" << std::endl;
    }

    return 0;
}
