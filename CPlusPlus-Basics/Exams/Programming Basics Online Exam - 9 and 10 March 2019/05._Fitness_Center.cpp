#include <iostream>
#include <iomanip>
#include <string>

int main() {
    int jym_visitors;
    int training_people = 0, products = 0;
    int back = 0, chest = 0, legs = 0, abs_ = 0, shake = 0, bar = 0;

    std::cin >> jym_visitors;
    std::cin.ignore(); 

    for (int person = 0; person < jym_visitors; ++person) {
        std::string activity;
        std::getline(std::cin, activity);

        if (activity == "Protein shake" || activity == "Protein bar") {
            products += 1;
        } else {
            training_people += 1;
        }

        if (activity == "Back") {
            back += 1;
        } else if (activity == "Chest") {
            chest += 1;
        } else if (activity == "Legs") {
            legs += 1;
        } else if (activity == "Abs") {
            abs_ += 1;
        } else if (activity == "Protein shake") {
            shake += 1;
        } else if (activity == "Protein bar") {
            bar += 1;
        }
    }

    std::cout << back << " - back" << std::endl;
    std::cout << chest << " - chest" << std::endl;
    std::cout << legs << " - legs" << std::endl;
    std::cout << abs_ << " - abs" << std::endl;
    std::cout << shake << " - protein shake" << std::endl;
    std::cout << bar << " - protein bar" << std::endl;
    std::cout << std::fixed << std::setprecision(2) << (static_cast<double>(training_people) / jym_visitors) * 100 << "% - work out" << std::endl;
    std::cout << std::fixed << std::setprecision(2) << (static_cast<double>(products) / jym_visitors) * 100 << "% - protein" << std::endl;

    return 0;
}
