#include <iostream>
#include <iomanip>

int main()
{
    int stadium_capacity, number_fans;
    std::cin >> stadium_capacity >> number_fans;

    int a_sector = 0, b_sector = 0, v_sector = 0, g_sector = 0;

    for (int i = 1; i <= number_fans; ++i)
    {
        char sector_type;
        std::cin >> sector_type;

        switch (sector_type)
        {
        case 'A':
            a_sector += 1;
            break;
        case 'B':
            b_sector += 1;
            break;
        case 'V':
            v_sector += 1;
            break;
        case 'G':
            g_sector += 1;
            break;
        }
    }

    double a_percentage = (static_cast<double>(a_sector) / number_fans) * 100;
    double b_percentage = (static_cast<double>(b_sector) / number_fans) * 100;
    double v_percentage = (static_cast<double>(v_sector) / number_fans) * 100;
    double g_percentage = (static_cast<double>(g_sector) / number_fans) * 100;
    double total_fans_on_stadium = (static_cast<double>(number_fans) / stadium_capacity) * 100;

    std::cout << std::fixed << std::setprecision(2) << a_percentage << "%" << std::endl;
    std::cout << std::fixed << std::setprecision(2) << b_percentage << "%" << std::endl;
    std::cout << std::fixed << std::setprecision(2) << v_percentage << "%" << std::endl;
    std::cout << std::fixed << std::setprecision(2) << g_percentage << "%" << std::endl;
    std::cout << std::fixed << std::setprecision(2) << total_fans_on_stadium << "%" << std::endl;

    return 0;
}
