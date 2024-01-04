#include <iostream>
#include <string>

int main()
{
    std::string days_of_the_week;
    std::getline(std::cin >> std::ws, days_of_the_week); 

    std::string output = "Error";

    if (days_of_the_week == "1")
    {
        output = "Monday";
    }
    else if (days_of_the_week == "2")
    {
        output = "Tuesday";
    }
    else if (days_of_the_week == "3")
    {
        output = "Wednesday";
    }
    else if (days_of_the_week == "4")
    {
        output = "Thursday";
    }
    else if (days_of_the_week == "5")
    {
        output = "Friday";
    }
    else if (days_of_the_week == "6")
    {
        output = "Saturday";
    }
    else if (days_of_the_week == "7")
    {
        output = "Sunday";
    }

    std::cout << output << std::endl;

    return 0;
}
