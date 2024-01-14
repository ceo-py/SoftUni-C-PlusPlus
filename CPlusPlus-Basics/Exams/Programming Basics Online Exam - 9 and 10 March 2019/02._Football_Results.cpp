#include <iostream>
#include <string>

int main()
{
    int wins = 0, loses = 0, draws = 0;

    for (int games = 0; games < 3; ++games)
    {
        std::string game_result;
        std::cin >> game_result;

        if (game_result[0] > game_result[2])
        {
            wins++;
        }
        else if (game_result[0] < game_result[2])
        {
            loses++;
        }
        else
        {
            draws++;
        }
    }

    std::cout << "Team won " << wins << " games." << std::endl;
    std::cout << "Team lost " << loses << " games." << std::endl;
    std::cout << "Drawn games: " << draws << std::endl;

    return 0;
}
