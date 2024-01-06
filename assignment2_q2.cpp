/*
Check for a perfect nunber
Author: Kareem Eid
ID: 202200420
*/
#include <iostream>
using namespace std;

// check if given number is a perfect number
bool isPerfectNum(int num) {
    int total = 0;
    for (int i=1; i < num; i++) if (num % i == 0) total += i;

    return total == num ;
}

int main() {
    int in_number;

    // program title
    cout << "Program: Check for a perfect number\n\n";

    // program input
    cout << "Please enter a number: ";
    cin >> in_number;

    // program output
    if (isPerfectNum(in_number)) cout << endl << in_number << " is a perfect number.";
    else cout << endl << in_number << " is not a perfect number.";
   
    cout << endl;
    return 0;
}