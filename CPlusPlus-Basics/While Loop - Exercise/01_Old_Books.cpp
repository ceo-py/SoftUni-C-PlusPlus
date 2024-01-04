#include <iostream>
#include <string>

int main()
{
    std::string bookToCheck;
    std::getline(std::cin, bookToCheck);

    int checkedBooks = 0;

    std::string book;
    std::getline(std::cin, book);

    while (book != "No More Books")
    {
        checkedBooks++;

        if (book == bookToCheck)
        {
            std::cout << "You checked " << (checkedBooks - 1) << " books and found it." << std::endl;
            break;
        }

        std::getline(std::cin, book);
    }

    if (book == "No More Books")
    {
        std::cout << "The book you search is not here!\n"
                  << "You checked " << checkedBooks << " books." << std::endl;
    }

    return 0;
}
