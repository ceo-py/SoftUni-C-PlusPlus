#include <iostream>
#include <cmath>
#include <string>

int main()
{
    std::string movie_serial;
    int movie_seasons, movie_episodes;
    float movie_length;

    std::getline(std::cin >> std::ws, movie_serial); // Input movie name with newline
    std::cin >> movie_seasons >> movie_episodes >> movie_length;

    float episode_with_ads = 0.20 * movie_length;
    float episode_full_time = episode_with_ads + movie_length;
    float extra_time_per_season = movie_seasons * 10;

    float total_watch_time = ((episode_full_time * movie_episodes) * movie_seasons) + extra_time_per_season;

    std::cout << "Total time needed to watch the " << movie_serial << " series is " << static_cast<int>(std::floor(total_watch_time)) << " minutes." << std::endl;

    return 0;
}
