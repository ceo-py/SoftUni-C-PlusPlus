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
    const char *dash = "-";
    int range = static_cast<int>(std::ceil(static_cast<double>(number) / 2));
    int base_range = number / 2;
    int start_repeat = number % 2 == 0 ? 2 : 1;
    int lines = (number - start_repeat) / 2;

    std::cout
        << repeatString(dash, lines)
        << repeatString(star, start_repeat)
        << repeatString(dash, lines)
        << std::endl;

    for (int roof = 1; roof < range; ++roof)
    {
        lines--;
        start_repeat += 2;
        std::cout
            << repeatString(dash, lines)
            << repeatString(star, start_repeat)
            << repeatString(dash, lines)
            << std::endl;
    }
    for (int base = 1; base <= base_range; ++base)
    {
        start_repeat = number - 2;
        std::cout
            << pipe
            << repeatString(star, start_repeat)
            << pipe
            << std::endl;
    }
    return 0;
}
