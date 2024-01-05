#include <iostream>
#include <cmath>

int main()
{
    int number_days, left_foot_inkg;
    double food_for_dog_per_kg, food_for_cat_per_kg, food_for_turtle_per_grams;

    std::cin >> number_days >> left_foot_inkg >> food_for_dog_per_kg >> food_for_cat_per_kg >> food_for_turtle_per_grams;

    double dog_food_needed = number_days * food_for_dog_per_kg;
    double cat_food_needed = number_days * food_for_cat_per_kg;
    double turtle_food_needed = (number_days * food_for_turtle_per_grams) / 1000.0;

    double total_food = left_foot_inkg - (dog_food_needed + cat_food_needed + turtle_food_needed);

    if (total_food >= 0)
    {
        std::cout << static_cast<int>(std::floor(total_food)) << " kilos of food left." << std::endl;
    }
    else
    {
        std::cout << static_cast<int>(std::ceil(std::abs(total_food))) << " more kilos of food are needed." << std::endl;
    }

    return 0;
}
