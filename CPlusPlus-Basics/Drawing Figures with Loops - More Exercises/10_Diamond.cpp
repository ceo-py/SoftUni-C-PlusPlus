#include <iostream>
#include <cmath>

std::string repeatString(const char *symbol, int repeatCount)
{
    std::string resultString;
    for (int i = 0; i < repeatCount; ++i)
    {
        resultString += symbol;
    }
    return resultString;
}

int main()
{
    int n;
    std::cin >> n;

    int lines = std::ceil((n - 1) / 2);
    int mid = 0;
    int z = 0;

    if (n % 2 == 0)
    {
        lines = lines - 1;
        z = 1;
    }

    // Upper part of the pyramid
    for (int i = 1; i <= lines + 2; ++i)
    {
        if (i == 1)
        {
            int stars;
            if (n % 2 == 0)
            {
                lines = static_cast<int>(std::abs(2 - n) / 2);
                stars = 2;
                std::cout << repeatString("-", lines) << repeatString("*", stars) << repeatString("-", lines) << std::endl;
            }
            else
            {
                lines = static_cast<int>(std::abs(n - 1) / 2);
                stars = 1;
                std::cout << repeatString("-", lines) << repeatString("*", stars) << repeatString("-", lines) << std::endl;
            }
        }
        else
        {
            if (n % 2 == 0)
            {
                mid += 2;
            }
            else
            {
                if (mid == 0)
                {
                    mid += 1;
                }
                else
                {
                    mid += 2;
                }
            }
            lines = lines - 1;
            std::cout << repeatString("-", lines) << "*" << repeatString("-", mid) << "*" << repeatString("-", lines) << std::endl;
        }
    }

    int end = (n / 2) - z;
    for (int b = 0; b < end; ++b)
    {
        // std::cout << mid << std::endl;
        if (n % 2 != 0)
        {
            if (b == static_cast<int>(n / 2) - 1)
            {
                lines = b + 1;
                std::cout << repeatString("-", lines) << "*" << repeatString("-", lines) << std::endl;
            }
            else
            {
                lines = b + 1;
                mid = mid - 2;
                std::cout << repeatString("-", lines) << "*" << repeatString("-", mid) << "*" << repeatString("-", lines) << std::endl;
            }
        }
        else
        {
            if (b == static_cast<int>(n / 2) - 1)
            {
                lines = b + 1;
                std::cout << repeatString("-", lines) << "**" << repeatString("-", lines) << std::endl;
            }
            else
            {
                lines = b + 1;
                mid = mid - 2;
                std::cout << repeatString("-", lines) << "*" << repeatString("-", mid) << "*" << repeatString("-", lines) << std::endl;
            }
        }
    }

    return 0;
}
