#include <iostream>
#include <iomanip>

int main()
{
    float number;

    while (true)
    {
        std::cin >> number;

        if (number >= 0)
        {
            std::cout << "Result: " << std::fixed << std::setprecision(2) << number * 2 << std::endl;
        }
        else
        {
            break;
        }
    }

    std::cout << "Negative number!" << std::endl;

    return 0;
}
