#include <iostream>
#include <iomanip>
#include <limits>
#include <string>

int main()
{
    std::string movie_name;
    int standard_tickets = 0, kid_tickets = 0, student_tickets = 0;
    int total_tickets = 0;

    while (true)
    {
        std::getline(std::cin, movie_name);

        if (movie_name == "Finish")
        {
            break;
        }

        int free_places;
        std::cin >> free_places;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore rest of the line

        int current_movie_tickets = 0;
        std::string ticket_type;

        while (free_places > current_movie_tickets)
        {
            std::getline(std::cin, ticket_type);

            if (ticket_type == "End" || ticket_type == "Finish")
            {
                break;
            }

            if (ticket_type == "standard")
            {
                standard_tickets += 1;
                current_movie_tickets += 1;
            }
            else if (ticket_type == "student")
            {
                student_tickets += 1;
                current_movie_tickets += 1;
            }
            else if (ticket_type == "kid")
            {
                kid_tickets += 1;
                current_movie_tickets += 1;
            }
        }

        double current_movie_percent = (static_cast<double>(current_movie_tickets) / free_places) * 100;
        std::cout << movie_name << " - " << std::fixed << std::setprecision(2) << current_movie_percent << "% full." << std::endl;

        total_tickets += current_movie_tickets;

        if (ticket_type == "Finish")
        {
            break;
        }
    }

    double avr_kid_percent = (static_cast<double>(kid_tickets) / total_tickets) * 100;
    double avr_student_percent = (static_cast<double>(student_tickets) / total_tickets) * 100;
    double avr_standard_percent = (static_cast<double>(standard_tickets) / total_tickets) * 100;

    std::cout << "Total tickets: " << total_tickets << std::endl;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << avr_student_percent << "% student tickets." << std::endl;
    std::cout << avr_standard_percent << "% standard tickets." << std::endl;
    std::cout << avr_kid_percent << "% kids tickets." << std::endl;

    return 0;
}
