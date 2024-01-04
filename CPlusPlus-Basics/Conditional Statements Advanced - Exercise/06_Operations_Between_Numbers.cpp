#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    int numberOne, numberTwo;
    std::string oper;

    std::cin >> numberOne >> numberTwo >> oper;

    if (numberOne == 0 || numberTwo == 0)
    {
        std::cout << "Cannot divide " << numberOne << " by zero" << std::endl;
    }
    else if (oper == "%")
    {
        int result = numberOne % numberTwo;
        std::cout << numberOne << " % " << numberTwo << " = " << result << std::endl;
    }
    else if (oper == "/")
    {
        double result = static_cast<double>(numberOne) / numberTwo;
        std::cout << numberOne << " " << oper << " " << numberTwo << " = " << std::fixed << std::setprecision(2) << result << std::endl;
    }
    else
    {
        int result = 0;
        if (oper == "+")
        {
            result = numberOne + numberTwo;
        }
        else if (oper == "-")
        {
            result = numberOne - numberTwo;
        }
        else if (oper == "*")
        {
            result = numberOne * numberTwo;
        }
        else if (oper == "/")
        {
            if (numberTwo != 0)
            {
                result = numberOne / numberTwo;
            }
            else
            {
                std::cout << "Cannot divide " << numberOne << " by zero" << std::endl;
                return 0;
            }
        }

        std::string typeNumber = (result % 2 == 0) ? "even" : "odd";
        std::cout << numberOne << " " << oper << " " << numberTwo << " = " << result << " - " << typeNumber << std::endl;
    }

    return 0;
}
