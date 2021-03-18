//==========================================================
//
// Title:      Gas Calculator
// Course:     CSC 1101
// Lab Number: 8-2
// Author:     Sadeem Shamoun
// Date:       10/03/19
// Description:
//		Shows how much it would cost to fill up your car 
//		given the gallon amount.
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
	cout << "US Currency Converter" <<
		"\n-------------------------------------------" << endl;

	//Constants
	setprecision(2);
	int const c = 20;
	int const w = 10;


	//Declaring variables
	int gallons;
	int octane;
	float gPrice;
	float total;

	//To screen user input
	cout << "\nEnter number of gallons purchased: ";
	cin >> gallons;

	// Conditions
	if (gallons <= 0)
	{
		cout << "\nSike thats the wrong number";
		// Show application close
		cout << "\n-------------------------------------------" << "\nHave a nice day!" << endl;
	}
	else if (gallons > 0)
	{
		cout << "\nEnter the octance/cetane (87-regular, 89-mid-range, 93-premium, 100-diesel): ";
		cin >> octane;

		switch (octane)
		{
		case (87):
			gPrice = 2.75;
			break;
		case (89):
			gPrice = 2.95;
			break;
		case (93):
			gPrice = 3.10;
			break;
		case (100):
			gPrice = 3.50;
			break;
		}
		
		total = (gPrice * gallons);

		// To screen
		cout << setw(c) << left << "\nGallons: " << setw(w) << right << gallons;
		cout << setw(c) << left << "\nOctane/cetane: " << setw(w) << right << octane;
		cout << setw(c) << left << "\nGas cost ($): " << setw(w) << right << gPrice;
		cout << setw(c) << left << "\nPurchase cost ($): " << setw(w) << right << total;


		// Show application close
		cout << "\n-------------------------------------------" << "\nHave a nice day!" << endl;
	}
	return(0);
}
