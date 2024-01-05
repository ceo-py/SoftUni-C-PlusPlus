#include <iostream>
#include <string>

int main()
{
    int allowBadGrades;
    std::cin >> allowBadGrades;

    int totalScore = 0;
    std::string task;
    int totalBadGrades = 0;
    int problemsCounter = 0;
    std::string lastProblem;

    while (std::cin >> task && task != "Enough")
    {
        int score;
        std::cin >> score;
        totalScore += score;
        problemsCounter++;

        if (score <= 4)
        {
            totalBadGrades++;

            if (allowBadGrades == totalBadGrades)
            {
                std::cout << "You need a break, " << totalBadGrades << " poor grades." << std::endl;
                return 0;
            }
        }

        lastProblem = task;
    }

    std::cout << "Average score: " << static_cast<double>(totalScore) / problemsCounter << std::endl;
    std::cout << "Number of problems: " << problemsCounter << std::endl;
    std::cout << "Last problem: " << lastProblem << std::endl;

    return 0;
}
