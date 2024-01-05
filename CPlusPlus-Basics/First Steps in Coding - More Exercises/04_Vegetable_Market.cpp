#include <iostream>
#include <iomanip>

int main()
{
    double price_for_kg_vegetables, price_for_kg_fruits;
    int obshto_vegetables_kg, obshto_fruits_kg;
    const double euro = 1.94;

    std::cin >> price_for_kg_vegetables >> price_for_kg_fruits >> obshto_vegetables_kg >> obshto_fruits_kg;

    double prihodi = (price_for_kg_vegetables * obshto_vegetables_kg) + (price_for_kg_fruits * obshto_fruits_kg);
    double income = prihodi / euro;

    std::cout << std::fixed << std::setprecision(2) << income << std::endl;

    return 0;
}
