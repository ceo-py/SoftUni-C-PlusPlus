#include <iostream>

using namespace std;

int main()
{
    int building_floors = 0, rooms_per_floors = 0;
    cin >> building_floors >> rooms_per_floors;

    for (int floors = building_floors; floors > 0; floors--)
    {
        for (int rooms = 0; rooms < rooms_per_floors; rooms++)
        {
            if (floors == building_floors)
            {
                cout << "L" << floors << rooms << " ";
            }
            else
            {
                cout << (floors % 2 == 0 ? "O" : "A") << floors << rooms << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
