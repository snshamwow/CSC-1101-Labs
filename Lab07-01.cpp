//==========================================================
//
// Title:      Burger King Menu	
// Course:     CSC 1101
// Lab Number: 7-1
// Author:     Sadeem Shamoun
// Date:       10/01/19
// Description:
//		Calculates Celsius and Fahrenheit temperatures
// at a given altitude. 
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
	cout << "Burger King Menu" <<
		"\n-------------------------------------------" << endl;

	//Constants
	const char DEGREE_SYMBOL = (char)167;
	setprecision(2);

	//Declaring variables
	int choice;
	float total;
	
	//To screen menu
	cout << setw(15) << left << "1.) Hamburger-" << setw(5) << right << "$5" << endl;
	cout << setw(15) << left << "2.) Fries-" << setw(5) << right << "$2" << endl;
	cout << setw(15) << left << "3.) Drink-" << setw(5) << right << "$1" << endl;
	cout << setw(15) << left << "4.) Hotdog-" << setw(5) << right << "$4" << endl;
	cout << "-------------------------------------------";

	//To screen user input
	cout << "\nWhat would you like to order today? ";
	cin >> choice;
	cout << "-------------------------------------------" << endl;
	

	//Calculations
	if (choice == 1)
	{
		total = 5;
		cout << "Your total for the hamburger is $" << total << ".";
	}
	else if (choice == 2)
	{
		total = 2;
		cout << "Your total for the fries is $" << total << ".";
	}
	else if (choice == 3)
	{
		total = 1;
		cout << "Your total for the drink is $" << total << ".";
	}
	else if (choice == 4)
	{
		total = 4;
		cout << "Your total for the hotdog is $" << total << ".";
	}

	total = (total * 0.10) + total;

	// Show application close
	cout << "\n-------------------------------------------" << "\nHave a nice day!" << endl;

	return 0;
};