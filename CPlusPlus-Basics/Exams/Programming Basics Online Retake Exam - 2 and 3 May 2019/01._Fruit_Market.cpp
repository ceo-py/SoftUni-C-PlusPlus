#include <iostream>
#include <iomanip>

int main()
{
    double strawberries_price_lv;
    double quantity_bananas_in_kg;
    double quantity_oranges_in_kg;
    double quantity_raspberries_in_kg;
    double quantity_strawberries_in_kg;

    std::cin >> strawberries_price_lv >> quantity_bananas_in_kg >> quantity_oranges_in_kg >> quantity_raspberries_in_kg >> quantity_strawberries_in_kg;

    double raspberries_price = strawberries_price_lv / 2;
    double oranges_price = raspberries_price * 0.60;
    double bananas_price = raspberries_price * 0.20;

    double raspberries_total = raspberries_price * quantity_raspberries_in_kg;
    double oranges_total = oranges_price * quantity_oranges_in_kg;
    double bananas_total = bananas_price * quantity_bananas_in_kg;
    double strawberries_total = quantity_strawberries_in_kg * strawberries_price_lv;

    double total = raspberries_total + oranges_total + bananas_total + strawberries_total;

    std::cout << std::fixed << std::setprecision(2) << total << std::endl;

    return 0;
}
