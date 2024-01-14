#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    int cyclists_juniors, cyclists_seniors;
    std::string route_type;

    std::cin >> cyclists_juniors >> cyclists_seniors >> route_type;

    double juniors_tax = 0, seniors_tax = 0;

    if (route_type == "trail")
    {
        juniors_tax = 5.50;
        seniors_tax = 7;
    }
    else if (route_type == "cross-country")
    {
        juniors_tax = 8;
        seniors_tax = 9.50;

        if (cyclists_juniors + cyclists_seniors >= 50)
        {
            juniors_tax *= 0.75;
            seniors_tax *= 0.75;
        }
    }
    else if (route_type == "downhill")
    {
        juniors_tax = 12.25;
        seniors_tax = 13.75;
    }
    else if (route_type == "road")
    {
        juniors_tax = 20;
        seniors_tax = 21.50;
    }

    double total_sum = ((cyclists_juniors * juniors_tax) + (cyclists_seniors * seniors_tax)) * 0.95;
    std::cout << std::fixed << std::setprecision(2) << total_sum << std::endl;

    return 0;
}
