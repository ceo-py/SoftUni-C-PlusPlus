#include <iostream>

int main()
{
    float weather_celsius;
    std::cin >> weather_celsius;

    if (weather_celsius <= 5.00)
    {
        std::cout << "unknown" << std::endl;
    }
    else if (5.00 <= weather_celsius && weather_celsius <= 11.9)
    {
        std::cout << "Cold" << std::endl;
    }
    else if (weather_celsius <= 14.90)
    {
        std::cout << "Cool" << std::endl;
    }
    else if (weather_celsius <= 20.00)
    {
        std::cout << "Mild" << std::endl;
    }
    else if (weather_celsius <= 25.90)
    {
        std::cout << "Warm" << std::endl;
    }
    else if (weather_celsius <= 35.00)
    {
        std::cout << "Hot" << std::endl;
    }
    else
    {
        std::cout << "unknown" << std::endl;
    }

    return 0;
}
