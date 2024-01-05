#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    std::string type_fuel, club_card;
    double quantity_fuel, price, total;

    std::cin >> type_fuel >> quantity_fuel >> club_card;

    if (type_fuel == "Diesel")
    {
        price = 2.33;
        if (club_card == "Yes")
        {
            price -= 0.12;
        }
    }
    else if (type_fuel == "Gas")
    {
        price = 0.93;
        if (club_card == "Yes")
        {
            price -= 0.08;
        }
    }
    else if (type_fuel == "Gasoline")
    {
        price = 2.22;
        if (club_card == "Yes")
        {
            price -= 0.18;
        }
    }

    total = price * quantity_fuel;

    if (quantity_fuel >= 20 && quantity_fuel <= 25)
    {
        total *= 0.92;
    }
    else if (quantity_fuel > 25)
    {
        total *= 0.90;
    }

    std::cout << std::fixed << std::setprecision(2) << total << " lv." << std::endl;

    return 0;
}
