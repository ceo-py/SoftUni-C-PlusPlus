#include <iostream>
#include <iomanip>

int main()
{
    int number_guests;
    double reservation_one_person, budget;

    std::cin >> number_guests >> reservation_one_person >> budget;

    double cake_price = budget * 0.10;
    double discount = 0;

    if (number_guests < 10)
    {
        discount = 1;
    }
    else if (number_guests >= 10 && number_guests <= 15)
    {
        discount = 0.85;
    }
    else if (number_guests <= 20)
    {
        discount = 0.80;
    }
    else if (number_guests > 20)
    {
        discount = 0.75;
    }

    double expenses = (number_guests * reservation_one_person * discount) + cake_price;
    double total_sum = budget - expenses;

    if (total_sum >= 0)
    {
        std::cout << "It is party time! " << std::fixed << std::setprecision(2) << total_sum << " leva left." << std::endl;
    }
    else
    {
        std::cout << "No party! " << std::fixed << std::setprecision(2) << std::abs(total_sum) << " leva needed." << std::endl;
    }

    return 0;
}
