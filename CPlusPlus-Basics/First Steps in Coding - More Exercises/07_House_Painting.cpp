#include <iostream>
#include <iomanip>

int main()
{
    double house_height, house_length, wall_of_the_roof_height;

    std::cin >> house_height >> house_length >> wall_of_the_roof_height;

    const double windows = 2.25;
    const double door = 2.4;
    const double green_paint = 3.4;
    const double red_paint = 4.3;

    double side_wall = house_height * house_length;
    double side_wall_total = (side_wall * 2) - (windows * 2);
    double back_wall = ((house_height * house_height) * 2) - door;
    double total_area_walls = side_wall_total + back_wall;
    double green_paint_needed = total_area_walls / green_paint;

    double two_rectangle_roof = 2 * (house_height * house_length);
    double two_triangle_roof = 2 * (house_height * wall_of_the_roof_height / 2);
    double total_area_roof = two_rectangle_roof + two_triangle_roof;
    double red_paint_needed = total_area_roof / red_paint;

    std::cout << std::fixed << std::setprecision(2) << green_paint_needed << std::endl;
    std::cout << std::fixed << std::setprecision(2) << red_paint_needed << std::endl;

    return 0;
}
