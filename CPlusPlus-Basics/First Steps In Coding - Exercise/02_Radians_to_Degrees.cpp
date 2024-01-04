#include <iostream>
#include <cmath>

int main() {
    double radians;

    std::cin >> radians;

    std::cout << round(radians * 180 / M_PI) << std::endl;

    return 0;
}
