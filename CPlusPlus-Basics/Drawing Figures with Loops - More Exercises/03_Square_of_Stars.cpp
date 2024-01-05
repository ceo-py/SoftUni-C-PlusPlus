#include <iostream>

int main() {
    int number;
    std::cin >> number;

    for (int row = 0; row < number; ++row) {
        for (int col = 0; col < number; ++col) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    return 0;
}
