#include <iostream>
#include <string>

int main()
{
    std::string a;
    int b = 0;
    const int c = 3;

    std::cin >> a;
    std::cin >> b;

    std::cout << "The architect " << a << " will need " << b * c
              << " hours to complete " << b << " project/s." << std::endl;

    return 0;
}
