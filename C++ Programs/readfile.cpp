#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    cout << "how to read the contents from a file\n";

    //declaration of a string variable
    string myString;

    // creating a variable for file handling.
    ifstream inFile;

    //open file in same path
    inFile.open("fileexample.txt");

    cout << "Contents of the file is: \n\n";

    // printing the file contents word by word
    while(inFile>>myString)
        cout << myString << " ";
    
    cout << "\n";

    // close the file.
    inFile.close();

    return 0;
}