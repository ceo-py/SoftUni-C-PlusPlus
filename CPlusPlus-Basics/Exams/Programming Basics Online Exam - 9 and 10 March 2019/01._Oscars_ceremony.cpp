#include <iostream>
#include <iomanip>

int main()
{
    int hall_rent;

    std::cin >> hall_rent;

    double figurines = hall_rent * 0.70;
    double catering = figurines * 0.85;
    double sound = catering / 2;

    double total_price = figurines + catering + sound + hall_rent;

    std::cout << std::fixed << std::setprecision(2) << total_price << std::endl;

    return 0;
}
