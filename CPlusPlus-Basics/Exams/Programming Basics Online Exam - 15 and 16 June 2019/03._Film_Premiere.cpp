#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    std::string movie_name, movie_extra;
    int movie_tickets, extras = 0;
    double total = 0;

    std::getline(std::cin >> std::ws, movie_name);
    std::getline(std::cin >> std::ws, movie_extra);
    std::cin >> movie_tickets;

    if (movie_name == "John Wick")
    {
        if (movie_extra == "Drink")
        {
            extras += 12;
        }
        else if (movie_extra == "Popcorn")
        {
            extras += 15;
        }
        else if (movie_extra == "Menu")
        {
            extras += 19;
        }
    }
    else if (movie_name == "Star Wars")
    {
        if (movie_extra == "Drink")
        {
            extras += 18;
        }
        else if (movie_extra == "Popcorn")
        {
            extras += 25;
        }
        else if (movie_extra == "Menu")
        {
            extras += 30;
        }
    }
    else if (movie_name == "Jumanji")
    {
        if (movie_extra == "Drink")
        {
            extras += 9;
        }
        else if (movie_extra == "Popcorn")
        {
            extras += 11;
        }
        else if (movie_extra == "Menu")
        {
            extras += 14;
        }
    }

    total = extras * movie_tickets;

    if (movie_tickets >= 4 && movie_name == "Star Wars")
    {
        total = total - (total * 0.30);
    }
    else if (movie_tickets == 2 && movie_name == "Jumanji")
    {
        total = total - (total * 0.15);
    }

    std::cout << "Your bill is " << std::fixed << std::setprecision(2) << total << " leva." << std::endl;

    return 0;
}
