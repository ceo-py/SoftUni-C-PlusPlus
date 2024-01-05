#include <iostream>

int main()
{
    for (int hour = 0; hour < 24; ++hour)
    {
        for (int min = 0; min < 60; ++min)
        {
            for (int sec = 0; sec < 60; ++sec)
            {
                std::cout << hour << " : " << min << " : " << sec << std::endl;
            }
        }
    }

    return 0;
}
