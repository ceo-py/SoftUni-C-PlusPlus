#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    std::string contract_term;
    std::string contract_type;
    std::string mobile_internet;
    int mounts_to_pay;

    std::cin >> contract_term >> contract_type >> mobile_internet >> mounts_to_pay;

    double tax_to_pay = 0;
    double discount_two_year_contract = 1;

    if (contract_term == "one")
    {
        if (contract_type == "Small")
        {
            tax_to_pay = 9.98;
        }
        else if (contract_type == "Middle")
        {
            tax_to_pay = 18.99;
        }
        else if (contract_type == "Large")
        {
            tax_to_pay = 25.98;
        }
        else if (contract_type == "ExtraLarge")
        {
            tax_to_pay = 35.99;
        }
    }
    else if (contract_term == "two")
    {
        if (contract_type == "Small")
        {
            tax_to_pay = 8.58;
        }
        else if (contract_type == "Middle")
        {
            tax_to_pay = 17.09;
        }
        else if (contract_type == "Large")
        {
            tax_to_pay = 23.59;
        }
        else if (contract_type == "ExtraLarge")
        {
            tax_to_pay = 31.79;
        }
    }

    if (mobile_internet == "yes")
    {
        if (tax_to_pay <= 10)
        {
            tax_to_pay += 5.50;
        }
        else if (tax_to_pay <= 30)
        {
            tax_to_pay += 4.35;
        }
        else if (tax_to_pay > 30)
        {
            tax_to_pay += 3.85;
        }
    }

    double total_price_to_pay = tax_to_pay * mounts_to_pay;

    if (contract_term == "two")
    {
        discount_two_year_contract = 0.9625;
    }

    total_price_to_pay = total_price_to_pay * discount_two_year_contract;

    std::cout << std::fixed << std::setprecision(2) << total_price_to_pay << " lv." << std::endl;

    return 0;
}
