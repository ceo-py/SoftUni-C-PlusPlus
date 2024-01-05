#include <iostream>

using namespace std;

int main()
{
    int numberToCheck = 0;
    cin >> numberToCheck;

    for (int number1 = 1; number1 < 9; number1++)
    {
        if (numberToCheck % number1 == 0)
        {
            for (int number2 = 1; number2 < 9; number2++)
            {
                if (numberToCheck % number2 == 0)
                {
                    for (int number3 = 1; number3 < 9; number3++)
                    {
                        if (numberToCheck % number3 == 0)
                        {
                            for (int number4 = 1; number4 < 9; number4++)
                            {
                                if (numberToCheck % number4 == 0)
                                {
                                    cout << number1 << number2 << number3 << number4 << " ";
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}
