/*
Search element in an array
Author: Kareem Eid
ID: 202200420
*/
#include <iostream>
using namespace std;

int main()
{
    int array_size, idx;
    int arr[array_size];
    int lookup_num;
    bool found = false;

    // program title
    cout << "Program: Search element in an array" << endl;

    // program interface
    cout << "How many elements you need in that array? ";
    cin >> array_size;

    cout << "Enter a list of numbers (max. " << array_size << " numbers)" << endl;

    for (int i = 0; i < array_size; i++) cin >> arr[i];

    cout << "Which number are you looking for? ";
    cin >> lookup_num;

    // checking for element index
    for (int i = 0; i < array_size; i++) {
        if (arr[i] == lookup_num) {
            found = true;
            idx = i;
        }
    }

    // program output
    if (found){
        cout << "\nNumber found in array at index: " << idx;
    } else {
        cout << "\nThis number does not exist in the array.";
    }

    cout << endl;
    return 0;
}