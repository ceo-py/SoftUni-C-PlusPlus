#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string fuelType;
    int fuelQuantity;

    std::cin >> fuelType >> fuelQuantity;

    std::transform(fuelType.begin(), fuelType.end(), fuelType.begin(), ::tolower);

    if (fuelType == "diesel" || fuelType == "gasoline" || fuelType == "gas")
    {
        if (fuelQuantity >= 25)
        {
            std::cout << "You have enough " << fuelType << "." << std::endl;
        }
        else
        {
            std::cout << "Fill your tank with " << fuelType << "!" << std::endl;
        }
    }
    else
    {
        std::cout << "Invalid fuel!" << std::endl;
    }

    return 0;
}
