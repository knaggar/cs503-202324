/*
Production table 1-12 
Author: Kareem Eid
ID: 202200420
*/
#include <iostream>
using namespace std;

int main(){
    // program title
    cout << "Production table from 1 to 12" << endl;

    // bulding periodic table 
    for (int i=1; i <= 12; i++) {
        for (int j=i; j <= 12; j++) {
            cout << i << "x" << j << "=" << i*j << "\t";
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}