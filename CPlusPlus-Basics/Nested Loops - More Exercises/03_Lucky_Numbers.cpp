#include <iostream>

int main()
{
    int number;
    std::cin >> number;

    for (int i = 1; i < 10; ++i)
    {
        for (int o = 1; o < 10; ++o)
        {
            for (int p = 1; p < 10; ++p)
            {
                for (int l = 1; l < 10; ++l)
                {
                    if (i + o == p + l && number % (i + o) == 0)
                    {
                        std::cout << i << o << p << l << " ";
                    }
                }
            }
        }
    }

    return 0;
}
