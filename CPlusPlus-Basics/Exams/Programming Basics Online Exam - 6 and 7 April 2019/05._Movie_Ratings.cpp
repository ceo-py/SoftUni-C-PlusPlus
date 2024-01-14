#include <iostream>
#include <iomanip>
#include <string>

int main() {
    int movies_count;

    std::cin >> movies_count;
    std::cin.ignore(); 

    std::string best_movie_name;
    float best_movie_rating = -10.0;

    std::string worst_movie_name;
    float worst_movie_rating = 10.0;

    float average_rating = 0.0;

    for (int movie = 0; movie < movies_count; ++movie) {
        std::string movie_name;
        float movie_rating;

        std::getline(std::cin, movie_name);
        std::cin >> movie_rating;
        std::cin.ignore();

        if (movie_rating > best_movie_rating) {
            best_movie_name = movie_name;
            best_movie_rating = movie_rating;
        } else if (movie_rating < worst_movie_rating) {
            worst_movie_name = movie_name;
            worst_movie_rating = movie_rating;
        }

        average_rating += movie_rating;
    }

    std::cout << best_movie_name << " is with highest rating: " << std::fixed << std::setprecision(1) << best_movie_rating << std::endl;
    std::cout << worst_movie_name << " is with lowest rating: " << std::fixed << std::setprecision(1) << worst_movie_rating << std::endl;
    std::cout << "Average rating: " << std::fixed << std::setprecision(1) << (average_rating / movies_count) << std::endl;

    return 0;
}
