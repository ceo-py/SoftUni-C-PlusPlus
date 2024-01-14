#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    int time_for_pictures, number_scenes, time_for_a_scenes;

    std::cin >> time_for_pictures >> number_scenes >> time_for_a_scenes;

    double preparing_terrain = time_for_pictures * 0.15;
    double time_take_to_shoot_the_scenes = number_scenes * time_for_a_scenes;
    double time_needed = time_take_to_shoot_the_scenes + preparing_terrain;

    double time_left = std::abs(time_for_pictures - time_needed);

    if (time_for_pictures <= time_needed)
    {
        std::cout << "Time is up! To complete the movie you need " << std::round(time_left) << " minutes." << std::endl;
    }
    else
    {
        std::cout << "You managed to finish the movie on time! You have " << std::round(time_left) << " minutes left!" << std::endl;
    }

    return 0;
}
