#include <iostream>

int main()
{
    int a;

    std::cin >> a;

    double sneakers = a - (a * 0.40);
    double gear = sneakers - (sneakers * 0.20);
    double ball = gear / 4;
    double more = ball / 5;

    std::cout << a + sneakers + gear + ball + more << std::endl;

    return 0;
}
