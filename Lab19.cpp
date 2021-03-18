//==========================================================
//
// Title:      Credit Card Fraud
// Course:     CSC 1101
// Lab Number: 19
// Author:     Sadeem Shamoun
// Date:       11/19/19
// Description:
//		Stealing your credit card number one digit at a time
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
	int const ARRSIZE = 16;
	int cardNumber[ARRSIZE], i;
	string input;

	cout << "Enter 16 digits seperated by a space: ";
	getline(cin, input);
	cout << endl; 

	for (i = 0; i < ARRSIZE; i++) {
		cardNumber[i] = stoi(input.substr(i*2, 1));
	}

	cout << "Your card number is: ";
	for (i = 0; i < ARRSIZE; i++) {
		cout << cardNumber[i];
		if ((i+1) % 4 == 0 && (i + 1) < 16)
			cout << "-";
	}
}