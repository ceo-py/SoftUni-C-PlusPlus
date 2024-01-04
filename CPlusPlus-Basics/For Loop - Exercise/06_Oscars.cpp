#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    std::string actor_name;
    std::getline(std::cin >> std::ws, actor_name);

    double academy_points;
    std::cin >> academy_points;

    int evaluators_number;
    std::cin >> evaluators_number;

    for (int i = 0; i < evaluators_number; ++i)
    {
        std::string name_of_evaluator;
        std::getline(std::cin >> std::ws, name_of_evaluator);

        double points_from_evaluator;
        std::cin >> points_from_evaluator;

        int length_name = name_of_evaluator.length();
        academy_points += length_name * points_from_evaluator / 2;

        if (academy_points > 1250.5)
        {
            std::cout << "Congratulations, " << actor_name << " got a nominee for leading role with " << std::fixed << std::setprecision(1) << academy_points << "!" << std::endl;
            return 0;
        }
    }

    double difference = std::abs(1250.5 - academy_points);
    std::cout << "Sorry, " << actor_name << " you need " << std::fixed << std::setprecision(1) << difference << " more!" << std::endl;

    return 0;
}
