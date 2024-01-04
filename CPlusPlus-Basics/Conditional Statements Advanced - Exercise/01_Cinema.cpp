#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    std::string type_screen_play;
    int number_rows, number_columns;
    double ticket_price = 0;

    std::cin >> type_screen_play >> number_rows >> number_columns;

    if (type_screen_play == "Premiere")
    {
        ticket_price = 12;
    }
    else if (type_screen_play == "Normal")
    {
        ticket_price = 7.50;
    }
    else if (type_screen_play == "Discount")
    {
        ticket_price = 5;
    }

    double total_sum = ticket_price * (number_rows * number_columns);
    std::cout << std::fixed << std::setprecision(2) << total_sum << " leva" << std::endl;

    return 0;
}
