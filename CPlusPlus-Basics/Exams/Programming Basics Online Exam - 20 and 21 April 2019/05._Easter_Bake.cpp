#include <iostream>
#include <cmath>

int main()
{
    int cozunak_number;
    std::cin >> cozunak_number;

    int sugar_max_spend = 0;
    int flour_max_spend = 0;
    int sugar_total = 0;
    int flour_total = 0;

    for (int cozunak = 0; cozunak < cozunak_number; ++cozunak)
    {
        int sugar_spend, flour_spend;
        std::cin >> sugar_spend >> flour_spend;

        sugar_total += sugar_spend;
        flour_total += flour_spend;

        if (sugar_spend > sugar_max_spend)
        {
            sugar_max_spend = sugar_spend;
        }

        if (flour_spend > flour_max_spend)
        {
            flour_max_spend = flour_spend;
        }
    }

    int sugar_used = std::ceil(static_cast<double>(sugar_total) / 950);
    int flour_used = std::ceil(static_cast<double>(flour_total) / 750);

    std::cout << "Sugar: " << sugar_used << std::endl;
    std::cout << "Flour: " << flour_used << std::endl;
    std::cout << "Max used flour is " << flour_max_spend << " grams, max used sugar is " << sugar_max_spend << " grams." << std::endl;

    return 0;
}
