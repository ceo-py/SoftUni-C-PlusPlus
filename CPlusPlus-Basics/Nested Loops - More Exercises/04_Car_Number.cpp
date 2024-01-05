#include <iostream>

int main()
{
    int number_one, number_two;
    std::cin >> number_one >> number_two;

    for (int i = number_one; i <= number_two; ++i)
    {
        for (int o = number_one; o <= number_two; ++o)
        {
            for (int p = number_one; p <= number_two; ++p)
            {
                for (int l = number_one; l <= number_two; ++l)
                {
                    if (((i % 2 == 0 && l % 2 != 0) || (i % 2 != 0 && l % 2 == 0)) && i > l && ((o + p) % 2) == 0)
                    {
                        std::cout << i << o << p << l << " ";
                    }
                }
            }
        }
    }

    return 0;
}
