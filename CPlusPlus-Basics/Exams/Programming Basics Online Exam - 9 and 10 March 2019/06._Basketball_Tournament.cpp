#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    int points = 0;
    double wins = 0;
    double loses = 0;

    while (true)
    {
        std::string name_of_the_team;
        std::getline(std::cin, name_of_the_team);

        if (name_of_the_team == "End of tournaments")
        {
            double total = wins + loses;
            wins = (wins / total) * 100;
            loses = (loses / total) * 100;

            std::cout << std::fixed << std::setprecision(2) << wins << "% matches win" << std::endl;
            std::cout << std::fixed << std::setprecision(2) << loses << "% matches lost" << std::endl;

            break;
        }
        else
        {
            int games_played;
            std::cin >> games_played;
            std::cin.ignore();

            for (int game = 1; game <= games_played; ++game)
            {
                int result_one, result_two;
                std::cin >> result_one >> result_two;
                std::cin.ignore();

                points = std::abs(result_one - result_two);

                if (result_one > result_two)
                {
                    std::cout << "Game " << game << " of tournament " << name_of_the_team << ": win with " << points << " points." << std::endl;
                    points = 0;
                    wins += 1;
                }
                else
                {
                    std::cout << "Game " << game << " of tournament " << name_of_the_team << ": lost with " << points << " points." << std::endl;
                    points = 0;
                    loses += 1;
                }
            }
        }
    }

    return 0;
}
