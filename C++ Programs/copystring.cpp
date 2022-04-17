#include <iostream>
using namespace std;

int main()
{
    string myString1, myString2;

    cout << "Enter string 1: ";
    getline (cin, myString1);

    myString2 = myString1;

    cout << "string 1 = "<< myString1 << endl;
    cout << "string 2 = "<< myString2;

    return 0;
}