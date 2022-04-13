// Name:
// Date:
//Program Title:
//Program Description: A program to manipulate strings using
//pre-dfined functions...

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    //Declaring necessary variables...
    string fName, lName, wholeName;

    // Program title and description
    cout << "String Manipulator Example..."<<endl<<endl;

    // User input for first name and last name...
    cout << "Enter your first name: ";
    cin >> fName;
    cout << "Enter your last name: ";
    cin >> lName;

    // Concatinating our strings...

    wholeName = fName + " " + lName;

    cout << "You whole name is: " << wholeName << endl;


    // Length of the string...

    cout << "The length of your first name is : " << fName.length()<<endl;
    cout << "The length of your last name is : " << lName.length() << endl;
    cout << "The length of your whole name is : " << wholeName.length() << endl;


    //Return the index of the first occurance of a character

    cout << "Index/ Position of char 'r' =" << wholeName.find('r') << endl;


    cout << "Index/ Position of every character " << endl;
    for (int i = 0; i < wholeName.length(); i++)
    {
        cout << i << " " << wholeName[i] << endl;
    }
    

    cout << "\n HELLO WORLD!";

    //Returning a portion of the string (substring)...
    cout << "Substring of your whole name from position " <<
        "4 to 8 = " << wholeName.substr(4, 5) << endl;


    //Delete all characters in a string...
    fName.clear();


    cout << "First Name = " << fName << endl;

    //Check to see if your string is empty...

    cout << " Is your first name empty? " << fName.empty() << endl;
    cout << " Is your last name empty? " << lName.empty() << endl;

    return 0;


}
