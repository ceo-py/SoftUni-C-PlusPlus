#include <iostream>

int main()
{
    for (int num = 1; num <= 1000; ++num)
    {
        if (num % 10 == 7)
        {
            std::cout << num << std::endl;
        }
    }

    return 0;
}
