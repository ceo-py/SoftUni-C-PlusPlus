#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    std::string country, apparatus;
    double difficulty = 0, turn = 0;

    std::cin >> country >> apparatus;

    if (apparatus == "ribbon")
    {
        if (country == "Russia")
        {
            difficulty = 9.100;
            turn = 9.400;
        }
        else if (country == "Bulgaria")
        {
            difficulty = 9.600;
            turn = 9.400;
        }
        else if (country == "Italy")
        {
            difficulty = 9.200;
            turn = 9.500;
        }
    }
    else if (apparatus == "hoop")
    {
        if (country == "Russia")
        {
            difficulty = 9.300;
            turn = 9.800;
        }
        else if (country == "Bulgaria")
        {
            difficulty = 9.550;
            turn = 9.750;
        }
        else if (country == "Italy")
        {
            difficulty = 9.450;
            turn = 9.350;
        }
    }
    else if (apparatus == "rope")
    {
        if (country == "Russia")
        {
            difficulty = 9.600;
            turn = 9.000;
        }
        else if (country == "Bulgaria")
        {
            difficulty = 9.500;
            turn = 9.400;
        }
        else if (country == "Italy")
        {
            difficulty = 9.700;
            turn = 9.150;
        }
    }

    double total_score = difficulty + turn;
    double difference_to_max_score = 20 - total_score;

    std::cout << "The team of " << country << " get " << std::fixed << std::setprecision(3) << total_score
              << " on " << apparatus << "." << std::endl;
    std::cout << std::fixed << std::setprecision(2) << (difference_to_max_score / 20) * 100 << "%" << std::endl;

    return 0;
}
