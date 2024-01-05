#include <iostream>
#include <iomanip>


int main()
{
    double basa1, basa2, height;

    std::cin >> basa1 >> basa2 >> height;

    double area = (basa1 + basa2) * height / 2;

    std::cout << std::fixed << std::setprecision(2) << area << std::endl;

    return 0;
}
