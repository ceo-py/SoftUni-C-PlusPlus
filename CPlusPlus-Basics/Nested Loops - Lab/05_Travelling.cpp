#include <iostream>

using namespace std;

int main()
{
    float saved_money = 0;

    while (true)
    {
        string destination;
        cin >> destination;

        if (destination == "End")
        {
            break;
        }

        float minimum_money;
        cin >> minimum_money;
        saved_money = 0;

        while (saved_money < minimum_money)
        {
            float saved;
            cin >> saved;
            saved_money += saved;
        }

        cout << "Going to " << destination << "!" << endl;
    }

    return 0;
}
