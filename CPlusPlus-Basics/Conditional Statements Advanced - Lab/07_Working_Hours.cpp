#include <iostream>
#include <string>

int main()
{
    int hour;
    std::string day_of_the_week;

    std::cin >> hour >> day_of_the_week;

    std::string status;

    if (hour >= 10 && hour < 19)
    {
        if (day_of_the_week == "Monday" || day_of_the_week == "Tuesday" ||
            day_of_the_week == "Wednesday" || day_of_the_week == "Thursday" ||
            day_of_the_week == "Friday" || day_of_the_week == "Saturday")
        {
            status = "open";
        }
        else
        {
            status = "closed";
        }
    }
    else
    {
        status = "closed";
    }

    std::cout << status << std::endl;

    return 0;
}
