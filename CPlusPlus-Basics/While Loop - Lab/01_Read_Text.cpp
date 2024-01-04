#include <iostream>
#include <string>

int main()
{
    while (true)
    {
        std::string text;
        std::getline(std::cin, text);

        if (text == "Stop")
        {
            break;
        }
        else
        {
            std::cout << text << std::endl;
        }
    }

    return 0;
}
