#include <iostream>
#include <string>

int main()
{
    std::string day_of_the_week;
    std::getline(std::cin >> std::ws, day_of_the_week);

    int output = 16;

    if (day_of_the_week == "Monday" || day_of_the_week == "Tuesday" || day_of_the_week == "Friday")
    {
        output = 12;
    }
    else if (day_of_the_week == "Wednesday" || day_of_the_week == "Thursday")
    {
        output = 14;
    }

    std::cout << output << std::endl;

    return 0;
}
