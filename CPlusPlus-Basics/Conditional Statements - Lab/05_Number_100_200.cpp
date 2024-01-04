#include <iostream>

int main()
{
    int a;

    std::cin >> a;

    if (a <= 99)
    {
        std::cout << "Less than 100" << std::endl;
    }
    else if (a >= 100 && a <= 200)
    {
        std::cout << "Between 100 and 200" << std::endl;
    }
    else
    {
        std::cout << "Greater than 200" << std::endl;
    }

    return 0;
}
