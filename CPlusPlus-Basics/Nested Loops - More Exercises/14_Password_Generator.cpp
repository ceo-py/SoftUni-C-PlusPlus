#include <iostream>

int main()
{
    int n, l;
    std::cin >> n >> l;

    char start_symbol_three = 'a';

    for (int symbol_one = 1; symbol_one < n; ++symbol_one)
    {

        for (int symbol_two = 1; symbol_two <= n + 1; ++symbol_two)
        {

            for (char symbol_three = start_symbol_three; symbol_three < start_symbol_three + l; ++symbol_three)
            {

                for (char symbol_four = start_symbol_three; symbol_four < start_symbol_three + l; ++symbol_four)
                {

                    for (int symbol_five = 1; symbol_five <= n + 2; ++symbol_five)
                    {

                        if (symbol_one < symbol_five && symbol_five > symbol_two && symbol_five <= n)
                        {
                            std::cout << symbol_one << symbol_two << symbol_three << symbol_four << symbol_five << " ";
                        }
                    }
                }
            }
        }
    }

    return 0;
}
