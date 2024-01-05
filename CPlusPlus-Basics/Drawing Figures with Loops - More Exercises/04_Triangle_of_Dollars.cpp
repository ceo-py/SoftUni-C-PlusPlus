#include <iostream>

int main()
{
    int number;
    std::cin >> number;

    for (int row = 1; row <= number; ++row)
    {
        for (int col = 1; col <= row; ++col)
        {
            std::cout << "$ ";
        }
        std::cout << std::endl;
    }

    return 0;
}
