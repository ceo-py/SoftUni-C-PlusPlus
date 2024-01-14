#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    std::string movie_name;
    int number_days, number_tickets;
    double cinema_percent;
    int price_ticket;

    std::getline(std::cin >> std::ws, movie_name);
    std::cin >> number_days >> number_tickets >> cinema_percent >> price_ticket;

    double tickets_for_one_day = number_tickets * cinema_percent;
    double total_revenue = number_days * tickets_for_one_day;
    double cinema_profit = total_revenue * price_ticket / 100;
    double total = total_revenue - cinema_profit;

    std::cout << "The profit from the movie " << movie_name << " is " << std::fixed << std::setprecision(2) << total << " lv." << std::endl;

    return 0;
}
