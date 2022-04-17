#include <iostream>
using namespace std;

int main()
{
    cout << "Factorial of a number\n";

    //variable declaration
    int i,myNumber;
    int factorial=1;

    //take input from the user
    cout << "Enter the number to find the factorial for: ";
    cin >> myNumber;

    //find the factorial by multiplying all the numbers from 1 to n
    for (i = 1; i <= myNumber; i++)
    {
        factorial *= i;
    }

    cout << "\n\nThe Factorial of " << myNumber << " is: " << factorial;

    cout << "\n";

    return 0;
}