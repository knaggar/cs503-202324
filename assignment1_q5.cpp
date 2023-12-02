/*
Rewrite if/else using switch

Author: Kareem Eid
ID: 202200420
*/
#include <iostream>

using namespace std;

int main(){
    int m=7, n=4, x=3;

    switch (x)
    {
    case 1:
    case 2:
        cout << m-n;
        break;
    case 3:
        cout << m+n;
        break;
    default:
        cout << m*n;
        break;
    }

    cout << endl;
    return 0;
}