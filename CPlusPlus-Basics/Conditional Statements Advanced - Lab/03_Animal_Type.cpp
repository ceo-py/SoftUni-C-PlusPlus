#include <iostream>
#include <string>

int main()
{
    std::string animal;
    std::getline(std::cin >> std::ws, animal);

    std::string output = "unknown";

    if (animal == "crocodile" || animal == "tortoise" || animal == "snake")
    {
        output = "reptile";
    }
    else if (animal == "dog")
    {
        output = "mammal";
    }

    std::cout << output << std::endl;

    return 0;
}
