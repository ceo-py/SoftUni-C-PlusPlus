#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    int allow_bad_grades;
    std::cin >> allow_bad_grades;
    std::cin.ignore();

    int total_score = 0;
    std::string task;
    int total_bad_grades = 0;
    int problems_counter = 0;
    std::string last_problem;

    while (true)
    {
        std::getline(std::cin, task);

        if (task == "Enough")
        {
            double average_score = static_cast<double>(total_score) / problems_counter;
            std::cout << std::fixed << std::setprecision(2);
            std::cout << "Average score: " << average_score << "\nNumber of problems: "
                      << problems_counter << "\nLast problem: " << last_problem << std::endl;
            break;
        }

        int score;
        std::cin >> score;
        std::cin.ignore();
        total_score += score;
        problems_counter++;

        if (score <= 4)
        {
            total_bad_grades++;

            if (allow_bad_grades == total_bad_grades)
            {
                std::cout << "You need a break, " << total_bad_grades << " poor grades." << std::endl;
                break;
            }
        }

        last_problem = task;
    }

    return 0;
}
