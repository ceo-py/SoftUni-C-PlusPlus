#include <iostream>
#include <iomanip>

int main()
{
    int months;
    std::cin >> months;

    double electricity_bill = 0;
    const double water_bill = 20;
    const double internet = 15;
    double others = 0;
    int bills_count = 0;

    for (int i = 1; i <= months; ++i)
    {
        double electricity_bill_mount;
        std::cin >> electricity_bill_mount;

        electricity_bill += electricity_bill_mount;
        others += (electricity_bill_mount + water_bill + internet) + (electricity_bill_mount + water_bill + internet) * 0.20;
        bills_count += 1;
    }

    double total_internet = internet * months;
    double total_water_bill = water_bill * months;
    double average_bill = (electricity_bill + total_water_bill + total_internet + others) / months;

    std::cout << std::fixed << std::setprecision(2) << "Electricity: " << electricity_bill << " lv" << std::endl;
    std::cout << std::fixed << std::setprecision(2) << "Water: " << total_water_bill << " lv" << std::endl;
    std::cout << std::fixed << std::setprecision(2) << "Internet: " << total_internet << " lv" << std::endl;
    std::cout << std::fixed << std::setprecision(2) << "Other: " << others << " lv" << std::endl;
    std::cout << std::fixed << std::setprecision(2) << "Average: " << average_bill << " lv" << std::endl;

    return 0;
}
