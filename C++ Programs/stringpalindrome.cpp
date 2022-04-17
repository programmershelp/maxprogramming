#include <bits/stdc++.h>
using namespace std;

// Function to check whether string is palindrome
string isPalindrome(string myString)
{
	// Iterate over the range [0, N/2]
	for (int i = 0; i < myString.length() / 2; i++) 
	{
		if (myString[i] != myString[myString.length() - i - 1]) 
		{
			// Return No
			return "No is not a palindrome";
		}
	}
	// Return "Yes"
	return "Yes is a palindrome";
}

int main()
{
	string myString = "ABCDCBA";
	cout << isPalindrome(myString);

	return 0;
}