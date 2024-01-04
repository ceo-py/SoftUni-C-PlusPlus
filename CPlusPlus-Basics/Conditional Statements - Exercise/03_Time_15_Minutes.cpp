#include <iostream>

int main()
{
    int hours;
    int minutes;
    std::cin >> hours;
    std::cin >> minutes;

    int total_minutes = (hours * 60) + (minutes + 15);
    int hour = int(total_minutes / 60);
    int c_minutes = total_minutes % 60;

    std::cout << (hour == 24 ? 0 : hour) << ":" << (c_minutes >= 10 ? "" : "0") << c_minutes << std::endl;

    return 0;
}
