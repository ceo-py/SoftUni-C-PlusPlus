#include <iostream>

int main()
{
    int days_for_reviewed_patients;
    std::cin >> days_for_reviewed_patients;

    int total_treated_patients = 0;
    int total_untreated_patients = 0;
    int doctors = 7;
    int new_doctors = 0;

    for (int day = 1; day <= days_for_reviewed_patients; ++day)
    {
        int patients_for_review;
        std::cin >> patients_for_review;

        if (day % 3 == 0 && total_untreated_patients > total_treated_patients)
        {
            new_doctors += 1;
        }

        if (patients_for_review <= (doctors + new_doctors))
        {
            total_treated_patients += patients_for_review;
        }
        else
        {
            total_treated_patients += (doctors + new_doctors);
            total_untreated_patients += patients_for_review - (doctors + new_doctors);
        }
    }

    std::cout << "Treated patients: " << total_treated_patients << "." << std::endl;
    std::cout << "Untreated patients: " << total_untreated_patients << "." << std::endl;

    return 0;
}
