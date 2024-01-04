#include <iostream>

int main()
{
    int numbers_to_enter;
    std::cin >> numbers_to_enter;

    int total_sum = 0;
    int max_number = 0;

    for (int number = 0; number < numbers_to_enter; ++number)
    {
        int input_number;
        std::cin >> input_number;

        if (input_number > max_number)
        {
            max_number = input_number;
        }

        total_sum += input_number;
    }

    int difference = total_sum - max_number;

    if (difference == max_number)
    {
        std::cout << "Yes" << std::endl;
        std::cout << "Sum = " << max_number << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
        std::cout << "Diff = " << abs(difference - max_number) << std::endl;
    }

    return 0;
}
