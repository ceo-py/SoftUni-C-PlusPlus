#include <iostream>
#include <string>

int main()
{
    std::string product, city;
    float quantity, product_price = 0;

    std::cin >> product >> city >> quantity;

    if (city == "Sofia")
    {
        if (product == "coffee")
        {
            product_price = 0.50;
        }
        else if (product == "water")
        {
            product_price = 0.80;
        }
        else if (product == "beer")
        {
            product_price = 1.20;
        }
        else if (product == "sweets")
        {
            product_price = 1.45;
        }
        else if (product == "peanuts")
        {
            product_price = 1.60;
        }
    }
    else if (city == "Plovdiv")
    {
        if (product == "coffee")
        {
            product_price = 0.40;
        }
        else if (product == "water")
        {
            product_price = 0.70;
        }
        else if (product == "beer")
        {
            product_price = 1.15;
        }
        else if (product == "sweets")
        {
            product_price = 1.30;
        }
        else if (product == "peanuts")
        {
            product_price = 1.50;
        }
    }
    else if (city == "Varna")
    {
        if (product == "coffee")
        {
            product_price = 0.45;
        }
        else if (product == "water")
        {
            product_price = 0.70;
        }
        else if (product == "beer")
        {
            product_price = 1.10;
        }
        else if (product == "sweets")
        {
            product_price = 1.35;
        }
        else if (product == "peanuts")
        {
            product_price = 1.55;
        }
    }

    float total_sum = product_price * quantity;

    std::cout << total_sum << std::endl;

    return 0;
}
