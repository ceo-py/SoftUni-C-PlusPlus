#include <iostream>

int main()
{
    int numbers_to_check;
    std::cin >> numbers_to_check;

    int p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;

    for (int number = 0; number < numbers_to_check; ++number)
    {
        int input_number;
        std::cin >> input_number;

        if (input_number < 200)
        {
            p1 += 1;
        }
        else if (input_number < 400)
        {
            p2 += 1;
        }
        else if (input_number < 600)
        {
            p3 += 1;
        }
        else if (input_number < 800)
        {
            p4 += 1;
        }
        else
        {
            p5 += 1;
        }
    }

    std::cout << std::fixed;
    std::cout.precision(2);

    std::cout << p1 / static_cast<double>(numbers_to_check) * 100 << "%" << std::endl;
    std::cout << p2 / static_cast<double>(numbers_to_check) * 100 << "%" << std::endl;
    std::cout << p3 / static_cast<double>(numbers_to_check) * 100 << "%" << std::endl;
    std::cout << p4 / static_cast<double>(numbers_to_check) * 100 << "%" << std::endl;
    std::cout << p5 / static_cast<double>(numbers_to_check) * 100 << "%" << std::endl;

    return 0;
}
