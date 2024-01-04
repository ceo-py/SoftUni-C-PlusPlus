#include <iostream>

int main()
{
    int neededNylon, neededPaint, thinner, hoursForBuilders;

    std::cin >> neededNylon;
    std::cin >> neededPaint;
    std::cin >> thinner;
    std::cin >> hoursForBuilders;

    double nylonPrice = (neededNylon + 2) * 1.50;
    double paintPrice = (neededPaint * 1.10) * 14.50;
    double thinnerPrice = thinner * 5;

    double totalSumMaterials = nylonPrice + paintPrice + thinnerPrice + 0.40;
    double buildersSum = (totalSumMaterials * 0.30) * hoursForBuilders;

    double totalSum = totalSumMaterials + buildersSum;

    std::cout << totalSum << std::endl;

    return 0;
}
