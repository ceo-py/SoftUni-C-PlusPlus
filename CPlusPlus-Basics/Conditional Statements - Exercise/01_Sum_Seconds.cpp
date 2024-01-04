#include <iostream>
#include <iomanip>
#include <ctime>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    int totalSeconds = a + b + c;
    int hours = totalSeconds / 3600;
    int minutes = (totalSeconds % 3600) / 60;
    int seconds = totalSeconds % 60;

    std::cout << minutes << ":"
              << std::setfill('0') << std::setw(2) << seconds << std::endl;

    return 0;
}
