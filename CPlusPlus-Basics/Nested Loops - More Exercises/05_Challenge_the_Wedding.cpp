#include <iostream>

int main()
{
    int numbers_man, numbers_woman, total_tables;
    std::cin >> numbers_man >> numbers_woman >> total_tables;

    int tables_left = 0;

    for (int i = 1; i <= numbers_man; ++i)
    {
        for (int o = 1; o <= numbers_woman; ++o)
        {
            if (tables_left == total_tables)
            {
                break;
            }
            else
            {
                std::cout << "(" << i << " <-> " << o << ") ";
                tables_left += 1;
            }
        }
    }

    return 0;
}
