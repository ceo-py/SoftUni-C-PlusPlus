#include <iostream>
#include <string>

int main()
{
    float person_age;
    std::string person_sex;

    std::cin >> person_age >> person_sex;

    std::string title;

    if (person_sex == "m")
    {
        if (person_age < 16)
        {
            title = "Master";
        }
        else
        {
            title = "Mr.";
        }
    }
    else if (person_sex == "f")
    {
        if (person_age < 16)
        {
            title = "Miss";
        }
        else
        {
            title = "Ms.";
        }
    }

    std::cout << title << std::endl;

    return 0;
}
