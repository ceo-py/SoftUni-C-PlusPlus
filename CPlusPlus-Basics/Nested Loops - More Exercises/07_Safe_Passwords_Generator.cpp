#include <iostream>

int main()
{
    int a, b, max_count;
    std::cin >> a >> b >> max_count;

    int counter = 0;

    for (int A = 35; A <= 55; ++A)
    {
        for (int B = 64; B <= 96; ++B)
        {
            for (int x = 1; x <= a; ++x)
            {
                for (int y = 1; y <= b; ++y)
                {
                    counter += 1;

                    if (counter > max_count)
                    {
                        return 0;
                    }

                    std::cout << static_cast<char>(A) << static_cast<char>(B) << x << y << static_cast<char>(B) << static_cast<char>(A) << '|';

                    if (x == a && y == b)
                    {
                        return 0;
                    }

                    A += 1;
                    if (A > 55)
                    {
                        A = 35;
                    }

                    B += 1;
                    if (B > 96)
                    {
                        B = 64;
                    }
                }
            }
        }
    }

    return 0;
}
