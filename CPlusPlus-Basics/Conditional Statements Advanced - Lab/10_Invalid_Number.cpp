#include <iostream>

int main()
{
    int number_check;
    std::cin >> number_check;

    if (number_check != 0 && !(number_check >= 100 && number_check <= 200))
    {
        std::cout << "invalid" << std::endl;
    }

    return 0;
}
