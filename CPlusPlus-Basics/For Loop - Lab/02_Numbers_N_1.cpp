#include <iostream>

int main()
{
    int number;
    std::cin >> number;

    for (int i = number; i > 0; --i)
    {
        std::cout << i << std::endl;
    }

    return 0;
}
