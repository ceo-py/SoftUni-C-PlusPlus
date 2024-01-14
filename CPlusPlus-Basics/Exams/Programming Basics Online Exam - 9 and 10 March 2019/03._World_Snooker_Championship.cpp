#include <iostream>
#include <string>
#include <iomanip>

int main() {
    std::string event, ticket_type, picture_with_trophy;
    int number_tickets;
    double ticket_price = 0, picture_with_trophy_price = 40;

    std::getline(std::cin, event);
    std::getline(std::cin, ticket_type);
    std::cin >> number_tickets;
    std::cin >> std::ws; 
    std::getline(std::cin, picture_with_trophy);

    if (ticket_type == "Standard") {
        if (event == "Quarter final") {
            ticket_price = 55.50;
        } else if (event == "Semi final") {
            ticket_price = 75.88;
        } else if (event == "Final") {
            ticket_price = 110.10;
        }
    } else if (ticket_type == "Premium") {
        if (event == "Quarter final") {
            ticket_price = 105.20;
        } else if (event == "Semi final") {
            ticket_price = 125.22;
        } else if (event == "Final") {
            ticket_price = 160.66;
        }
    } else if (ticket_type == "VIP") {
        if (event == "Quarter final") {
            ticket_price = 118.90;
        } else if (event == "Semi final") {
            ticket_price = 300.40;
        } else if (event == "Final") {
            ticket_price = 400.0;
        }
    }

    double total_sum = ticket_price * number_tickets;

    if (total_sum > 4000) {
        total_sum *= 0.75;
        picture_with_trophy_price = 0;
    } else if (total_sum > 2500) {
        total_sum *= 0.90;
    }

    if (picture_with_trophy == "Y") {
        total_sum += number_tickets * picture_with_trophy_price;
    }

    std::cout << std::fixed << std::setprecision(2) << total_sum << std::endl;

    return 0;
}
