#include <iostream>
#include <string>


int main()
{
    int number;
    std::cin >> number;

    std::string guessed_passwords = "";
    int counter = 0;

    for (int a = 1; a < 10; ++a)
    {
        for (int b = 1; b < 10; ++b)
        {
            for (int c = 1; c < 10; ++c)
            {
                for (int d = 1; d < 10; ++d)
                {
                    if (a * b + c * d == number && a < b && c > d)
                    {
                        std::cout << a << b << c << d << " ";
                        counter += 1;

                        if (counter == 4)
                        {
                            guessed_passwords = std::to_string(a) + std::to_string(b) + std::to_string(c) + std::to_string(d);
                        }
                    }
                }
            }
        }
    }

    if (counter >= 4)
    {
        std::cout << "\nPassword: " << guessed_passwords << std::endl;
    }
    else
    {
        std::cout << "\nNo!" << std::endl;
    }

    return 0;
}
