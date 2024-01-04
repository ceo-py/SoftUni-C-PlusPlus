#include <iostream>

int main()
{
    int a, b, c;
    double d;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;

    int cm = a * b * c;
    double litri = cm * 0.001;
    double total = litri * (1 - (d / 100));

    std::cout << total << std::endl;

    return 0;
}
