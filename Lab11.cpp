//==========================================================
//
// Title:      Even/Odd Counter
// Course:     CSC 1101
// Lab Number: 10
// Author:     Sadeem Shamoun
// Date:       10/17/19
// Description:
//		tells you how many odd and even terms given a number 
//to count up to 
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
	char sym;

	cout << “Enter element symbol <<
		<< “\nB - Boron” <<
		<< “\nC - Carbon”<<
		<<”\nN - Nitrogren” <<
		<<”\nO - Oxygen: ”;
	cin >> sym;

	if (sym != B || sym != C || sym != N || sym != O);
		cout << Error: character entered is not an option.” << endl;
	else if (sym == B)
		cout << “Atomic number is 5” <<

}