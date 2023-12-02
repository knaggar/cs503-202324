/*
Find number of vowels, consonants, digits and white-spaces from user input.
Author: Kareem Eid
ID: 202200420
*/
#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    char str_1, str_2, str_3;
    int vowels = 0, consonants = 0, digits = 0, whitespaces = 0;

    cout << "Enter a text that's not more than 3 characters: ";
    cin >> str_1 >> str_2 >> str_3;

    switch (str_1)
    {
    case 'a': case 'e': case 'i': case 'o': case 'u':
        ++vowels;
        break;
    case 'b': case 'c': case 'd': case 'f': case 'g': case 'h': case 'j': case 'k': case 'l': case 'm': case 'n': case 'p': case 'q': case 'r': case 's': case 't': case 'v': case 'w': case 'x': case 'y': case 'z': 
        ++consonants;
        break;
    case '0' ... '9':
        ++digits;
        break;
    case ' ':
        ++whitespaces;
        break;
    default:
        break;
    }
    
    switch (str_2)
    {
    case 'a': case 'e': case 'i': case 'o': case 'u':
        ++vowels;
        break;
    case 'b': case 'c': case 'd': case 'f': case 'g': case 'h': case 'j': case 'k': case 'l': case 'm': case 'n': case 'p': case 'q': case 'r': case 's': case 't': case 'v': case 'w': case 'x': case 'y': case 'z': 
        ++consonants;
        break;
    case '0' ... '9':
        ++digits;
        break;
    case ' ':
        ++whitespaces;
        break;
    default:
        break;
    }

    switch (str_3)
    {
    case 'a': case 'e': case 'i': case 'o': case 'u':
        ++vowels;
        break;
    case 'b': case 'c': case 'd': case 'f': case 'g': case 'h': case 'j': case 'k': case 'l': case 'm': case 'n': case 'p': case 'q': case 'r': case 's': case 't': case 'v': case 'w': case 'x': case 'y': case 'z': 
        ++consonants;
        break;
    case '0' ... '9':
        ++digits;
        break;
    case ' ':
        ++whitespaces;
        break;
    default:
        break;
    }

    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;
    cout << "Number of digits: " << digits << endl;
    cout << "Number of whitespaces: " << whitespaces << endl;


    cout << endl;
    return 0;
}