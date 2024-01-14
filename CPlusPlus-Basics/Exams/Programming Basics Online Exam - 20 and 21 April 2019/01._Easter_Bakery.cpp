#include <iostream>
#include <iomanip>

int main()
{
    double flour_kilogram, flour_kilograms, sugar_kilograms;
    int eggshells_number, yeast_packets;

    std::cin >> flour_kilogram >> flour_kilograms >> sugar_kilograms >> eggshells_number >> yeast_packets;

    double sugar_kg_price = flour_kilogram * 0.75;
    double eggshells_price = flour_kilogram * 1.10;
    double yeast_price = sugar_kg_price * 0.20;

    double flour_total_sum = flour_kilogram * flour_kilograms;
    double sugar_total_sum = sugar_kg_price * sugar_kilograms;
    double eggshells_sum = eggshells_price * eggshells_number;
    double yeast_sum = yeast_price * yeast_packets;

    double total_price = flour_total_sum + sugar_total_sum + eggshells_sum + yeast_sum;

    std::cout << std::fixed << std::setprecision(2) << total_price << std::endl;

    return 0;
}
