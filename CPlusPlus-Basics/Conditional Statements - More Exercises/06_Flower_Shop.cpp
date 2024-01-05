#include <iostream>
#include <cmath>

int main()
{
    int number_magnolias, number_hyacinths, number_rose, number_cacti;
    double gift_price;

    std::cin >> number_magnolias >> number_hyacinths >> number_rose >> number_cacti >> gift_price;

    double magnolias_price = 3.25;
    double hyacinths_price = 4.0;
    double rose_price = 3.50;
    double cacti_price = 8.0;
    double taxes = 0.5;

    double total_sum = number_magnolias * magnolias_price + number_hyacinths * hyacinths_price +
                       number_rose * rose_price + number_cacti * cacti_price;

    double total_sum_after_taxes = total_sum - ((total_sum * taxes) / 10);

    if (total_sum_after_taxes < gift_price)
    {
        total_sum_after_taxes = gift_price - total_sum_after_taxes;
        std::cout << "She will have to borrow " << std::ceil(total_sum_after_taxes) << " leva." << std::endl;
    }
    else
    {
        total_sum_after_taxes = total_sum_after_taxes - gift_price;
        std::cout << "She is left with " << std::floor(total_sum_after_taxes) << " leva." << std::endl;
    }

    return 0;
}
