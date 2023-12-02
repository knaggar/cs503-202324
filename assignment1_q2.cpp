/*
Replacing switch with if/else statements.
Author: Kareem Eid
ID: 202200420
*/

#include <iostream>

using namespace std;

int main()
{
    int x = 8;
    int y = 3;
    char op = '%';

    if (op == '-') cout << x - y;
    else if (op == '%') cout << x % y;
    else if (op == '*') cout << x * y;

    cout << endl;
    return 0;
}