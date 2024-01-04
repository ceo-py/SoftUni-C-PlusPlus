#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    int tournaments_count, starting_points;
    std::cin >> tournaments_count >> starting_points;

    int tournament_win_count = 0;
    int total_points = starting_points;

    for (int i = 0; i < tournaments_count; ++i)
    {
        std::string tournament_finish;
        std::cin >> tournament_finish;

        if (tournament_finish == "W")
        {
            total_points += 2000;
            tournament_win_count += 1;
        }
        else if (tournament_finish == "F")
        {
            total_points += 1200;
        }
        else if (tournament_finish == "SF")
        {
            total_points += 720;
        }
    }

    double average_points = static_cast<double>(total_points - starting_points) / tournaments_count;
    double tournament_win_percent = (static_cast<double>(tournament_win_count) / tournaments_count) * 100;

    std::cout << "Final points: " << total_points << std::endl;
    std::cout << "Average points: " << static_cast<int>(average_points) << std::endl;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << tournament_win_percent << "%" << std::endl;

    return 0;
}
