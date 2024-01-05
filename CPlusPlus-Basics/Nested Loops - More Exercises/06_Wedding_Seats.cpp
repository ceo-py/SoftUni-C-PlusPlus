#include <iostream>

int main()
{
    char sector_symbols;
    std::cin >> sector_symbols;
    int number_rows_sector_one, number_space_odd_row;
    std::cin >> number_rows_sector_one >> number_space_odd_row;

    int starting_sector = 'A';
    int ending_sector = static_cast<int>(sector_symbols);
    int starting_place = 'a';
    int additional_row = 0;
    int additional_row_odd = 2;
    int total_seats = 0;

    for (int sector = starting_sector; sector <= ending_sector; ++sector)
    {
        additional_row += 1;

        for (int row = 1; row < number_rows_sector_one + additional_row; ++row)
        {
            for (int place = starting_place; place < starting_place + number_space_odd_row + (row % 2 != 0 ? 0 : additional_row_odd); ++place)
            {
                std::cout << static_cast<char>(sector) << row << static_cast<char>(place) << std::endl;
                total_seats += 1;
            }
        }
    }

    std::cout << total_seats << std::endl;

    return 0;
}
