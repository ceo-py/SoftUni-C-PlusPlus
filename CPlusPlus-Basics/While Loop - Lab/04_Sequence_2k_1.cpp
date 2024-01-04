#include <iostream>

int main()
{
    int number;
    std::cin >> number;

    int counter = 1;

    while (number >= counter)
    {
        std::cout << counter << std::endl;
        counter = 2 * counter + 1;
    }

    return 0;
}
