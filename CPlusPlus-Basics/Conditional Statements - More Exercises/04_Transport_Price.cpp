#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    int numbers_of_kilometers;
    std::string day_type;

    const double taxi_inicial = 0.70;
    const double taxi_day_tariff = 0.79;
    const double taxi_night_tariff = 0.90;
    const double bus_tax = 0.09;
    const double train = 0.06;
    double total = 0;

    std::cin >> numbers_of_kilometers >> day_type;

    if (numbers_of_kilometers < 20)
    {
        if (day_type == "day")
        {
            total = taxi_inicial + numbers_of_kilometers * taxi_day_tariff;
        }
        else
        {
            total = taxi_inicial + numbers_of_kilometers * taxi_night_tariff;
        }
    }
    else if (numbers_of_kilometers < 100)
    {
        total = numbers_of_kilometers * bus_tax;
    }
    else if (numbers_of_kilometers >= 100)
    {
        total = numbers_of_kilometers * train;
    }

    std::cout << std::fixed << std::setprecision(2) << total << std::endl;

    return 0;
}
