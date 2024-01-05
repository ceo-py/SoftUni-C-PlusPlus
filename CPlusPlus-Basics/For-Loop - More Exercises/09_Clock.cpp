#include <iostream>

int main()
{
    for (int hour = 0; hour < 24; ++hour)
    {
        for (int min = 0; min < 60; ++min)
        {
            std::cout << hour << " : " << min << std::endl;
        }
    }

    return 0;
}
