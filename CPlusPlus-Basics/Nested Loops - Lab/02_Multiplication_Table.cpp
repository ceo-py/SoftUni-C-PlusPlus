#include <iostream>

int main()
{
    for (int a = 1; a <= 10; ++a)
    {
        for (int b = 1; b <= 10; ++b)
        {
            int c = a * b;
            std::cout << a << " * " << b << " = " << c << std::endl;
        }
    }

    return 0;
}
