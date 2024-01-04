#include <iostream>

int main()
{
    double a;

    std::cin >> a;

    double result = a * 7.61;
    double off = 0.18 * result;
    double total = result - off;

    std::cout << "The final price is: " << total << " lv." << std::endl;
    std::cout << "The discount is: " << off << " lv." << std::endl;

    return 0;
}
