#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    double serial_budget;
    int serial_numbers;

    cin >> serial_budget >> serial_numbers;
    cin.ignore();

    double total_budget = serial_budget;
    int serial_count = 0;

    while (true)
    {
        string name_serial;
        double price_serial;

        getline(cin, name_serial);
        cin >> price_serial;
        cin.ignore();

        serial_count++;

        if (name_serial == "Thrones")
        {
            total_budget -= 0.50 * price_serial;
        }
        else if (name_serial == "Lucifer")
        {
            total_budget -= 0.60 * price_serial;
        }
        else if (name_serial == "Protector")
        {
            total_budget -= 0.70 * price_serial;
        }
        else if (name_serial == "TotalDrama")
        {
            total_budget -= 0.80 * price_serial;
        }
        else if (name_serial == "Area")
        {
            total_budget -= 0.90 * price_serial;
        }
        else
        {
            total_budget -= price_serial;
        }

        if (serial_numbers == serial_count && total_budget >= 0)
        {
            cout << "You bought all the series and left with " << fixed << setprecision(2) << total_budget << " lv." << endl;
            break;
        }
        else if (total_budget < 0 && serial_count == serial_numbers)
        {
            cout << "You need " << fixed << setprecision(2) << abs(total_budget) << " lv. more to buy the series!" << endl;
            break;
        }
    }

    return 0;
}
