#include <iostream>
#include <string>

int main()
{
    int width, length, height;
    std::cin >> width >> length >> height;

    int total_space = width * length * height;
    std::string boxes_added;

    while (true)
    {
        std::cin >> boxes_added;

        if (boxes_added == "Done")
        {
            std::cout << total_space << " Cubic meters left." << std::endl;
            break;
        }

        total_space -= std::stoi(boxes_added);

        if (total_space <= 0)
        {
            std::cout << "No more free space! You need " << std::abs(total_space) << " Cubic meters more." << std::endl;
            break;
        }
    }

    return 0;
}
