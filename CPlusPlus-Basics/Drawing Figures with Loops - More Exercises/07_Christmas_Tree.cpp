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
    const char *originalString = " ";

    std::cout << repeatString(originalString, number) << " |" << std::endl;
    std::cout << repeatString(originalString, number - 1) << "* | *" << std::endl;

    for (int row = 1; row < number; ++row)
    {
        const char *originalString = " ";
        const char *stars = "*";
        std::cout << repeatString(originalString, (number - (row + 1))) << repeatString(stars, row + 1) << " | " << repeatString(stars, row + 1) << std::endl;
    }
    return 0;
}
