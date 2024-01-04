#include <iostream>

int main()
{
    int pens_packs, marker_packs, detergent_liters;
    double discount;

    std::cin >> pens_packs;
    std::cin >> marker_packs;
    std::cin >> detergent_liters;
    std::cin >> discount;

    discount /= 100;

    double pens_price = 5.80;
    double marker_price = 7.20;
    double detergent_price = 1.20;

    double price_before_discount = (pens_packs * pens_price) + (marker_packs * marker_price) + (detergent_liters * detergent_price);
    double total_price = price_before_discount - price_before_discount * discount;

    std::cout << total_price << std::endl;

    return 0;
}
