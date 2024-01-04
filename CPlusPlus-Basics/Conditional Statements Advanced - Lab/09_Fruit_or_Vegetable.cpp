#include <iostream>
#include <string>

int main()
{
    std::string product_name;
    std::getline(std::cin >> std::ws, product_name);

    std::string output = "unknown";

    if (product_name == "banana" || product_name == "apple" || product_name == "kiwi" ||
        product_name == "cherry" || product_name == "lemon" || product_name == "grapes")
    {
        output = "fruit";
    }
    else if (product_name == "tomato" || product_name == "cucumber" ||
             product_name == "pepper" || product_name == "carrot")
    {
        output = "vegetable";
    }

    std::cout << output << std::endl;

    return 0;
}
