#include <iostream>
#include <cmath>

int main()
{
    double length, width;
    int corridor = 100;
    int desk_width = 70;
    int desk_length = 120;
    int other_space = 3;

    std::cin >> length >> width;

    int width_desks = static_cast<int>(std::floor(((width * 100) - corridor) / desk_width));
    int length_desks = static_cast<int>(std::floor((length * 100) / desk_length));

    int total_space = width_desks * length_desks - other_space;
    std::cout << total_space << std::endl;

    return 0;
}
