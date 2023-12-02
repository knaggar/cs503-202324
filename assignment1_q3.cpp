/*
Check password strength

Author: Kareem Eid
ID: 202200420
*/
#include <iostream>

using namespace std;

int main() {
    char userPassword_1, userPassword_2, userPassword_3;
    int _strength = 0;
    string strength, msg;

    cout << "Enter your password: ";
    cin >> userPassword_1 >> userPassword_2 >> userPassword_3;
    ++_strength;

    if (
        userPassword_1 >= '0' && userPassword_1 <= '9' ||
        userPassword_2 >= '0' && userPassword_2 <= '9' ||
        userPassword_3 >= '0' && userPassword_3 <= '9')
    { ++_strength; } 
    else  { msg += "\t- Add a number\n"; }

    if (
        userPassword_1 >= 'A' && userPassword_1 <= 'Z' ||
        userPassword_2 >= 'A' && userPassword_2 <= 'Z' ||
        userPassword_3 >= 'A' && userPassword_3 <= 'Z')
    { ++_strength; } 
    else { msg += "\t- Add a capital letter\n"; }

    switch (_strength){
        case 1:
            strength = "good";
            break;
        case 2:
            strength = "moderate";
            break;
        case 3:
            strength = "excellent";
            break;
        default:
            break;
    }

    cout << endl << "Password strength is " << strength << endl;
    
    if (_strength < 3) cout << "Password problems: " << endl << msg;
    else cout << "No problems found!" << endl;

    cout << endl;
    return 0;
}