#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    int student = 0, standard = 0, kid = 0;
    std::string movie;

    std::getline(std::cin, movie);

    while (movie != "Finish")
    {
        int free_salon_spots;
        std::cin >> free_salon_spots;
        int total_spot = free_salon_spots;

        while (free_salon_spots)
        {
            std::string ticket_type;
            std::cin >> ticket_type;

            if (ticket_type == "End")
            {
                break;
            }

            free_salon_spots--;

            if (ticket_type == "standard")
            {
                standard++;
            }
            else if (ticket_type == "student")
            {
                student++;
            }
            else if (ticket_type == "kid")
            {
                kid++;
            }
        }

        double occupancy_percentage = 100.0 * (1.0 - static_cast<double>(free_salon_spots) / total_spot);

        std::cout << movie << " - " << std::fixed << std::setprecision(2)
                  << std::abs(occupancy_percentage) << "% full." << std::endl;

        std::cin.ignore(); // Consume the newline character
        std::getline(std::cin, movie);
    }

    int total_tickets = student + standard + kid;
    std::cout << "Total tickets: " << total_tickets << std::endl;
    std::cout << std::fixed << std::setprecision(2) << static_cast<double>(student) / total_tickets * 100 << "% student tickets." << std::endl;
    std::cout << std::fixed << std::setprecision(2) << static_cast<double>(standard) / total_tickets * 100 << "% standard tickets." << std::endl;
    std::cout << std::fixed << std::setprecision(2) << static_cast<double>(kid) / total_tickets * 100 << "% kids tickets." << std::endl;

    return 0;
}
