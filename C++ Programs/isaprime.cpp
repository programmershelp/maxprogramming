#include <iostream>
#include <math.h>

using namespace std;

//Returns true if the given number is a Prime number
bool isPrime(int n)
{
    if (n == 1)
        return false; // as 1 is not a prime number

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    cout << "Is a Prime or not.\n";
    //variable declarations
    int number;
    bool prime = false;

    //taking input from the user
    cout << "Enter a positive integer other than 1 :  ";
    cin >> number;

    //Calling a method that returns true if the number is Prime
    prime = isPrime(number);

    if (prime)
    {
        cout << "\n\nThe number " << number << " is a Prime number.";
    }
    else
    {
        cout << "\n\nThe number " << number << " is not a Prime number.";
    }

    cout << "\n";

    return 0;
}