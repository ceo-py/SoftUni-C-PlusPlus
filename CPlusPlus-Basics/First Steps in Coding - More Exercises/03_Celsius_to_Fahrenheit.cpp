#include <iostream>
#include <iomanip>

int main()
{
    double celsius;

    std::cin >> celsius;

    double result = celsius * 1.8 + 32;

    std::cout << std::fixed << std::setprecision(2) << result << std::endl;

    return 0;
}
