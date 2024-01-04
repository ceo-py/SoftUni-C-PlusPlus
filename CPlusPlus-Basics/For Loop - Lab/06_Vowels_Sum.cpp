#include <iostream>
#include <string>

int main()
{
    std::string text_input;
    std::getline(std::cin, text_input);

    int summary = 0;

    for (char letter : text_input)
    {
        if (letter == 'a')
        {
            summary += 1;
        }
        else if (letter == 'e')
        {
            summary += 2;
        }
        else if (letter == 'i')
        {
            summary += 3;
        }
        else if (letter == 'o')
        {
            summary += 4;
        }
        else if (letter == 'u')
        {
            summary += 5;
        }
    }

    std::cout << summary << std::endl;

    return 0;
}
