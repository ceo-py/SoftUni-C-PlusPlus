#include <iostream>

int main()
{
    double deposit;
    int deposit_term_in_months;
    double yearly_percent;

    std::cout << "Enter deposit amount: ";
    std::cin >> deposit;

    std::cout << "Enter deposit term in months: ";
    std::cin >> deposit_term_in_months;

    std::cout << "Enter yearly interest rate (as a percentage): ";
    std::cin >> yearly_percent;

    yearly_percent /= 100;

    double sum_deposit = deposit + deposit_term_in_months * ((deposit * yearly_percent) / 12);

    std::cout << sum_deposit << std::endl;

    return 0;
}
