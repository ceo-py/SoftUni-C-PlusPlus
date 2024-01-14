#include <iostream>
#include <string>

int main()
{
    std::string player_name, field;
    int player_starting_points = 301, successful_shot = 0, unsuccessful_shot = 0;

    std::getline(std::cin, player_name);

    std::getline(std::cin, field);

    while (field != "Retire")
    {
        int points;
        std::cin >> points;
        std::cin.ignore(); // Consume the newline character

        if (field == "Double")
        {
            points *= 2;
        }
        else if (field == "Triple")
        {
            points *= 3;
        }

        if (points <= player_starting_points)
        {
            successful_shot += 1;
            player_starting_points -= points;

            if (player_starting_points == 0)
            {
                std::cout << player_name << " won the leg with " << successful_shot << " shots." << std::endl;
                break;
            }
        }
        else
        {
            unsuccessful_shot += 1;
        }

        std::getline(std::cin, field);
    }

    if (field == "Retire")
    {
        std::cout << player_name << " retired after " << unsuccessful_shot << " unsuccessful shots." << std::endl;
    }

    return 0;
}
