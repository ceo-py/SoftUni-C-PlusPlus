#include <iostream>
#include <iomanip>

int main()
{
    int game_moves;
    std::cin >> game_moves;

    double from_zero_to_nine = 0, from_ten_to_nineteen = 0, from_twenty_to_twenty_nine = 0, from_thirty_to_thirty_nine = 0, from_forty_to_fifty = 0, invalid_number = 0, total_score = 0;

    for (int i = 1; i <= game_moves; ++i)
    {
        int number;
        std::cin >> number;

        if (number < 0 || number > 50)
        {
            invalid_number += 1;
            total_score /= 2;
        }
        else if (number < 10)
        {
            from_zero_to_nine += 1;
            total_score += number * 0.20;
        }
        else if (number < 20)
        {
            from_ten_to_nineteen += 1;
            total_score += number * 0.30;
        }
        else if (number < 30)
        {
            from_twenty_to_twenty_nine += 1;
            total_score += number * 0.40;
        }
        else if (number < 40)
        {
            from_thirty_to_thirty_nine += 1;
            total_score += 50;
        }
        else
        {
            from_forty_to_fifty += 1;
            total_score += 100;
        }
    }

    from_zero_to_nine = (static_cast<double>(from_zero_to_nine) / game_moves) * 100;
    from_ten_to_nineteen = (static_cast<double>(from_ten_to_nineteen) / game_moves) * 100;
    from_twenty_to_twenty_nine = (static_cast<double>(from_twenty_to_twenty_nine) / game_moves) * 100;
    from_thirty_to_thirty_nine = (static_cast<double>(from_thirty_to_thirty_nine) / game_moves) * 100;
    from_forty_to_fifty = (static_cast<double>(from_forty_to_fifty) / game_moves) * 100;
    invalid_number = (static_cast<double>(invalid_number) / game_moves) * 100;

    std::cout << std::fixed << std::setprecision(2) << total_score << std::endl;
    std::cout << "From 0 to 9: " << std::fixed << std::setprecision(2) << from_zero_to_nine << "%" << std::endl;
    std::cout << "From 10 to 19: " << std::fixed << std::setprecision(2) << from_ten_to_nineteen << "%" << std::endl;
    std::cout << "From 20 to 29: " << std::fixed << std::setprecision(2) << from_twenty_to_twenty_nine << "%" << std::endl;
    std::cout << "From 30 to 39: " << std::fixed << std::setprecision(2) << from_thirty_to_thirty_nine << "%" << std::endl;
    std::cout << "From 40 to 50: " << std::fixed << std::setprecision(2) << from_forty_to_fifty << "%" << std::endl;
    std::cout << "Invalid numbers: " << std::fixed << std::setprecision(2) << invalid_number << "%" << std::endl;

    return 0;
}
