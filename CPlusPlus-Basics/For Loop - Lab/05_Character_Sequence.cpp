#include <iostream>
#include <string>

int main()
{
    std::string text;
    std::getline(std::cin, text);

    for (char i : text)
    {
        std::cout << i << std::endl;
    }

    return 0;
}
