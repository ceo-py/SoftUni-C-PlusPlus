#include <iostream>
#include <iomanip>

int main()
{
    int volume_pool, pipe1, pipe2;
    float hours;
    std::cin >> volume_pool >> pipe1 >> pipe2 >> hours;

    float pipe1_bring = pipe1 * hours;
    float pipe2_bring = pipe2 * hours;
    float filled_litters = pipe1_bring + pipe2_bring;

    float pipe1_filled_percent = (pipe1_bring / filled_litters) * 100;
    float pipe2_filled_percent = (pipe2_bring / filled_litters) * 100;

    float filled_percent = (filled_litters / volume_pool) * 100;

    if (filled_litters <= volume_pool)
    {
        std::cout << "The pool is " << std::fixed << std::setprecision(2)
                  << filled_percent << "% full. Pipe 1: " << pipe1_filled_percent
                  << "%. Pipe 2: " << pipe2_filled_percent << "%" << std::endl;
    }
    else
    {
        float over_litters = std::abs(filled_litters - volume_pool);
        std::cout << "For " << std::fixed << std::setprecision(2)
                  << hours << " hours the pool overflows with " << over_litters
                  << " liters." << std::endl;
    }

    return 0;
}
