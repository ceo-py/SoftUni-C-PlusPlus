#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    const double pi = 3.14159265358979323846;

    double r;
    std::cin >> r;

    double face_of_circle = pi * (r * r);
    double perimeter_circle = 2 * pi * r;

    std::cout << std::fixed << std::setprecision(2) << face_of_circle << std::endl;
    std::cout << std::fixed << std::setprecision(2) << perimeter_circle << std::endl;

    return 0;
}
