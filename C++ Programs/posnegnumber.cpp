#include <iostream>
using namespace std;

int main()
{
    cout << "number is positive or negative\n\n";

    int myNumber;

    //taking user input
    cout << "Enter a non-zero Number: ";
    cin >> myNumber;

    //display output depending on result
    if (myNumber > 0)
    {
        cout << "\nEntered number is positive";
    }
    else
    {
        cout << "\nEntered number is negative";
    }

    cout << "\n";

    return 0;
}