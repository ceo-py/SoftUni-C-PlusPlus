#include <iostream>
#include <string>

int main() {
    int vouchers;

    std::cin >> vouchers;
    std::cin.ignore();

    int total_money_left = vouchers;
    int movie_tickets_count = 0;
    int items_count = 0;
    std::string items;

    while (true) {
        int movie_ticket_price = 0;
        int items_price = 0;

        std::getline(std::cin, items);

        if (items == "End" || total_money_left < 0) {
            std::cout << movie_tickets_count << "\n" << items_count << std::endl;
            break;
        }

        int items_length = items.length();

        if (items_length > 8) {
            movie_ticket_price = static_cast<int>(items[0]) + static_cast<int>(items[1]);
            total_money_left -= movie_ticket_price;

            if (total_money_left >= 0) {
                movie_tickets_count++;
            } else {
                std::cout << movie_tickets_count << "\n" << items_count << std::endl;
                break;
            }

        } else if (items_length <= 8) {
            items_price = static_cast<int>(items[0]);
            total_money_left -= items_price;

            if (total_money_left >= 0) {
                items_count++;
            } else {
                std::cout << movie_tickets_count << "\n" << items_count << std::endl;
                break;
            }
        }
    }

    return 0;
}
