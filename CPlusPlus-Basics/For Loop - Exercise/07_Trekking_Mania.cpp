#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    int number_groups;
    std::cin >> number_groups;

    int five_people_groups = 0, six_to_twelve_groups = 0, thirteen_people_groups = 0;
    int twenty_six_people_groups = 0, over_forty_one_people_groups = 0;
    int total_people = 0, total_musala = 0, total_monblan = 0;
    int total_kilimandjaro = 0, total_ktwo = 0, total_everest = 0;

    for (int i = 0; i < number_groups; ++i)
    {
        int group;
        std::cin >> group;

        total_people += group;

        if (group <= 5)
        {
            five_people_groups += 1;
            total_musala += group;
        }
        else if (group > 5 && group <= 12)
        {
            six_to_twelve_groups += 1;
            total_monblan += group;
        }
        else if (group > 12 && group <= 25)
        {
            thirteen_people_groups += 1;
            total_kilimandjaro += group;
        }
        else if (group > 25 && group <= 40)
        {
            twenty_six_people_groups += 1;
            total_ktwo += group;
        }
        else if (group > 40)
        {
            over_forty_one_people_groups += 1;
            total_everest += group;
        }
    }

    double musala = static_cast<double>(total_musala) / total_people * 100;
    double monblan = static_cast<double>(total_monblan) / total_people * 100;
    double kilimandjaro = static_cast<double>(total_kilimandjaro) / total_people * 100;
    double ktwo = static_cast<double>(total_ktwo) / total_people * 100;
    double everest = static_cast<double>(total_everest) / total_people * 100;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << musala << "%\n"
              << monblan << "%\n"
              << kilimandjaro << "%\n"
              << ktwo << "%\n"
              << everest << "%" << std::endl;

    return 0;
}
