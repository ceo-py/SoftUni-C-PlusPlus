#include <iostream>
#include <iomanip>

int main()
{
    int days, number_hours_for_every_day;
    std::cin >> days >> number_hours_for_every_day;

    double day_taxes = 0;
    double day_tax = 0;

    for (int day = 1; day <= days; ++day)
    {
        day_tax = 0;

        for (int hours = 1; hours <= number_hours_for_every_day; ++hours)
        {
            if (day % 2 == 0 && hours % 2 != 0)
            {
                day_taxes += 2.50;
                day_tax += 2.50;
            }
            else if (day % 2 != 0 && hours % 2 == 0)
            {
                day_taxes += 1.25;
                day_tax += 1.25;
            }
            else
            {
                day_taxes += 1;
                day_tax += 1;
            }
        }

        std::cout << "Day: " << day << " - " << std::fixed << std::setprecision(2) << day_tax << " leva" << std::endl;
    }

    std::cout << "Total: " << std::fixed << std::setprecision(2) << day_taxes << " leva" << std::endl;

    return 0;
}
