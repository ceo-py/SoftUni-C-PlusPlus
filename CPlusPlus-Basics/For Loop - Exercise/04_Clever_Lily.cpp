#include <iostream>

int main()
{
    int lily_age;
    std::cin >> lily_age;

    double washing_machine_price;
    std::cin >> washing_machine_price;

    int toy_price;
    std::cin >> toy_price;

    double added_money_to_birthday_eve = 0;
    int brother_steal_money = 1;
    double extra_money = 0;
    int gifts_received = -1;

    for (int age = 0; age <= lily_age; ++age)
    {
        if (age != 0 && age % 2 == 0)
        {
            added_money_to_birthday_eve += 10;
            extra_money += added_money_to_birthday_eve;
        }
        else
        {
            gifts_received += 1;
        }
    }

    int total_brother_steal_money = brother_steal_money * (lily_age - gifts_received);
    extra_money = washing_machine_price - ((extra_money + (gifts_received * toy_price)) - total_brother_steal_money);

    std::cout << std::fixed;
    std::cout.precision(2);

    if (extra_money <= 0)
    {
        std::cout << "Yes! " << std::abs(extra_money) << std::endl;
    }
    else
    {
        std::cout << "No! " << std::abs(extra_money) << std::endl;
    }

    return 0;
}
