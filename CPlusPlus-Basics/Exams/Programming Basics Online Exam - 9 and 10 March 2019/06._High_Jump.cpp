#include <iostream>

int main()
{
    int target_high_jump;
    int current_high_jump;
    int unsuccessful_jumps = 0;
    int jumps_counter = 0;

    std::cin >> target_high_jump;

    current_high_jump = target_high_jump - 30;

    while (unsuccessful_jumps < 3)
    {
        int jump;
        std::cin >> jump;

        jumps_counter += 1;

        if (jump > current_high_jump)
        {
            unsuccessful_jumps = 0;

            if (current_high_jump >= target_high_jump)
            {
                std::cout << "Tihomir succeeded, he jumped over " << target_high_jump << "cm after " << jumps_counter << " jumps." << std::endl;
                break;
            }
            current_high_jump += 5;
        }
        else
        {
            unsuccessful_jumps += 1;
        }
    }

    if (unsuccessful_jumps == 3)
    {
        std::cout << "Tihomir failed at " << current_high_jump << "cm after " << jumps_counter << " jumps." << std::endl;
    }

    return 0;
}
