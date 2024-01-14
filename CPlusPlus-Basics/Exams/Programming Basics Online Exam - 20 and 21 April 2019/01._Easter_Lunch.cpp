#include <iostream>
#include <iomanip>

int main()
{
    int cozunaci, numbers_eggs, cookies_kg;
    double cozunaci_price = 3.20;
    double crust_12_eggs_price = 4.35;
    double cookies_kg_price = 5.40;
    double paint_eggs_price = 0.15;

    std::cin >> cozunaci >> numbers_eggs >> cookies_kg;

    double cozunaci_total = cozunaci * cozunaci_price;
    double crust_12_eggs_total = crust_12_eggs_price * numbers_eggs;
    double cookies_kg_total = cookies_kg_price * cookies_kg;
    double paint_eggs_total = paint_eggs_price * numbers_eggs * 12;
    double total = cozunaci_total + crust_12_eggs_total + cookies_kg_total + paint_eggs_total;

    std::cout << std::fixed << std::setprecision(2) << total << std::endl;

    return 0;
}
