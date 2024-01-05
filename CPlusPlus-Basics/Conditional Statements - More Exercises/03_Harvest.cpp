#include <iostream>
#include <cmath>

int main()
{
    int square_meters_vineyard, liters_needed_wine, workers;
    float square_meters_grapes;

    const float vine_from_vineyard = 0.40;
    const float needed_grapes_for_liter_wine = 2.5;

    std::cin >> square_meters_vineyard >> square_meters_grapes >> liters_needed_wine >> workers;

    float total_grapes = square_meters_vineyard * square_meters_grapes;
    float wine = (vine_from_vineyard * total_grapes) / needed_grapes_for_liter_wine;

    if (wine >= liters_needed_wine)
    {
        float left_wine = wine - liters_needed_wine;
        float litters_wine_per_person = left_wine / workers;

        std::cout << "Good harvest this year! Total wine: " << static_cast<int>(std::floor(wine))
                  << " liters.\n"
                  << static_cast<int>(std::ceil(left_wine))
                  << " liters left -> " << static_cast<int>(std::ceil(litters_wine_per_person))
                  << " liters per person." << std::endl;
    }
    else
    {
        wine = std::abs(wine - liters_needed_wine);
        std::cout << "It will be a tough winter! More " << static_cast<int>(std::floor(wine))
                  << " liters wine needed." << std::endl;
    }

    return 0;
}
