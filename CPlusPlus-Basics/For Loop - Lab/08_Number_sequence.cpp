#include <iostream>
#include <climits>

int main()
{
    int num;
    std::cin >> num;

    int max_number = INT_MIN;
    int min_number = INT_MAX;

    for (int i = 0; i < num; ++i)
    {
        int number;
        std::cin >> number;

        if (number >= max_number)
        {
            max_number = number;
        }

        if (number <= min_number)
        {
            min_number = number;
        }
    }

    std::cout << "Max number: " << max_number << std::endl;
    std::cout << "Min number: " << min_number << std::endl;

    return 0;
}
