#include <iostream>

int main()
{
    int enter_number;
    std::cin >> enter_number;

    int total_sum = 0;

    for (int i = 0; i < enter_number; ++i)
    {
        int num;
        std::cin >> num;
        total_sum += num;
    }

    std::cout << total_sum << std::endl;

    return 0;
}
