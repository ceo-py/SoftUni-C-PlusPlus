#include <iostream>
#include <string>

int main()
{
    const int goalSteps = 10000;
    int remainingSteps = goalSteps;

    while (remainingSteps > 0)
    {
        std::string steps;
        std::getline(std::cin, steps);

        if (steps == "Going home")
        {
            int stepsHome;
            std::cin >> stepsHome;
            remainingSteps -= stepsHome;
            break;
        }

        remainingSteps -= std::stoi(steps);
    }

    if (remainingSteps <= 0)
    {
        std::cout << "Goal reached! Good job!" << std::endl;
    }
    else
    {
        std::cout << abs(remainingSteps) << " more steps to reach goal." << std::endl;
    }

    return 0;
}
