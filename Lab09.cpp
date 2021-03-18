//==========================================================
//
// Title:      Calculator
// Course:     CSC 1101
// Lab Number: 9
// Author:     Sadeem Shamoun
// Date:       10/08/19
// Description:
//		Calculates Celsius and Fahrenheit temperatures
// at a given altitude within givin ranges. 
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
	cout << "Calculator" <<
		"\n-------------------------------------------" << endl;

	//Constants
	const char DEGREE_SYMBOL = (char)167;
	setprecision(2);
	int const c = 10;
	int const w = 20;

	//Declaring variables
	float n1;//number1
	float n2;//number2
	float ans;//answer
	char op; //operation
	//To user 
	cout << "\nEnter number 1: ";
	cin >> n1;

	cout << "\nEnter number 2: ";
	cin >> n2;

	cout << "-------------------------------------------" << endl;
	
	cout << setw(w) << left << "\nAddition:" << setw(c) << right << "+" <<
			setw(w) << left << "\nSubtraction:" << setw(c) << right << "-";
	
	cout << "\nEnter the operation's corresponding character: ";
		cin >> op;

		switch (op)
		{
		case '+': ans = n1 + n2;
			break;

		case '-': ans = n1 - n2;
			break;

		default: 
			cout << "ERROR: Enter either + or -" << endl;

			// Show application close
			cout << "-------------------------------------------" << "\nHave a nice day!" << endl;
			return 0;
			
		}

	//To screen 
		cout << "\nCalculator: " << n1 << op << n2 << "=" << ans << endl;
			
	// Show application close
		cout << "-------------------------------------------" << "\nHave a nice day!" << endl;
		return 0;
//}