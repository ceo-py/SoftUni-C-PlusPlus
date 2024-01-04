#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    const double pi = M_PI;

    std::string a;
    std::cin >> a;

    if (a == "square")
    {
        double b;
        std::cin >> b;
        std::cout << std::fixed << std::setprecision(3) << b * b << std::endl;
    }
    else if (a == "rectangle")
    {
        double b, c;
        std::cin >> b >> c;
        std::cout << std::fixed << std::setprecision(3) << b * c << std::endl;
    }
    else if (a == "circle")
    {
        double b;
        std::cin >> b;
        std::cout << std::fixed << std::setprecision(3) << pi * b * b << std::endl;
    }
    else if (a == "triangle")
    {
        double b, c;
        std::cin >> b >> c;
        std::cout << std::fixed << std::setprecision(3) << b * c / 2 << std::endl;
    }

    return 0;
}
