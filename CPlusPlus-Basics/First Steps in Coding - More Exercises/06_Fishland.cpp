#include <iostream>
#include <iomanip>

int main()
{
    double mackerel_price_per_kg, sprats_price_per_kg, bonito_kg, horse_mackerel_kg;
    int mussels_kg;

    std::cin >> mackerel_price_per_kg >> sprats_price_per_kg >> bonito_kg >> horse_mackerel_kg >> mussels_kg;

    double mussels_kg_price = 7.50;
    double total_mussels = mussels_kg * mussels_kg_price;

    double bonito_kg_price = (((mackerel_price_per_kg * 0.60) + mackerel_price_per_kg) * bonito_kg);
    double horse_mackerel_price = (((sprats_price_per_kg * 0.80) + sprats_price_per_kg) * horse_mackerel_kg);

    double total_bill = total_mussels + bonito_kg_price + horse_mackerel_price;

    std::cout << std::fixed << std::setprecision(2) << total_bill << std::endl;

    return 0;
}
