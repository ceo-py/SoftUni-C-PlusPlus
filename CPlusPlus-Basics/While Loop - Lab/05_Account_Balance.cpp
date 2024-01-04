#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    double total = 0;
    std::string money_deposit;

    while (true)
    {
        std::cin >> money_deposit;

        if (money_deposit == "NoMoreMoney")
        {
            break;
        }

        double money_deposit_double = std::stod(money_deposit);

        if (money_deposit_double < 0)
        {
            std::cout << "Invalid operation!" << std::endl;
            break;
        }

        total += money_deposit_double;
        std::cout << "Increase: " << std::fixed << std::setprecision(2) << money_deposit_double << std::endl;
    }

    std::cout << "Total: " << std::fixed << std::setprecision(2) << total << std::endl;

    return 0;
}
