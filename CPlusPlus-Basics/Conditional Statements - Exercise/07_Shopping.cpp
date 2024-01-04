#include <iostream>
#include <iomanip>

int main()
{
    double budget;
    int video_cards, processors, ram_memory;

    std::cin >> budget >> video_cards >> processors >> ram_memory;

    double video_cards_off = 0.85;
    double video_cards_price_per_unit = 250;
    double processors_off = 0.35;
    double ram_memory_off = 0.10;
    double discount = 1;

    double video_cards_total_sum = video_cards * video_cards_price_per_unit;
    double processors_total_sum = (processors * video_cards_total_sum) * processors_off;
    double ram_memory_total_sum = (ram_memory * video_cards_total_sum) * ram_memory_off;

    if (video_cards > processors)
    {
        discount = 0.85;
    }

    double total_sum_to_pay = budget - ((video_cards_total_sum + processors_total_sum + ram_memory_total_sum) * discount);

    if (total_sum_to_pay >= 0)
    {
        std::cout << "You have " << std::fixed << std::setprecision(2) << std::abs(total_sum_to_pay) << " leva left!" << std::endl;
    }
    else
    {
        std::cout << "Not enough money! You need " << std::fixed << std::setprecision(2) << std::abs(total_sum_to_pay) << " leva more!" << std::endl;
    }

    return 0;
}
