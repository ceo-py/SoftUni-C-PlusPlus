#include <iostream>
#include <string>

int main()
{
    std::string name, password, check_password;

    std::cin >> name >> password >> check_password;

    while (check_password != password)
    {
        std::cin >> check_password;
    }

    std::cout << "Welcome " << name << "!" << std::endl;

    return 0;
}
