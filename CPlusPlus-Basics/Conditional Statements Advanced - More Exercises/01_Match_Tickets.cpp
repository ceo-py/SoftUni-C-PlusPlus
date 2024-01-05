#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    double budget, people_count, transport_percent = 1, ticket_price = 0;
    std::string category;
    std::cin >> budget >> category >> people_count;

    if (1 <= people_count && people_count <= 4)
    {
        transport_percent = 0.75;
    }
    else if (people_count <= 9)
    {
        transport_percent = 0.60;
    }
    else if (people_count <= 24)
    {
        transport_percent = 0.50;
    }
    else if (people_count <= 49)
    {
        transport_percent = 0.40;
    }
    else if (people_count >= 50)
    {
        transport_percent = 0.25;
    }

    if (category == "VIP")
    {
        ticket_price = 499.99;
    }
    else if (category == "Normal")
    {
        ticket_price = 249.99;
    }

    double total_price = budget - ((ticket_price * people_count) + (budget * transport_percent));

    if (total_price >= 0)
    {
        std::cout << "Yes! You have " << std::fixed << std::setprecision(2) << std::abs(total_price) << " leva left." << std::endl;
    }
    else
    {
        std::cout << "Not enough money! You need " << std::fixed << std::setprecision(2) << std::abs(total_price) << " leva." << std::endl;
    }

    return 0;
}
