#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    std::string season, group_type, sport = "";
    int number_students, number_sleeps;
    double price = 0, discount = 1;

    std::cin >> season >> group_type >> number_students >> number_sleeps;

    if (group_type == "boys" || group_type == "girls")
    {
        if (season == "Winter")
        {
            price = 9.60;
        }
        else if (season == "Spring")
        {
            price = 7.20;
        }
        else if (season == "Summer")
        {
            price = 15.0;
        }
    }
    else if (group_type == "mixed")
    {
        if (season == "Winter")
        {
            price = 10.0;
        }
        else if (season == "Spring")
        {
            price = 9.50;
        }
        else if (season == "Summer")
        {
            price = 20.0;
        }
    }

    if (number_students >= 50)
    {
        discount = 0.50;
    }
    else if (number_students >= 20)
    {
        discount = 0.85;
    }
    else if (number_students >= 10)
    {
        discount = 0.95;
    }

    if (group_type == "girls")
    {
        if (season == "Winter")
        {
            sport = "Gymnastics";
        }
        else if (season == "Spring")
        {
            sport = "Athletics";
        }
        else if (season == "Summer")
        {
            sport = "Volleyball";
        }
    }
    else if (group_type == "boys")
    {
        if (season == "Winter")
        {
            sport = "Judo";
        }
        else if (season == "Spring")
        {
            sport = "Tennis";
        }
        else if (season == "Summer")
        {
            sport = "Football";
        }
    }
    else if (group_type == "mixed")
    {
        if (season == "Winter")
        {
            sport = "Ski";
        }
        else if (season == "Spring")
        {
            sport = "Cycling";
        }
        else if (season == "Summer")
        {
            sport = "Swimming";
        }
    }

    double total_sum = ((number_students * price) * number_sleeps) * discount;

    std::cout << sport << " " << std::fixed << std::setprecision(2) << total_sum << " lv." << std::endl;

    return 0;
}
