#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    double budget;
    double pay;
    string name;
    cin >> budget;
    getline(cin, name);
    cin.ignore();

    while (name == "ACTION" && budget > 0)
    {
        cin >> pay;
        if (name.length() > 15)
        {
            budget -= budget * 0.20;
        }
        else
        {
            cin >> pay;
            budget -= pay;
        }

        getline(cin, name);
        cin.ignore();
    }

    if (budget >= 0)
    {
        cout << "We are left with " << fixed << setprecision(2) << budget << " leva." << endl;
    }
    else
    {
        cout << "We are left with " << fixed << setprecision(2) << budget << " leva." << endl;
    }

    return 0;
}
