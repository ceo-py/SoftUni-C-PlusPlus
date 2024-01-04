#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    int days;
    std::string type_of_room, score;
    double room_for_one_person = 18, apartment = 25, president_apartment = 35;
    double discount = 1, room_price = 0, final_price = 0;

    std::cin >> days;
    std::cin.ignore(); 
    std::getline(std::cin, type_of_room);
    std::getline(std::cin, score);

    if (days >= 1)
    {
        days = days - 1;
    }

    if (type_of_room == "room for one person")
    {
        room_price = room_for_one_person;
    }
    else if (type_of_room == "apartment")
    {
        if (days < 10)
        {
            discount = 0.7;
        }
        else if (days <= 15)
        {
            discount = 0.65;
        }
        else if (days > 15)
        {
            discount = 0.5;
        }
        room_price = apartment;
    }
    else if (type_of_room == "president apartment")
    {
        if (days < 10)
        {
            discount = 0.9;
        }
        else if (days <= 15)
        {
            discount = 0.85;
        }
        else if (days > 15)
        {
            discount = 0.80;
        }
        room_price = president_apartment;
    }

    room_price *= discount * days;

    if (score == "positive")
    {
        final_price = room_price * 1.25;
    }
    else if (score == "negative")
    {
        final_price = room_price * 0.90;
    }

    std::cout << std::fixed << std::setprecision(2) << final_price << std::endl;

    return 0;
}
