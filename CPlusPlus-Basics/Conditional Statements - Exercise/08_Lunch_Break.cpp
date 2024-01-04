#include <iostream>
#include <cmath>
#include <string>

int main()
{
    std::string movie;
    int movie_time, break_time;

    std::getline(std::cin >> std::ws, movie);

    std::cin >> movie_time >> break_time;

    double lunch_time = break_time / 8.0;
    double relax_time = break_time / 4.0;

    double available_time = break_time - lunch_time - relax_time;
    int diff = ceil(std::abs(movie_time - available_time));

    if (movie_time > available_time)
    {
        std::cout << "You don't have enough time to watch " << movie << ", you need " << diff << " more minutes." << std::endl;
    }
    else
    {
        std::cout << "You have enough time to watch " << movie << " and left with " << diff << " minutes free time." << std::endl;
    }

    return 0;
}
