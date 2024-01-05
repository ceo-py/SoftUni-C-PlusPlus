#include <iostream>
#include <string>

int main()
{
    std::string weather_type;
    std::cin >> weather_type;
    std::cout << "It's " << (weather_type == "sunny"? "warm": "cold") << " outside!" << std::endl;


    return 0;
}




// #include <iostream>
// #include <string>

// int main() {
//     std::string weather_type;
//     std::cin >> weather_type;

//     if (weather_type == "sunny") {
//         std::cout << "It's warm outside!" << std::endl;
//     } else {
//         std::cout << "It's cold outside!" << std::endl;
//     }

//     return 0;
// }
