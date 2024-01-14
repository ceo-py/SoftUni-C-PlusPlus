#include <iostream>
#include <iomanip>

int main()
{
    int number_days, hours_per_day;
    std::cin >> number_days >> hours_per_day;

    double total_tax = 0;

    for (int day = 1; day <= number_days; ++day)
    {
        double day_tax = 0;

        for (int hour = 1; hour <= hours_per_day; ++hour)
        {
            double price;

            if (day % 2 == 0 && hour % 2 != 0)
            {
                price = 2.50;
            }
            else if (day % 2 != 0 && hour % 2 == 0)
            {
                price = 1.25;
            }
            else
            {
                price = 1;
            }

            total_tax += price;
            day_tax += price;
        }

        std::cout << "Day: " << day << " - " << std::fixed << std::setprecision(2) << day_tax << " leva" << std::endl;
    }

    std::cout << "Total: " << std::fixed << std::setprecision(2) << total_tax << " leva" << std::endl;

    return 0;
}
