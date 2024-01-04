#include <iostream>
#include <climits>

int main()
{
    int total = INT_MIN; // Initialize total to the smallest possible integer

    while (true)
    {
        std::string numbers;
        std::cin >> numbers;

        if (numbers != "Stop")
        {
            int currentNumber = std::stoi(numbers);
            if (currentNumber > total)
            {
                total = currentNumber;
            }
        }
        else
        {
            std::cout << total << std::endl;
            break;
        }
    }

    return 0;
}
