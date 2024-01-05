#include <iostream>

int main()
{
    char start_letter, end_letter, skip_letter;
    std::cin >> start_letter >> end_letter >> skip_letter;

    int letter_ascii_number = static_cast<int>(skip_letter);
    int start_loop_range = static_cast<int>(start_letter);
    int end_loop_range = static_cast<int>(end_letter) + 1;
    int found_combinations = 0;

    for (int first_letter = start_loop_range; first_letter < end_loop_range; ++first_letter)
    {
        for (int middle_letter = start_loop_range; middle_letter < end_loop_range; ++middle_letter)
        {
            for (int last_letter = start_loop_range; last_letter < end_loop_range; ++last_letter)
            {
                if (first_letter != letter_ascii_number && middle_letter != letter_ascii_number && last_letter != letter_ascii_number)
                {
                    found_combinations++;
                    std::cout << static_cast<char>(first_letter) << static_cast<char>(middle_letter) << static_cast<char>(last_letter) << " ";
                }
            }
        }
    }

    std::cout << found_combinations << std::endl;

    return 0;
}
