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
    int number;
    std::cin >> number;

    const char *star = "*";
    const char *pipe = "|";
    const char *slash = "/";
    const char *white_space = " ";
    int connection = static_cast<int>(std::ceil(static_cast<double>(number) / 2));

    for (int row = 0; row < number; ++row)
    {
        if (row == 0 || number - 1 == row)
        {
            std::cout
                << repeatString(star, number * 2)
                << repeatString(white_space, number)
                << repeatString(star, number * 2)
                << std::endl;
        }
        else
        {
            std::cout << star
                      << repeatString(slash, ((number * 2) - 2))
                      << star
                      << repeatString(connection == row + 1 ? pipe : white_space, number)
                      << star
                      << repeatString(slash, ((number * 2) - 2))
                      << star
                      << std::endl;
        }
    }
    return 0;
}
