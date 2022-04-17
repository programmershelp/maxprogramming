#include <iostream>
using namespace std;

int main()
{

    cout << "Even or Odd \n\n";

    //variable declaration
    int number;

    //taking input from the command line
    cout << " Enter the number that you want to check : ";
    cin >> number;

    //check if the number is even or odd
    if(number % 2 == 0)
    {
        cout << "\n\nThe entered number "<< number << " is Even\n";
    }
    else
    {
        cout << "\n\nThe entered number "<< number << " is Odd\n";
    }

    cout << "\n\n";

    return 0;
}