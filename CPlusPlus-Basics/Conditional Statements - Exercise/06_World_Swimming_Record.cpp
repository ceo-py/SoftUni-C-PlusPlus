#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    double current_record, distance, time_per_meter;

    std::cin >> current_record >> distance >> time_per_meter;

    double time = distance * time_per_meter;
    double extra_time = floor(distance / 15) * 12.5;

    double total_time = time + extra_time;

    if (total_time < current_record)
    {
        std::cout << "Yes, he succeeded! The new world record is " << std::fixed << std::setprecision(2) << total_time << " seconds." << std::endl;
    }
    else
    {
        double difference = std::abs(total_time - current_record);
        std::cout << "No, he failed! He was " << std::fixed << std::setprecision(2) << difference << " seconds slower." << std::endl;
    }

    return 0;
}
