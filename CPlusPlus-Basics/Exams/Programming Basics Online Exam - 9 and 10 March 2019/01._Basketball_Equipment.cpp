#include <iostream>
#include <iomanip>

int main()
{
    int year_tax_basketball;
    std::cin >> year_tax_basketball;

    double sneakers_price = year_tax_basketball - (year_tax_basketball * 0.40);
    double gear = sneakers_price - (sneakers_price * 0.20);
    double ball = gear / 4;
    double accessories = ball / 5;

    double total = year_tax_basketball + sneakers_price + gear + ball + accessories;

    std::cout << std::fixed << std::setprecision(2) << total << std::endl;

    return 0;
}
