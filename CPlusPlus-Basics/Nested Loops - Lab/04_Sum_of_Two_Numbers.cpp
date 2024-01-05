#include <iostream>

int main()
{
    int number, number_end, magic_number;
    std::cin >> number >> number_end >> magic_number;

    int combinations_count = 0;
    bool stop_loop = false;

    for (int x1 = number; x1 <= number_end && !stop_loop; ++x1)
    {
        for (int x2 = number; x2 <= number_end; ++x2)
        {
            combinations_count += 1;
            if (x1 + x2 == magic_number)
            {
                int total = x1 + x2;
                stop_loop = true;
                std::cout << "Combination N:" << combinations_count << " (" << x1 << " + " << x2 << " = " << total << ")\n";
                break;
            }
        }
    }

    if (!stop_loop)
    {
        std::cout << combinations_count << " combinations - neither equals " << magic_number << std::endl;
    }

    return 0;
}
