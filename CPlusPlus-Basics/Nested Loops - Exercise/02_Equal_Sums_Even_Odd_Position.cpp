#include <iostream>
#include <string>

using namespace std;

int main()
{
    int number_one = 0, number_two = 0;
    cin >> number_one >> number_two;

    for (int number = number_one; number <= number_two; number++)
    {
        int odd_sum = 0, even_sum = 0;

        string numStr = to_string(number);
        for (int i = 0; i < numStr.size(); i++)
        {
            int num = numStr[i] - '0';

            if (i % 2 == 0)
            {
                even_sum += num;
            }
            else
            {
                odd_sum += num;
            }
        }

        if (odd_sum == even_sum)
        {
            cout << number << " ";
        }
    }

    return 0;
}
