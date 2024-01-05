#include <iostream>
#include <string>

int main() {
    int number;
    std::cin >> number;

    std::string toPrint(number, '*');

    for (int row = 0; row < number; ++row) {
        std::cout << toPrint << std::endl;
    }

    return 0;
}
