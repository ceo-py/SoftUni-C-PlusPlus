#include <iostream>
#include <string>

int main()
{
    int player_one_eggs, player_two_eggs;
    std::string command;

    std::cin >> player_one_eggs >> player_two_eggs >> command;

    while (command != "End")
    {
        if (command == "one")
        {
            player_two_eggs -= 1;
            if (player_two_eggs == 0)
            {
                std::cout << "Player two is out of eggs. Player one has " << player_one_eggs << " eggs left." << std::endl;
                break;
            }
        }
        else if (command == "two")
        {
            player_one_eggs -= 1;
            if (player_one_eggs == 0)
            {
                std::cout << "Player one is out of eggs. Player two has " << player_two_eggs << " eggs left." << std::endl;
                break;
            }
        }
        std::cin >> command;
    }

    if (command == "End")
    {
        std::cout << "Player one has " << player_one_eggs << " eggs left." << std::endl;
        std::cout << "Player two has " << player_two_eggs << " eggs left." << std::endl;
    }

    return 0;
}
