#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    double vacationPrice;
    std::cin >> vacationPrice;

    int puzzles, talkingDolls, teddyBears, minions, trucks;
    std::cin >> puzzles >> talkingDolls >> teddyBears >> minions >> trucks;

    double puzzlePrice = 2.60;
    int talkingDollPrice = 3;
    double teddyBearPrice = 4.10;
    double minionPrice = 8.20;
    int truckPrice = 2;

    double puzzleTotalSum = puzzles * puzzlePrice;
    double talkingTotalSum = talkingDolls * talkingDollPrice;
    double teddyTotalSum = teddyBears * teddyBearPrice;
    double minionTotalSum = minions * minionPrice;
    double truckTotalSum = trucks * truckPrice;

    double totalOrderedToysSum = puzzleTotalSum + talkingTotalSum + teddyTotalSum + minionTotalSum + truckTotalSum;
    double totalOrderedToyNumber = puzzles + talkingDolls + teddyBears + minions + trucks;

    if (totalOrderedToyNumber >= 50)
    {
        totalOrderedToysSum *= 0.75;
    }

    totalOrderedToysSum *= 0.90;
    double leftMoney = std::abs(vacationPrice - totalOrderedToysSum);

    if (totalOrderedToysSum >= vacationPrice)
    {
        std::cout << "Yes! " << std::fixed << std::setprecision(2) << leftMoney << " lv left." << std::endl;
    }
    else
    {
        std::cout << "Not enough money! " << std::fixed << std::setprecision(2) << leftMoney << " lv needed." << std::endl;
    }

    return 0;
}
