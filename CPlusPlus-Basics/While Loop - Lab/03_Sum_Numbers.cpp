#include <iostream>

int main()
{
    int number, total = 0;

    std::cin >> number;

    while (total < number)
    {
        int added_number;
        std::cin >> added_number;
        total += added_number;
    }

    std::cout << total << std::endl;

    return 0;
}
