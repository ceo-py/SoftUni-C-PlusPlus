#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    std::string name;
    std::cin >> name;

    int years = 0;
    int badYears = 0;
    double sumGraduates = 0;

    while (years < 12)
    {
        double graduate;
        std::cin >> graduate;

        if (graduate < 4.0)
        {
            badYears++;
            if (badYears == 2)
            {
                std::cout << name << " has been excluded at " << (years + 1) << " grade" << std::endl;
                break;
            }
            continue;
        }

        years++;
        sumGraduates += graduate;
    }

    if (years == 12)
    {
        std::cout << name << " graduated. Average grade: " << std::fixed << std::setprecision(2) << (sumGraduates / years) << std::endl;
    }

    return 0;
}
