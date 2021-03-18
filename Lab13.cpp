//==========================================================
//
// Title:      Burger King Menu	Upgraded
// Course:     CSC 1101
// Lab Number: 13
// Author:     Sadeem Shamoun
// Date:       10/29/19
// Description:
//		Menu stuff
//
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
	setprecision(2);

	//Declaring variables
	int choice;
	float total = 0;

	do
	{
		cout << "Please select an item from the menu or complete your order:" << endl;
		cout << setw(15) << left << "1.) Hamburger" << setw(5) << right << "$10" << endl;
		cout << setw(15) << left << "2.) Soda" << setw(5) << right << "$1" << endl;
		cout << setw(15) << left << "0.) Complete Order" << setw(5) << endl;
		cout << "Your total: $" << total << endl;
		cout << "What would you like to order? " << endl;
		cin >> choice;
		cout << "-------------------------------------------" << endl;

	
		if (choice == 1) 
		{
		total += 10;
		}
		else if (choice == 2)
		{
			total += 1;
		}
	
	} while (choice != 0);
	cout << "Your total is $" << total << ", thanks for ordering!" <<endl;


	// Show application close
	cout << "\n-------------------------------------------" << "\nHave a nice day!" << endl;

	return 0;
};