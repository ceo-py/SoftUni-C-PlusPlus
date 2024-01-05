#include <iostream>

int main()
{
    int num_1, num_2, num_3;
    std::cin >> num_1 >> num_2 >> num_3;

    for (int i = 1; i <= num_1; ++i)
    {
        if (i % 2 == 0)
        {
            for (int j = 1; j <= num_2; ++j)
            {
                if (std::string("2357").find(std::to_string(j)) != std::string::npos)
                {
                    for (int h = 1; h <= num_3; ++h)
                    {
                        if (h % 2 == 0)
                        {
                            std::cout << i << " " << j << " " << h << std::endl;
                        }
                    }
                }
            }
        }
    }

    return 0;
}
