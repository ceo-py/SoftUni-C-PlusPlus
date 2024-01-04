#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    int hourOfExam, minutesOfExam, hourOfArrival, minutesOfArrival;

    std::cin >> hourOfExam >> minutesOfExam >> hourOfArrival >> minutesOfArrival;

    int timeForExam = hourOfExam * 60 + minutesOfExam;
    int timeForArrival = hourOfArrival * 60 + minutesOfArrival;
    int diff = std::abs(timeForExam - timeForArrival);
    int hour = diff / 60;
    int minutes = diff % 60;

    if (timeForExam == timeForArrival)
    {
        std::cout << "On Time" << std::endl;
    }

    if (timeForArrival != timeForExam)
    {
        diff = timeForArrival - timeForExam;
        std::string onTime = "after";
        std::string status = "Late";

        if (diff < 0)
        {
            onTime = "before";

            if (diff >= -30)
            {
                status = "On time";
            }
            else
            {
                status = "Early";
            }
        }

        std::cout << status << std::endl;

        if (std::abs(diff) / 60 == 0)
        {
            std::cout << minutes << " minutes " << onTime << " the start" << std::endl;
        }
        else
        {
            std::cout << hour << ":" << std::setw(2) << std::setfill('0') << minutes << " hours " << onTime << " the start" << std::endl;
        }
    }

    return 0;
}
