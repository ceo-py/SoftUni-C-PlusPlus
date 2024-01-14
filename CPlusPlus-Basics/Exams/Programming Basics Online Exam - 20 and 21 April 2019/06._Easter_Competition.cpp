#include <iostream>
#include <vector>
#include <string>

int main()
{
    int cozunak_numbers;
    std::cin >> cozunak_numbers;

    int baker_best_score = 0;
    std::string baker_best_name;

    for (int cozunak_number = 0; cozunak_number < cozunak_numbers; cozunak_number++)
    {
        std::string baker_name;
        int current_baker_score = 0;

        std::cin >> baker_name;

        std::string score;
        while (std::cin >> score)
        {
            if (score == "Stop")
            {
                break;
            }
            current_baker_score += std::stoi(score);
        }

        std::cout << baker_name << " has " << current_baker_score << " points." << std::endl;

        if (current_baker_score > baker_best_score)
        {
            baker_best_name = baker_name;
            baker_best_score = current_baker_score;
            std::cout << baker_best_name << " is the new number 1!" << std::endl;
        }
    }

    std::cout << baker_best_name << " won competition with " << baker_best_score << " points!" << std::endl;

    return 0;
}
