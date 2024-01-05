#include <iostream>

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

    for (int row = 1; row <= number; ++row)
    {
        const char *originalString = " ";
        {
            const char *rowString = row == 1 ? "*" : "* ";
            std::cout << repeatString(originalString, number - row) << repeatString(rowString, row) << std::endl;
        }
    }
    for (int row = number - 1; row > 0; --row)
    {
        const char *originalString = " ";
        {
            const char *rowString = "* ";
            const int repeat = row == 0 ? (number - (row - 1)) : row + 1;
            std::cout << repeatString(originalString, number - row) << repeatString(rowString, row) << std::endl;
        }
    }
    return 0;
}
