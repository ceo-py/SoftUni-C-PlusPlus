#include <iostream>
#include <string>

int main()
{
    std::string a = "";
    std::string b = "s3cr3t!P@ssw0rd";

    std::cin >> a;

    if (a == b)
    {
        std::cout << "Welcome" << std::endl;
    }
    else
    {
        std::cout << "Wrong password!" << std::endl;
    }

    return 0;
}
