#include <iostream>
#include <iomanip>

int main()
{
    int total_people_show_for_examp;
    std::cin >> total_people_show_for_examp;

    double fail_students = 0, between_three_and_four = 0, between_four_and_five = 0, top_students = 0, average_grade = 0;

    for (int i = 1; i <= total_people_show_for_examp; ++i)
    {
        double grade;
        std::cin >> grade;
        average_grade += grade;

        if (grade <= 2.99)
        {
            fail_students += 1;
        }
        else if (grade <= 3.99)
        {
            between_three_and_four += 1;
        }
        else if (grade <= 4.99)
        {
            between_four_and_five += 1;
        }
        else
        {
            top_students += 1;
        }
    }

    average_grade /= total_people_show_for_examp;
    fail_students = (static_cast<double>(fail_students) / total_people_show_for_examp) * 100;
    between_three_and_four = (static_cast<double>(between_three_and_four) / total_people_show_for_examp) * 100;
    between_four_and_five = (static_cast<double>(between_four_and_five) / total_people_show_for_examp) * 100;
    top_students = (static_cast<double>(top_students) / total_people_show_for_examp) * 100;

    std::cout << "Top students: " << std::fixed << std::setprecision(2) << top_students << "%" << std::endl;
    std::cout << "Between 4.00 and 4.99: " << std::fixed << std::setprecision(2) << between_four_and_five << "%" << std::endl;
    std::cout << "Between 3.00 and 3.99: " << std::fixed << std::setprecision(2) << between_three_and_four << "%" << std::endl;
    std::cout << "Fail: " << std::fixed << std::setprecision(2) << fail_students << "%" << std::endl;
    std::cout << "Average: " << std::fixed << std::setprecision(2) << average_grade << std::endl;

    return 0;
}
