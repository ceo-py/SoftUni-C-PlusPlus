#include <iostream>

int main()
{
    int range_numbers;
    std::cin >> range_numbers;

    int left_sum = 0;
    int right_sum = 0;

    for (int number = 0; number < range_numbers * 2; ++number)
    {
        int number_to_add;
        std::cin >> number_to_add;

        if (number < range_numbers)
        {
            left_sum += number_to_add;
        }
        else
        {
            right_sum += number_to_add;
        }
    }

    if (left_sum == right_sum)
    {
        std::cout << "Yes, sum = " << left_sum << std::endl;
    }
    else
    {
        int diff = abs(left_sum - right_sum);
        std::cout << "No, diff = " << diff << std::endl;
    }

    return 0;
}
