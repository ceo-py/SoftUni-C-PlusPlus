#include <iostream>

int main() {
    float a;
    
    std::cin >> a;

    float result = a * 7.61;
    float off = 0.18 * result;
    float total = result - off;

    std::cout << "The final price is: " << total << " lv." << std::endl;
    std::cout << "The discount is: " << off << " lv." << std::endl;

    return 0;
}
