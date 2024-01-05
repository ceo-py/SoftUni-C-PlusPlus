#include <iostream>

int main()
{
    int coins_per_one, coins_per_two, banknotes_per_five, total_looking_sum;
    std::cin >> coins_per_one >> coins_per_two >> banknotes_per_five >> total_looking_sum;

    for (int coins_one = 0; coins_one <= coins_per_one; ++coins_one)
    {
        int i = coins_one * 1;

        for (int coins_two = 0; coins_two <= coins_per_two; ++coins_two)
        {
            int o = coins_two * 2;

            for (int banknotes = 0; banknotes <= banknotes_per_five; ++banknotes)
            {
                int p = banknotes * 5;

                if (i + o + p == total_looking_sum)
                {
                    std::cout << coins_one << " * 1 lv. + " << coins_two << " * 2 lv. + "
                              << banknotes << " * 5 lv. = " << total_looking_sum << " lv." << std::endl;
                }
            }
        }
    }

    return 0;
}
