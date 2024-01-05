#include <iostream>

int main()
{
    double change;
    std::cin >> change;

    int coins = 0;
    int cents = static_cast<int>(change * 100);

    for (int x : {200, 100, 50, 20, 10, 5, 2})
    {
        int currCoins = cents / x;
        cents -= currCoins * x;
        coins += currCoins;
    }

    coins += cents;

    std::cout << coins << std::endl;

    return 0;
}
