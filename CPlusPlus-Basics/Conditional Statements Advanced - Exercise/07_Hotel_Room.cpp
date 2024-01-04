#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    std::string month;
    int sleepCount;

    std::cin >> month >> sleepCount;

    double studioPrice = 0;
    double apartmentPrice = 0;

    if (month == "May" || month == "October")
    {
        apartmentPrice = 65;
        studioPrice = 50;
    }
    else if (month == "June" || month == "September")
    {
        apartmentPrice = 68.70;
        studioPrice = 75.20;
    }
    else if (month == "July" || month == "August")
    {
        apartmentPrice = 77;
        studioPrice = 76;
    }

    if (sleepCount > 7 && month == "May" || month == "October")
    {
        if (sleepCount > 14)
        {
            studioPrice *= 0.70;
        }
        else if (sleepCount > 7)
        {
            studioPrice *= 0.95;
        }
    }

    if (sleepCount > 14 && month == "June" || month == "September")
    {
        studioPrice *= 0.80;
    }

    if (sleepCount > 14)
    {
        apartmentPrice *= 0.90;
    }
    apartmentPrice *= sleepCount;
    studioPrice *= sleepCount;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Apartment: " << apartmentPrice << " lv." << std::endl;
    std::cout << "Studio: " << studioPrice << " lv." << std::endl;

    return 0;
}
