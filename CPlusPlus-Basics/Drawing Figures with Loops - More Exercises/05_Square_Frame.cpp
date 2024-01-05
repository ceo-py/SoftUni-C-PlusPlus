#include <iostream>
#include <string>

int main()
{
    int number;
    std::string str = "";
    std::cin >> number;

    for (int row = 1; row <= number; row++)
    {
        for (int i = 1; i <= number - 2; ++i)
        {
            str += '-';
            str += ' ';
        }
        if (row == 1 || number == row)
        {
            std::cout << "+ " << str << "+ " << std::endl;
        }
        else
        {
            std::cout << "| " << str << "| " << std::endl;
        }
        str = "";
    }

    return 0;
}
