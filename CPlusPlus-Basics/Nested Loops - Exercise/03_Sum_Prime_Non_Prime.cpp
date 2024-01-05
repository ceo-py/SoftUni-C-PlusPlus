#include <iostream>
#include <cmath>
#include <string>

int main()
{
    std::string input;
    int prime_sum = 0;
    int none_prime_sum = 0;

    while (true)
    {
        std::cin >> input;

        if (input == "stop")
        {
            break;
        }

        int number = std::stoi(input);

        if (number < 0)
        {
            std::cout << "Number is negative." << std::endl;
            continue;
        }

        if (number == 1)
        {
            none_prime_sum += number;
        }
        else if (number > 1)
        {
            bool is_prime = true;

            for (int i = 2; i <= std::sqrt(number); ++i)
            {
                if (number % i == 0)
                {
                    none_prime_sum += number;
                    is_prime = false;
                    break;
                }
            }

            if (is_prime)
            {
                prime_sum += number;
            }
        }
    }

    std::cout << "Sum of all prime numbers is: " << prime_sum << std::endl;
    std::cout << "Sum of all non prime numbers is: " << none_prime_sum << std::endl;

    return 0;
}
