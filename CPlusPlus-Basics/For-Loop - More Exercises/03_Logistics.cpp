#include <iostream>
#include <iomanip>

int main()
{
    int count_load;
    std::cin >> count_load;

    int minibus = 0, truck = 0, train = 0;
    int total_load = 0, tons = 0, minibus_tons = 0, truck_tons = 0, train_tons = 0;

    for (int i = 1; i <= count_load; ++i)
    {
        int load;
        std::cin >> load;
        tons += load;

        if (load <= 3)
        {
            minibus += load * 200;
            minibus_tons += load;
        }
        else if (load <= 11)
        {
            truck += load * 175;
            truck_tons += load;
        }
        else
        {
            train += load * 120;
            train_tons += load;
        }
    }

    total_load = minibus + truck + train;
    double average_per_ton = static_cast<double>(total_load) / tons;
    double average_per_ton_minibus = (static_cast<double>(minibus_tons) / tons) * 100;
    double average_per_ton_truck = (static_cast<double>(truck_tons) / tons) * 100;
    double average_per_ton_train = (static_cast<double>(train_tons) / tons) * 100;

    std::cout << std::fixed << std::setprecision(2) << average_per_ton << std::endl;
    std::cout << std::fixed << std::setprecision(2) << average_per_ton_minibus << "%" << std::endl;
    std::cout << std::fixed << std::setprecision(2) << average_per_ton_truck << "%" << std::endl;
    std::cout << std::fixed << std::setprecision(2) << average_per_ton_train << "%" << std::endl;

    return 0;
}
