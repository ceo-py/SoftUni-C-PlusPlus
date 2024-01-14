#include <iostream>
#include <string>

int main()
{
    int egg_colored_numbers;
    std::cin >> egg_colored_numbers;

    int red = 0, orange = 0, blue = 0, green = 0;

    for (int egg = 0; egg < egg_colored_numbers; ++egg)
    {
        std::string color;
        std::cin >> color;

        if (color == "red")
        {
            red++;
        }
        else if (color == "orange")
        {
            orange++;
        }
        else if (color == "blue")
        {
            blue++;
        }
        else if (color == "green")
        {
            green++;
        }
    }

    std::string max_color = "red";
    int max_number = red;

    if (orange > max_number)
    {
        max_number = orange;
        max_color = "orange";
    }

    if (blue > max_number)
    {
        max_number = blue;
        max_color = "blue";
    }

    if (green > max_number)
    {
        max_number = green;
        max_color = "green";
    }

    std::cout << "Red eggs: " << red << std::endl;
    std::cout << "Orange eggs: " << orange << std::endl;
    std::cout << "Blue eggs: " << blue << std::endl;
    std::cout << "Green eggs: " << green << std::endl;
    std::cout << "Max eggs: " << max_number << " -> " << max_color << std::endl;

    return 0;
}
