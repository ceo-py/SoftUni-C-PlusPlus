#include <iostream>

int main()
{
    int bottles;
    std::cin >> bottles;

    int liquid = bottles * 750;
    int day_count = 0, pots_count = 0, dish_count = 0;

    while (true)
    {
        int utensils;
        std::string command;
        std::cin >> command;

        if (command == "End")
        {
            std::cout << "Detergent was enough!" << std::endl;
            std::cout << dish_count << " dishes and " << pots_count << " pots were washed." << std::endl;
            std::cout << "Leftover detergent " << liquid << " ml." << std::endl;
            break;
        }

        utensils = std::stoi(command);
        day_count++;

        if (day_count % 3 == 0)
        {
            liquid -= utensils * 15;
            pots_count += utensils;
        }
        else
        {
            liquid -= utensils * 5;
            dish_count += utensils;
        }

        if (liquid < 0)
        {
            std::cout << "Not enough detergent, " << abs(liquid) << " ml. more necessary!" << std::endl;
            break;
        }
    }

    return 0;
}
