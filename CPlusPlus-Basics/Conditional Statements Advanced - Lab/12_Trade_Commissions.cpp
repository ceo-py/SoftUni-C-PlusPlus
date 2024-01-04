#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    std::string city;
    float selling_volume, commission = 0;

    std::cin >> city >> selling_volume;

    if (selling_volume >= 0)
    {
        if (city == "Sofia")
        {
            if (selling_volume <= 500)
            {
                commission = 0.05;
            }
            else if (selling_volume <= 1000)
            {
                commission = 0.07;
            }
            else if (selling_volume <= 10000)
            {
                commission = 0.08;
            }
            else
            {
                commission = 0.12;
            }
        }
        else if (city == "Varna")
        {
            if (selling_volume <= 500)
            {
                commission = 0.045;
            }
            else if (selling_volume <= 1000)
            {
                commission = 0.075;
            }
            else if (selling_volume <= 10000)
            {
                commission = 0.10;
            }
            else
            {
                commission = 0.13;
            }
        }
        else if (city == "Plovdiv")
        {
            if (selling_volume <= 500)
            {
                commission = 0.055;
            }
            else if (selling_volume <= 1000)
            {
                commission = 0.08;
            }
            else if (selling_volume <= 10000)
            {
                commission = 0.12;
            }
            else
            {
                commission = 0.145;
            }
        }
    }
    if (commission)
    {
        std::cout << std::fixed << std::setprecision(2) << selling_volume * commission << std::endl;
    }
    else
    {
        std::cout << "error" << std::endl;
    }

    return 0;
}
