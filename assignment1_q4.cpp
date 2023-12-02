/*
Orders total invoice

Author: Kareem Eid
ID: 202200420
*/
#include <iostream>
using namespace std;

int main()
{
    int firstItemSetNum, firstItemQty, secondItemSetNum, secondItemQty, currentItems = 0;
    char yesNo;
    double total, firstSelectedSet, secondSelectedSet;
    double setOne = 0.99, setTwo = 1.09, setThree = 1.49, setFour = 2.79, setFive = 0.99;

    cout << "*********************** FOOD MENU ***********************  \n";
    cout << "Sandwich                                    Price          \n";
    cout << "1) Regular Hamburger                         " << setOne << "\n";
    cout << "2) Regular Cheeseburgeer                     " << setTwo << "\n";
    cout << "3) Fish Sandwich                             " << setThree << "\n";
    cout << "4) Half-pounder w/cheese                     " << setFour << "\n";
    cout << "5) French fries                              " << setFive << "\n";
    cout << "*********************************************************  \n";

    cout << "Which sandwich do you prefer (enter sandwich number)? ";
    cin >> firstItemSetNum;
    cout << "How many orders do you want? ";
    cin >> firstItemQty;
    cout << "Do you want to make another order (y/N)? ";
    cin >> yesNo;
    currentItems++;

    if (firstItemSetNum == 1) firstSelectedSet = setOne;
    else if (firstItemSetNum == 2) firstSelectedSet = setTwo;
    else if (firstItemSetNum == 3) firstSelectedSet = setThree;
    else if (firstItemSetNum == 4) firstSelectedSet = setFour;
    else if (firstItemSetNum == 5) firstSelectedSet = setFive;

    if (yesNo == 'Y' || yesNo == 'y') {
        cout << "Which sandwich do you prefer (enter sandwich number)? ";
        cin >> secondItemSetNum;
        cout << "How many orders do you want? ";
        cin >> secondItemQty;
        cout << "Do you want to make another order (y/N)? ";
        cin >> yesNo;
        currentItems++;

        if (secondItemSetNum == 1) secondSelectedSet = setOne;
        else if (secondItemSetNum == 2) secondSelectedSet = setTwo;
        else if (secondItemSetNum == 3) secondSelectedSet = setThree;
        else if (secondItemSetNum == 4) secondSelectedSet = setFour;
        else if (secondItemSetNum == 5) secondSelectedSet = setFive;
    } 
    
    if (currentItems > 1) cout << endl << "You can't order more than 2 items." << endl;

    total = (firstSelectedSet * firstItemQty) + (secondSelectedSet * secondItemQty);

    cout << endl
         << "The total invoice is " << total << endl;

    cout << endl;
    return 0;
}