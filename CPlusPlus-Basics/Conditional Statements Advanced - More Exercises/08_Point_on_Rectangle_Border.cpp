#include <iostream>

int main()
{
    double x1, y1, x2, y2, x, y;

    std::cin >> x1 >> y1 >> x2 >> y2 >> x >> y;

    if ((x == x1 || x == x2) && y >= y1 && y <= y2)
    {
        std::cout << "Border" << std::endl;
    }
    else if ((y == y1 || y == y2) && x >= x1 && x <= x2)
    {
        std::cout << "Border" << std::endl;
    }
    else
    {
        std::cout << "Inside / Outside" << std::endl;
    }

    return 0;
}
