#include <iostream>
#include <string>

using namespace std;

int main()
{
    int capacity_hall;
    cin >> capacity_hall;
    cin.ignore(); // Consume the newline character left by previous cin

    int ticket_price = 5;
    int total_price_tickets = 0;
    int total_tickets_sell = 0;
    int tickets_left = capacity_hall;

    while (true)
    {
        string people_in_cinema;
        getline(cin, people_in_cinema);
        total_tickets_sell++;
        if (people_in_cinema == "Movie time!")
        {
            cout << "There are " << tickets_left << " seats left in the cinema.\nCinema income - " << total_price_tickets << " lv." << endl;
            break;
        }

        int people_in_cinema_int = stoi(people_in_cinema);
        tickets_left -= people_in_cinema_int;
        if (tickets_left < 0)
        {
            cout << "The cinema is full.\nCinema income - " << total_price_tickets << " lv." << endl;
            break;
        }

        if (people_in_cinema_int % 3 == 0)
        {
            total_price_tickets += (people_in_cinema_int * ticket_price) - 5;
        }
        else
        {
            total_price_tickets += (people_in_cinema_int * ticket_price);
        }
    }

    return 0;
}
