#include <iostream>
#include <iomanip>

int main()
{
    int a, b, c;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    double m_total = (a * 10.35) + (b * 12.40) + (c * 8.15);
    double d_price = m_total * 0.20;
    double total = m_total + d_price + 2.50;

    std::cout << total << std::endl;

    return 0;
}
