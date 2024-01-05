#include <iostream>

int main()
{
    int starting_point, ending_point, looking_number;
    std::cin >> starting_point >> ending_point >> looking_number;

    int count_combinations = 0;
    int combination_found = 0;

    for (int number_one = starting_point; number_one <= ending_point; ++number_one)
    {
        if (combination_found == 1)
        {
            break;
        }

        for (int number_two = starting_point; number_two <= ending_point; ++number_two)
        {
            count_combinations++;

            if (number_one + number_two == looking_number)
            {
                int total = number_one + number_two;
                std::cout << "Combination N:" << count_combinations << " (" << number_one << " + " << number_two
                          << " = " << total << ")" << std::endl;
                combination_found = 1;
                break;
            }
        }
    }

    if (combination_found == 0)
    {
        std::cout << count_combinations << " combinations - neither equals " << looking_number << std::endl;
    }

    return 0;
}
