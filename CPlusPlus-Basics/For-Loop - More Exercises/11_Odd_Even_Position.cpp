#include <iostream>
#include <limits>
#include <iomanip>

int main()
{
    int numbers;
    std::cin >> numbers;

    double even_sum = 0, even_max = -std::numeric_limits<double>::infinity(), even_min = std::numeric_limits<double>::infinity();
    double odd_sum = 0, odd_max = -std::numeric_limits<double>::infinity(), odd_min = std::numeric_limits<double>::infinity();

    for (int num = 1; num <= numbers; ++num)
    {
        double check_number;
        std::cin >> check_number;

        if (num % 2 == 0)
        { 
            even_sum += check_number;
            even_max = std::max(even_max, check_number);
            even_min = std::min(even_min, check_number);
        }
        else
        { 
            odd_sum += check_number;
            odd_max = std::max(odd_max, check_number);
            odd_min = std::min(odd_min, check_number);
        }
    }

    std::cout << "OddSum=" << std::fixed << std::setprecision(2) << odd_sum << "," << std::endl;
    if (odd_min == std::numeric_limits<double>::infinity())
    {
        std::cout << "OddMin=No," << std::endl;
    }
    else
    {
        std::cout << "OddMin=" << std::fixed << std::setprecision(2) << odd_min << "," << std::endl;
    }
    if (odd_max == -std::numeric_limits<double>::infinity())
    {
        std::cout << "OddMax=No," << std::endl;
    }
    else
    {
        std::cout << "OddMax=" << std::fixed << std::setprecision(2) << odd_max << "," << std::endl;
    }

    std::cout << "EvenSum=" << std::fixed << std::setprecision(2) << even_sum << "," << std::endl;
    if (even_min == std::numeric_limits<double>::infinity())
    {
        std::cout << "EvenMin=No," << std::endl;
    }
    else
    {
        std::cout << "EvenMin=" << std::fixed << std::setprecision(2) << even_min << "," << std::endl;
    }
    if (even_max == -std::numeric_limits<double>::infinity())
    {
        std::cout << "EvenMax=No" << std::endl;
    }
    else
    {
        std::cout << "EvenMax=" << std::fixed << std::setprecision(2) << even_max << std::endl;
    }

    return 0;
}
