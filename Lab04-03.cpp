//==========================================================
//
// Title:      Library Registration System
// Course:     CSC 1101
// Lab Number: 5
// Author:     Sadeem Shamoun
// Date:       9/24/19
// Description:
//   Puts your information in a list for the library
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{
	// Show application header
	cout << "Library Registration System" <<
	"\n-------------------------------------------" << endl;
	
	//Declaring variables
	string fName;
	string lName;
	string email;
	int age;
	
	//To user 
	cout << "Enter your first name:";
	cin >> fName;
	cout << "Enter your last name:";
	cin >> lName;
	cout << "Enter your age:";
	cin >> age;

	//To screen 
	cout << setw(15) << left << "First name:" << setw(10) << right << fName << endl;
	cout << setw(15) << left << "Last name:" << setw(10) << right << lName << endl;
	cout << setw(15) << left << "Age:" << setw(10) << right << age<< endl;
	cout << setw(15) << left << "E-mail:" << setw(10) << right << email << endl;
	
	// Show application close
	cout << "-------------------------------------------" <<
	"\nHave a nice day!" << endl;
}
