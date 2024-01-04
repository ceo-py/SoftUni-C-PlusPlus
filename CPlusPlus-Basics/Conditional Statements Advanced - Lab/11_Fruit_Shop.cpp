#include <iostream>
#include <iomanip>


int main()
{
    std::string fruit, day_of_the_week;
    float fruit_amount, price = 0;
    bool correct_data = true;

    std::cin >> fruit >> day_of_the_week >> fruit_amount;

    if (day_of_the_week == "Monday" || day_of_the_week == "Tuesday" || day_of_the_week == "Wednesday" ||
        day_of_the_week == "Thursday" || day_of_the_week == "Friday")
    {
        if (fruit == "banana")
        {
            price = fruit_amount * 2.50;
        }
        else if (fruit == "apple")
        {
            price = fruit_amount * 1.20;
        }
        else if (fruit == "orange")
        {
            price = fruit_amount * 0.85;
        }
        else if (fruit == "grapefruit")
        {
            price = fruit_amount * 1.45;
        }
        else if (fruit == "kiwi")
        {
            price = fruit_amount * 2.70;
        }
        else if (fruit == "pineapple")
        {
            price = fruit_amount * 5.50;
        }
        else if (fruit == "grapes")
        {
            price = fruit_amount * 3.85;
        }
        else
        {
            correct_data = false;
        }
    }
    else if (day_of_the_week == "Saturday" || day_of_the_week == "Sunday")
    {
        if (fruit == "banana")
        {
            price = fruit_amount * 2.70;
        }
        else if (fruit == "apple")
        {
            price = fruit_amount * 1.25;
        }
        else if (fruit == "orange")
        {
            price = fruit_amount * 0.90;
        }
        else if (fruit == "grapefruit")
        {
            price = fruit_amount * 1.60;
        }
        else if (fruit == "kiwi")
        {
            price = fruit_amount * 3.00;
        }
        else if (fruit == "pineapple")
        {
            price = fruit_amount * 5.60;
        }
        else if (fruit == "grapes")
        {
            price = fruit_amount * 4.20;
        }
        else
        {
            correct_data = false;
        }
    }
    else
    {
        correct_data = false;
    }

    if (correct_data)
    {
        std::cout << std::fixed << std::setprecision(2) << price << std::endl;
    }
    else
    {
        std::cout << "error" << std::endl;
    }

    return 0;
}
