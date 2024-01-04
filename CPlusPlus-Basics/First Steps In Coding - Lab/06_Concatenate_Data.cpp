#include <iostream>
#include <string>

int main() {
    std::string firstName, lastName, town;
    int age;

    std::cin >> firstName >> lastName >> age >> town;

    std::cout << "You are " << firstName << " " << lastName << ", a " << age << "-years old person from " << town << "." << std::endl;

    return 0;
}
