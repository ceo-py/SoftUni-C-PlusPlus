#include <iostream>
#include <string>

int main()
{
    int cake_width, cake_length;
    std::cin >> cake_width >> cake_length;

    int cake_size = cake_width * cake_length;
    std::string cake_slices;

    while (true)
    {
        std::cin >> cake_slices;

        if (cake_slices == "STOP")
        {
            std::cout << cake_size << " pieces are left." << std::endl;
            break;
        }

        int slices = std::stoi(cake_slices);
        cake_size -= slices;

        if (cake_size <= 0)
        {
            std::cout << "No more cake left! You need " << std::abs(cake_size) << " pieces more." << std::endl;
            break;
        }
    }

    return 0;
}
