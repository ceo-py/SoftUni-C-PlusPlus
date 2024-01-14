#include <iostream>
#include <string>

int main()
{
    std::string player_one, player_two;
    int player_one_score = 0, player_two_score = 0;
    std::string player_one_card;

    std::getline(std::cin, player_one);
    std::getline(std::cin, player_two);
    std::getline(std::cin, player_one_card);

    while (player_one_card != "End of game")
    {
        int player_one_card_val = std::stoi(player_one_card);
        int player_two_card = 0;

        std::cin >> player_two_card;

        int difference_score = std::abs(player_one_card_val - player_two_card);

        if (player_one_card_val > player_two_card)
        {
            player_one_score += difference_score;
        }
        else if (player_one_card_val < player_two_card)
        {
            player_two_score += difference_score;
        }
        else
        {
            int additional_player_one_card, additional_player_two_card;
            std::cin >> additional_player_one_card >> additional_player_two_card;

            if (additional_player_one_card > additional_player_two_card)
            {
                std::cout << "Number wars!" << std::endl;
                std::cout << player_one << " is winner with " << player_one_score + difference_score << " points"
                          << std::endl;
                break;
            }
            else if (additional_player_one_card < additional_player_two_card)
            {
                std::cout << "Number wars!" << std::endl;
                std::cout << player_two << " is winner with " << player_two_score + difference_score << " points"
                          << std::endl;
                break;
            }
        }

        std::cin.ignore(); // Ignore the newline character after reading player_two_card
        std::getline(std::cin, player_one_card);
    }

    if (player_one_card == "End of game")
    {
        std::cout << player_one << " has " << player_one_score << " points" << std::endl;
        std::cout << player_two << " has " << player_two_score << " points" << std::endl;
    }

    return 0;
}
