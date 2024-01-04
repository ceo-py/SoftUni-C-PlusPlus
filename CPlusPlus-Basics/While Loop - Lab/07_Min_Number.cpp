#include <iostream>
#include <climits>

int main()
{
    int total = INT_MAX; 

    while (true)
    {
        std::string numbers;
        std::cin >> numbers;

        if (numbers != "Stop")
        {
            int currentNumber = std::stoi(numbers);
            if (currentNumber < total)
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
