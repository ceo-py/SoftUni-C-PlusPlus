#include <iostream>

using namespace std;

int main()
{
    int pyramid_number = 0;
    cin >> pyramid_number;

    int prints = 0;

    for (int row = 0; row < pyramid_number; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            prints++;
            cout << prints << " ";

            if (prints == pyramid_number)
            {
                exit(0);
            }
        }
        cout << endl;
    }

    return 0;
}
