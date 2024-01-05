#include <iostream>
#include <iomanip>

int main()
{
    double money;
    int year;
    std::cin >> money >> year;

    int age = 18;

    for (int i = 1800; i <= year; ++i)
    {
        if (i % 2 == 0)
        {
            money -= 12000;
        }
        else
        {
            money -= 12000 + (50 * age);
        }
        age += 1;
    }

    if (money >= 0)
    {
        std::cout << "Yes! He will live a carefree life and will have " << std::fixed << std::setprecision(2) << money << " dollars left." << std::endl;
    }
    else
    {
        std::cout << "He will need " << std::fixed << std::setprecision(2) << std::abs(money) << " dollars to survive." << std::endl;
    }

    return 0;
}
