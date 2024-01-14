#include <iostream>
#include <string>

int main()
{
    int egg_starting_number, egg_number, sold_eggs = 0;
    std::string command;

    std::cin >> egg_starting_number >> command;

    while (command != "Close")
    {
        std::cin >> egg_number;

        if (command == "Buy")
        {
            egg_starting_number -= egg_number;
            sold_eggs += egg_number;

            if (egg_starting_number < 0)
            {
                std::cout << "Not enough eggs in store!" << std::endl;
                std::cout << "You can buy only " << egg_starting_number + egg_number << "." << std::endl;
                break;
            }
        }
        else if (command == "Fill")
        {
            egg_starting_number += egg_number;
        }

        std::cin >> command;
    }

    if (command == "Close")
    {
        std::cout << "Store is closed!" << std::endl;
        std::cout << sold_eggs << " eggs sold." << std::endl;
    }

    return 0;
}
