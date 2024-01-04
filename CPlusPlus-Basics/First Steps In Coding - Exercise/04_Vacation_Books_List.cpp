#include <iostream>

int main()
{
    int a, b, c;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    std::cout << static_cast<int>(a / b / c) << std::endl;

    return 0;
}
