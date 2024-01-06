/*
Calculate sum of even numbers between 235 & 346
Author: Kareem Eid
ID: 202200420
*/
#include <iostream>
using namespace std;

int main() {
    int counter_start = 235, counter_end = 346;
    int sum = 0;
    
    // program title
    cout << "Program: Calculating sum of even numbers from " << counter_start << "-" << counter_end << "...\n";
    
    // checking for even numbers and sum them up
    for (int i = counter_start; i <= counter_end; i++) {
        if (i % 2 == 0) sum += i;
    }

    // program output
    cout << "Total of even numbers from " << counter_start << " to " << counter_end << " is " << sum;
    
    cout << endl;
    return 0;
}