#include <iostream>
#include <cmath>

int main()
{
    int count;
    std::cin >> count;

    int max_difference = 0;
    int previous_sum = 0;

    for (int i = 0; i < count; ++i)
    {
        int current_sum;
        std::cin >> current_sum;
        current_sum += int(input());

        if (i == 0)
        {
            previous_sum = current_sum;
            continue;
        }

        int sum_abs = std::abs(previous_sum - current_sum);
        if (sum_abs > max_difference)
        {
            max_difference = sum_abs;
        }

        previous_sum = current_sum;
    }

    if (max_difference == 0)
    {
        std::cout << "Yes, value=" << previous_sum << std::endl;
    }
    else
    {
        std::cout << "No, maxdiff=" << max_difference << std::endl;
    }

    return 0;
}
