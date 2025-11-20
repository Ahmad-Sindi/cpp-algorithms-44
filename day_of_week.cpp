// Algorithm Challenge
// 44 Day of Week
// Converts a number (1-7) to its corresponding day of the week

#include <iostream>
using namespace std;

int main()
{
    int dayNumber;

    // Ask the user to enter a number
    cout << "Enter the number of the day (1-7): ";
    cin >> dayNumber;

    // Input validation: repeat until a valid number is entered
    while (dayNumber < 1 || dayNumber > 7)
    {
        cout << "The number is not correct. Please enter a number between 1 and 7: ";
        cin >> dayNumber;
    }

    // Map numbers to days of the week
    if (dayNumber == 1)
        cout << "It is Saturday\n";
    else if (dayNumber == 2)
        cout << "It is Sunday\n";
    else if (dayNumber == 3)
        cout << "It is Monday\n";
    else if (dayNumber == 4)
        cout << "It is Tuesday\n";
    else if (dayNumber == 5)
        cout << "It is Wednesday\n";
    else if (dayNumber == 6)
        cout << "It is Thursday\n";
    else if (dayNumber == 7)
        cout << "It is Friday\n";

    return 0;
}
