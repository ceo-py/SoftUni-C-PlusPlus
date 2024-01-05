#include <iostream>
#include <string>

int main()
{
    double neededMoney, ownedMoney;
    int daysCounter = 0;
    int spendingCounter = 0;

    std::cin >> neededMoney >> ownedMoney;

    while (ownedMoney < neededMoney && spendingCounter < 5)
    {
        std::string command;
        double money;

        std::cin >> command >> money;
        daysCounter++;

        for (auto &ch : command)
        {
            ch = std::tolower(ch);
        }

        if (command == "save")
        {
            ownedMoney += money;
            spendingCounter = 0;
        }
        else if (command == "spend")
        {
            ownedMoney -= money;
            spendingCounter++;
            if (ownedMoney < 0)
            {
                ownedMoney = 0;
            }
        }
    }

    if (ownedMoney >= neededMoney)
    {
        std::cout << "You saved the money for " << daysCounter << " days." << std::endl;
    }
    else
    {
        std::cout << "You can't save the money." << std::endl;
        std::cout << daysCounter << std::endl;
    }

    return 0;
}
