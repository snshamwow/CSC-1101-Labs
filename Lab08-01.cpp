//==========================================================
//
// Title:      Currency Converter
// Course:     CSC 1101
// Lab Number: 8-1
// Author:     Sadeem Shamoun
// Date:       10/03/19
// Description:
//		Converts US dollars to another currency
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
	const char DEGREE_SYMBOL = (char)167;
	setprecision(2);

	//Declaring variables
	
	float money1;
	float convRate{};
	string money2;
	float money3;

	//To screen user input
	cout << "\nEnter currency to convert US dollars to: ";
	getline(cin, money2);

	cout << "\nEnter amount to be converted: ";
	cin >> money1;
	if (money1 <= 0)
	{
		cout << "\nSike thats the wrong number";
		// Show application close
		cout << "\n-------------------------------------------" << "\nHave a nice day!" << endl;
	}
	else if (money1 > 0)
	{
		if (money2 == "Euro")
		{
			convRate = .91;
		}
		else if (money2 == "Danish Krone")
		{
			convRate = 6.79;
		}

		money3 = (convRate * money1);
		cout << "\nConverted currency: " << money3;

		// Show application close
		cout << "\n-------------------------------------------" << "\nHave a nice day!" << endl;
	}
	return(0);
}
