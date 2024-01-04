#include <iostream>
#include <string>

int main()
{
    std::string day;
    std::getline(std::cin >> std::ws, day); 

    std::string output = "Error";

    if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")
    {
        output = "Working day";
    }
    else if (day == "Saturday" || day == "Sunday")
    {
        output = "Weekend";
    }

    std::cout << output << std::endl;

    return 0;
}
