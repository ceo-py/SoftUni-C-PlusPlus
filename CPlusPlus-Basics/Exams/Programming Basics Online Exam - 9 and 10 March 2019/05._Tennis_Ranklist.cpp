#include <iostream>
#include <iomanip>

int main()
{
    int number_tournaments, starting_points;
    int tournaments_points = 0, wins = 0;

    std::cin >> number_tournaments >> starting_points;

    for (int tournament = 0; tournament < number_tournaments; ++tournament)
    {
        std::string tournament_output;
        std::cin >> tournament_output;

        if (tournament_output == "W")
        {
            tournaments_points += 2000;
            wins += 1;
        }
        else if (tournament_output == "F")
        {
            tournaments_points += 1200;
        }
        else if (tournament_output == "SF")
        {
            tournaments_points += 720;
        }
    }

    std::cout << "Final points: " << starting_points + tournaments_points << std::endl;
    std::cout << "Average points: " << static_cast<int>(tournaments_points / number_tournaments) << std::endl;
    std::cout << std::fixed << std::setprecision(2) << (wins / static_cast<double>(number_tournaments)) * 100 << "%" << std::endl;

    return 0;
}
