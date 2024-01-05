#include <iostream>

int main()
{
    int i = 0;

    while (true)
    {
        i++;
        std::cout << i << std::endl;

        if (i == 10)
        {
            break;
        }
    }

    return 0;
}
