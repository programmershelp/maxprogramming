#include <iostream>
using namespace std;

int main()
{
    string myString1, myString2, result;

    cout << "Enter string 1: ";
    getline (cin, myString1);

    cout << "Enter string 2: ";
    getline (cin, myString2);

    result = myString1 + myString2;

    cout << "Concatenated String = "<< result;

    return 0;
}