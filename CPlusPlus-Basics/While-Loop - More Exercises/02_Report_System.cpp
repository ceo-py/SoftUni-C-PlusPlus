#include <iostream>
#include <string>
#include <iomanip>

int main() {
    int expected_sum_to_be_collected;
    std::cin >> expected_sum_to_be_collected;

    std::string command;
    int payment_type = 0;
    int cash_payment = 0;
    int card_payment = 0;
    int cash_count = 0;
    int card_count = 0;
    int product_price;

    while (std::cin >> command && command != "End") {
        payment_type += 1;
        product_price = std::stoi(command);

        if ((product_price > 100 && payment_type == 1) || (product_price <= 10 && payment_type == 2)) {
            std::cout << "Error in transaction!" << std::endl;
        } else {
            if (product_price <= 100 && payment_type == 1) {
                cash_payment += product_price;
                cash_count += 1;
                std::cout << "Product sold!" << std::endl;
            } else if (product_price > 10 && payment_type == 2) {
                card_payment += product_price;
                card_count += 1;
                std::cout << "Product sold!" << std::endl;
            }
        }

        int total_payment = card_payment + cash_payment;
        if (total_payment >= expected_sum_to_be_collected) {
            std::cout << "Average CS: " << std::fixed << std::setprecision(2) << static_cast<double>(cash_payment) / cash_count << std::endl;
            std::cout << "Average CC: " << std::fixed << std::setprecision(2)<< static_cast<double>(card_payment) / card_count << std::endl;
            break;
        }

        if (payment_type == 2) {
            payment_type = 0;
        }
    }

    if (expected_sum_to_be_collected > cash_payment + card_payment) {
        std::cout << "Failed to collect required money for charity." << std::endl;
    }

    return 0;
}
