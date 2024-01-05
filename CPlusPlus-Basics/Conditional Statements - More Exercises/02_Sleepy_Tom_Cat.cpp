#include <iostream>

int main()
{
    int rest_days;
    const int TOM_PLAYTIME = 30000;
    const int PLAYTIME_REST_DAY = 127;
    const int PLAYTIME_WORK_DAY = 63;

    std::cin >> rest_days;

    int work_days = 365 - rest_days;

    int time_work_days = work_days * PLAYTIME_WORK_DAY;
    int time_rest_days = rest_days * PLAYTIME_REST_DAY;

    int total_playtime = time_rest_days + time_work_days;
    int result = abs(total_playtime - TOM_PLAYTIME);

    int H = result / 60;
    int M = result % 60;

    if (TOM_PLAYTIME > total_playtime)
    {
        std::cout << "Tom sleeps well" << std::endl;
        std::cout << H << " hours and " << M << " minutes less for play" << std::endl;
    }
    else
    {
        std::cout << "Tom will run away" << std::endl;
        std::cout << H << " hours and " << M << " minutes more for play" << std::endl;
    }

    return 0;
}
