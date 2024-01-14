#include <iostream>
#include <string>

using namespace std;

string repeatString(const char *symbol, int repeatCount)
{
    string resultString;
    for (int i = 0; i < repeatCount; ++i)
    {
        resultString += symbol;
    }
    return resultString;
}

int main()
{
    int n;
    cin >> n;

    int lines = (n - 1) / 2;
    int mid = 0;
    bool isEven = n % 2 == 0;

    if (isEven)
    {
        lines--;
    }

    for (int i = 1; i <= lines + 2; ++i)
    {
        if (i == 1)
        {
            int stars = isEven ? 2 : 1;
            cout << repeatString("-", lines) << stars * '*' << repeatString("-", lines) << endl;
        }
        else
        {
            if (isEven)
            {
                mid += 2;
            }
            else if (mid == 0)
            {
                mid++;
            }
            else
            {
                mid += 2;
            }
            lines--;

            cout << repeatString("-", lines) << "*" << repeatString("-", mid) << "*" << repeatString("-", lines) << endl;
        }
    }

    for (int b = 0; b < (n / 2) - (isEven ? 1 : 0); ++b)
    {
        if (!isEven)
        {
            if (b == (n / 2) - (isEven ? 1 : 0) - 1)
            {
                lines = b + 1;
                mid = 0;
                cout << repeatString("-", lines) << '*' << repeatString("-", lines) << endl;
            }
            else
            {
                lines = b + 1;
                mid -= 2;
                cout << repeatString("-", lines) << "*" << repeatString("-", mid) << "*" << repeatString("-", lines) << endl;
            }
        }
        else
        {
            if (b == (n / 2) - 1)
            {
                lines = b + 1;
                mid = 0;
                cout << repeatString("-", lines) << "**" << repeatString("-", lines) << endl;
            }
            else
            {
                lines = b + 1;
                mid -= 2;
                cout << repeatString("-", lines) << "*" << repeatString("-", mid) << "*" << repeatString("-", lines) << endl;
            }
        }
    }

    return 0;
}
