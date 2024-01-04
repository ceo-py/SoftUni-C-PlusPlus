#include <iostream>

int main()
{
    int number;
    std::cin >> number;

    for (int i = 1; i <= number; i += 3)
    {
        std::cout << i << std::endl;
    }

    return 0;
}
