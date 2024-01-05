#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string letter, complete_word, skip_letters_count, guess_word;

    while (true)
    {
        std::getline(std::cin, letter);

        if (letter == "End")
        {
            break;
        }

        if (letter.find_first_of("con") != std::string::npos)
        {
            skip_letters_count += letter;
        }
        else if (islower(letter[0]) || isupper(letter[0]))
        {
            guess_word += letter;
        }

        if (skip_letters_count.find('c') != std::string::npos &&
            skip_letters_count.find('o') != std::string::npos &&
            skip_letters_count.find('n') != std::string::npos)
        {
            complete_word += guess_word + " ";
            guess_word.clear();
            skip_letters_count.clear();
        }

        if (std::count(skip_letters_count.begin(), skip_letters_count.end(), letter[0]) > 1)
        {
            guess_word += letter;
        }
    }

    std::cout << complete_word << std::endl;

    return 0;
}
