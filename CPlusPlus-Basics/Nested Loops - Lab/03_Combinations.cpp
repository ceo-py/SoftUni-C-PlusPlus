#include <iostream>

int main()
{
    int number;
    std::cin >> number;

    int combinations_count = 0;

    for (int x1 = 0; x1 <= number; ++x1)
    {
        for (int x2 = 0; x2 <= number; ++x2)
        {
            for (int x3 = 0; x3 <= number; ++x3)
            {
                if (x1 + x2 + x3 == number)
                {
                    combinations_count += 1;
                }
            }
        }
    }

    std::cout << combinations_count << std::endl;

    return 0;
}
