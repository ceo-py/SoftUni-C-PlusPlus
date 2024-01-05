#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    int judges_count;
    std::cin >> judges_count;
    std::cin.ignore(); // Consume the newline character after reading an integer

    std::string presentation_name;
    double total_score = 0;
    int total_presentations = 0;

    while (true)
    {
        std::getline(std::cin, presentation_name);

        if (presentation_name == "Finish")
        {
            break;
        }

        total_presentations += judges_count;
        double current_score = 0;

        for (int score = 0; score < judges_count; ++score)
        {
            double judge_score;
            std::cin >> judge_score;
            current_score += judge_score;
        }

        total_score += current_score;
        std::cout << presentation_name << " - " << std::fixed << std::setprecision(2)
                  << current_score / judges_count << "." << std::endl;

        std::cin.ignore(); // Consume the newline character after reading scores
    }

    std::cout << "Student's final assessment is " << std::fixed << std::setprecision(2)
              << total_score / total_presentations << "." << std::endl;

    return 0;
}
