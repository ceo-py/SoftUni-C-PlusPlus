#include <iostream>

int main()
{
    for (int hours = 0; hours < 24; ++hours)
    {
        for (int minutes = 0; minutes < 60; ++minutes)
        {
            std::cout << hours << ":" << minutes << std::endl;
        }
    }

    return 0;
}
