#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    std::string movie_name, hall_type;
    int number_tickets;

    std::getline(std::cin, movie_name);
    std::getline(std::cin, hall_type);
    std::cin >> number_tickets;

    double total_price;

    if (movie_name == "A Star Is Born")
    {
        if (hall_type == "normal")
        {
            total_price = 7.50;
        }
        else if (hall_type == "luxury")
        {
            total_price = 10.50;
        }
        else if (hall_type == "ultra luxury")
        {
            total_price = 13.50;
        }
    }
    else if (movie_name == "Bohemian Rhapsody")
    {
        if (hall_type == "normal")
        {
            total_price = 7.35;
        }
        else if (hall_type == "luxury")
        {
            total_price = 9.45;
        }
        else if (hall_type == "ultra luxury")
        {
            total_price = 12.75;
        }
    }
    else if (movie_name == "Green Book")
    {
        if (hall_type == "normal")
        {
            total_price = 8.15;
        }
        else if (hall_type == "luxury")
        {
            total_price = 10.25;
        }
        else if (hall_type == "ultra luxury")
        {
            total_price = 13.25;
        }
    }
    else if (movie_name == "The Favourite")
    {
        if (hall_type == "normal")
        {
            total_price = 8.75;
        }
        else if (hall_type == "luxury")
        {
            total_price = 11.55;
        }
        else if (hall_type == "ultra luxury")
        {
            total_price = 13.95;
        }
    }
    else
    {
        std::cerr << "Invalid movie name." << std::endl;
        return 1;
    }

    total_price *= number_tickets;

    std::cout << movie_name << " -> " << std::fixed << std::setprecision(2) << total_price << " lv." << std::endl;

    return 0;
}
