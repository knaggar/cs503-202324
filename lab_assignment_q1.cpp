/*
Check for a leap year

Author: Kareem Eid
ID: 202200420
*/
#include <iostream>
using namespace std;


bool isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

int main()
{
    int year;
    char yesNo;
    bool _checking = true;

    while (_checking)
    {
        cout << "Please enter a year: ";
        cin >> year;

        if (isLeapYear(year)) { 
            cout << endl << year << " is a leap year." << endl; 
        } else {
            cout << endl << year << " is not a leap year." << endl;
        }

        cout << endl << "Do you want to check for another year? ";
        cin >> yesNo;

        if (yesNo != 'y') _checking = false;
    }

    cout << endl << "Best of luck!" << endl;

    cout << endl;
    return 0;
}
