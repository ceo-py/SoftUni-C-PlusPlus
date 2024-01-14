#include <iostream>
#include <cmath>

int main()
{
    double price_tennis_racket;
    int total_tennis_racket, number_tennis_sneakers;

    std::cin >> price_tennis_racket >> total_tennis_racket >> number_tennis_sneakers;

    double rackets_total_price = price_tennis_racket * total_tennis_racket;
    double one_sneakers_price = price_tennis_racket / 6;
    double all_sneakers_price = one_sneakers_price * number_tennis_sneakers;
    double total_price_equipment = rackets_total_price + all_sneakers_price + (rackets_total_price + all_sneakers_price) * 0.2;

    double djokovic_price = total_price_equipment / 8;
    double sponsors_price = total_price_equipment * (7.0 / 8.0);

    std::cout << "Price to be paid by Djokovic " << static_cast<int>(std::floor(djokovic_price)) << std::endl;
    std::cout << "Price to be paid by sponsors " << static_cast<int>(std::ceil(sponsors_price)) << std::endl;

    return 0;
}
