#include <iostream>
#include <climits>

int main()
{
    int num;
    std::cin >> num;

    int odd = 0;
    int even = 0;

    for (int i = 0; i < num; ++i)
    {
        int number;
        std::cin >> number;
        if (i % 2 == 0)
        {
            odd += number;
        }
        else
        {
            even += number;
        }
    }
    int difference = even - odd;
    if (difference == 0)
    {
        std::cout << "Yes\n" << "Sum = " << even << std::endl;
    }
    else
    {
        std::cout << "No\n" << "Diff = " << abs(difference) << std::endl;
    }

    return 0;
}
