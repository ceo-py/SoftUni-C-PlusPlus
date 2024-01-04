#include <iostream>
#include <cmath>

int main()
{
    int n;
    std::cin >> n;

    for (int i = 0; i <= n; i += 2)
    {
        std::cout << static_cast<int>(std::pow(2, i)) << std::endl;
    }

    return 0;
}
