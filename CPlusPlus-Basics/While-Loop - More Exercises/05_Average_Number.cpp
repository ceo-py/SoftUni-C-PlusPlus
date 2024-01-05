#include <iostream>
#include <iomanip>

int main()
{
    int total_numbers;
    std::cin >> total_numbers;

    int sum_of_numbers = 0;

    for (int i = 0; i < total_numbers; ++i)
    {
        int number;
        std::cin >> number;
        sum_of_numbers += number;
    }

    double average_number = static_cast<double>(sum_of_numbers) / total_numbers;
    std::cout << std::fixed << std::setprecision(2) << average_number << std::endl;

    return 0;
}
