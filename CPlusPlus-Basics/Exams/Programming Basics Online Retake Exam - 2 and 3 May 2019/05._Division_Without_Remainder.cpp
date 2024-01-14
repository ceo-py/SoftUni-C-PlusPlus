#include <iostream>
#include <iomanip>

int main()
{
    int full_numbers;
    std::cin >> full_numbers;

    double divide_two = 0, divide_three = 0, divide_four = 0;

    for (int i = 0; i < full_numbers; ++i)
    {
        int number;
        std::cin >> number;

        if (number % 2 == 0)
        {
            divide_two += 1;
        }

        if (number % 3 == 0)
        {
            divide_three += 1;
        }

        if (number % 4 == 0)
        {
            divide_four += 1;
        }
    }

    divide_two = static_cast<double>(divide_two) / full_numbers * 100;
    divide_three = static_cast<double>(divide_three) / full_numbers * 100;
    divide_four = static_cast<double>(divide_four) / full_numbers * 100;

    std::cout << std::fixed << std::setprecision(2) << divide_two << "%" << std::endl;
    std::cout << std::fixed << std::setprecision(2) << divide_three << "%" << std::endl;
    std::cout << std::fixed << std::setprecision(2) << divide_four << "%" << std::endl;

    return 0;
}
