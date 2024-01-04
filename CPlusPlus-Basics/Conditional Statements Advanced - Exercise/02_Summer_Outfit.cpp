#include <iostream>
#include <string>

int main()
{
    int degrees;
    std::string time_of_the_day, outfit, shoes;

    std::cin >> degrees >> time_of_the_day;

    if (10 <= degrees && degrees <= 18)
    {
        if (time_of_the_day == "Morning")
        {
            outfit = "Sweatshirt";
            shoes = "Sneakers";
        }
        else if (time_of_the_day == "Afternoon" || time_of_the_day == "Evening")
        {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
    }
    else if (degrees <= 24)
    {
        if (time_of_the_day == "Morning")
        {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
        else if (time_of_the_day == "Afternoon")
        {
            outfit = "T-Shirt";
            shoes = "Sandals";
        }
        else if (time_of_the_day == "Evening")
        {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
    }
    else if (degrees >= 25)
    {
        if (time_of_the_day == "Morning")
        {
            outfit = "T-Shirt";
            shoes = "Sandals";
        }
        else if (time_of_the_day == "Afternoon")
        {
            outfit = "Swim Suit";
            shoes = "Barefoot";
        }
        else if (time_of_the_day == "Evening")
        {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
    }

    std::cout << "It's " << degrees << " degrees, get your " << outfit << " and " << shoes << "." << std::endl;

    return 0;
}
