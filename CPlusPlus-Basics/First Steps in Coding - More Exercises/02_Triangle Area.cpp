#include <iostream>
#include <iomanip>

int main()
{
    double side_angle, high_angle;

    std::cin >> side_angle >> high_angle;

    double area = side_angle * high_angle / 2;

    std::cout << std::fixed << std::setprecision(2) << area << std::endl;

    return 0;
}
