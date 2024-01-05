#include <iostream>

int main()
{
    int number_one, number_two, number_three;
    std::cin >> number_one >> number_two >> number_three;

    for (int hundreds = 1; hundreds <= number_one; ++hundreds)
    {
        for (int tens = 1; tens <= number_two; ++tens)
        {
            for (int units = 1; units <= number_three; ++units)
            {
                if (hundreds % 2 == 0 && units % 2 == 0 && (tens == 2 || tens == 3 || tens == 5 || tens == 7))
                {
                    std::cout << hundreds << " " << tens << " " << units << std::endl;
                }
            }
        }
    }

    return 0;
}
