#include <iostream>

int main()
{
    int number;
    std::cin >> number;

    double bonus_points = 0;

    if (number <= 100)
    {
        bonus_points = 5;
    }
    else if (number > 1000)
    {
        bonus_points = number * 0.10;
    }
    else
    {
        bonus_points = number * 0.20;
    }

    if (number % 2 == 0)
    {
        bonus_points += 1;
    }
    else if (number % 5 == 0)
    {
        bonus_points += 2;
    }

    double total_points = bonus_points + number;

    std::cout << bonus_points << std::endl;
    std::cout << total_points << std::endl;

    return 0;
}
