#include <iostream>
#include <string>

int main()
{
    int open_tab_browser;
    std::cin >> open_tab_browser;

    int salary;
    std::cin >> salary;

    for (int tab_number = 0; tab_number < open_tab_browser; ++tab_number)
    {
        std::string tab;
        std::cin >> tab;

        if (tab == "Facebook")
        {
            salary -= 150;
        }
        else if (tab == "Instagram")
        {
            salary -= 100;
        }
        else if (tab == "Reddit")
        {
            salary -= 50;
        }

        if (salary <= 0)
        {
            std::cout << "You have lost your salary." << std::endl;
            break;
        }
    }

    if (salary > 0)
    {
        std::cout << salary << std::endl;
    }

    return 0;
}
