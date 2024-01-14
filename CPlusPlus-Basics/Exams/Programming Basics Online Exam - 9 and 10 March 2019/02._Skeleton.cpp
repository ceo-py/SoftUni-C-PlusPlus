#include <iostream>
#include <iomanip>

int main()
{
    int minutes_control, seconds_control, seconds_per_100_meters;
    float length_chute;

    std::cin >> minutes_control >> seconds_control >> length_chute >> seconds_per_100_meters;

    int control_time = minutes_control * 60 + seconds_control;
    float slowing_time = length_chute / 120;
    float total_slowing_time = slowing_time * 2.5;
    float marin_time = (length_chute / 100) * seconds_per_100_meters - total_slowing_time;

    if (marin_time <= control_time)
    {
        std::cout << "Marin Bangiev won an Olympic quota!" << std::endl;
        std::cout << "His time is " << std::fixed << std::setprecision(3) << marin_time << "." << std::endl;
    }
    else
    {
        std::cout << "No, Marin failed! He was " << std::fixed << std::setprecision(3) << marin_time - control_time
                  << " second slower." << std::endl;
    }

    return 0;
}
