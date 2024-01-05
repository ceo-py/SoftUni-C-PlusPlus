#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    int bought_chrysanthemums, bought_rose, bought_tulips;
    std::string season_type, day_type;

    std::cin >> bought_chrysanthemums >> bought_rose >> bought_tulips >> season_type >> day_type;

    double price_for_making_bouquet = 2;
    double chrysanthemums_price = 0, rose_price = 0, tulips_price = 0;

    if (season_type == "Spring" || season_type == "Summer")
    {
        chrysanthemums_price = 2.00;
        rose_price = 4.10;
        tulips_price = 2.50;
    }
    else if (season_type == "Autumn" || season_type == "Winter")
    {
        chrysanthemums_price = 3.75;
        rose_price = 4.50;
        tulips_price = 4.15;
    }

    int total_bought_flowers = bought_chrysanthemums + bought_rose + bought_tulips;
    double bunch_of_flowers_price = (chrysanthemums_price * bought_chrysanthemums) +
                                    (rose_price * bought_rose) +
                                    (tulips_price * bought_tulips);

    if (day_type == "Y")
    {
        bunch_of_flowers_price *= 1.15;
    }

    if (bought_tulips > 7 && season_type == "Spring")
    {
        bunch_of_flowers_price *= 0.95;
    }

    if (bought_rose >= 10 && season_type == "Winter")
    {
        bunch_of_flowers_price *= 0.90;
    }

    if (total_bought_flowers > 20)
    {
        bunch_of_flowers_price *= 0.80;
    }

    std::cout << std::fixed << std::setprecision(2) << bunch_of_flowers_price + price_for_making_bouquet << std::endl;

    return 0;
}
