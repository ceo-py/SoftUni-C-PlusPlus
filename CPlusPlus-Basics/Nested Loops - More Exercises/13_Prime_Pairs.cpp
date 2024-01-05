#include <iostream>

int main()
{
    int number_one, number_two, number_three, number_four;
    std::cin >> number_one >> number_two >> number_three >> number_four;

    for (int num1 = number_one; num1 <= (number_one + number_three); ++num1)
    {
        if (num1 > 1)
        {
            bool is_prime1 = true;
            for (int i = 2; i <= num1 / 2; ++i)
            {
                if (num1 % i == 0)
                {
                    is_prime1 = false;
                    break;
                }
            }

            if (is_prime1)
            {
                for (int num2 = number_two; num2 <= (number_two + number_four); ++num2)
                {
                    if (num2 > 1)
                    {
                        bool is_prime2 = true;
                        for (int i = 2; i <= num2 / 2; ++i)
                        {
                            if (num2 % i == 0)
                            {
                                is_prime2 = false;
                                break;
                            }
                        }

                        if (is_prime2)
                        {
                            std::cout << num1 << num2 << std::endl;
                        }
                    }
                }
            }
        }
    }

    return 0;
}
