//==========================================================
//
// Title:      Frozen Filers
// Course:     CSC 1101
// Lab Number: 6-3
// Author:     Sadeem Shamoun
// Date:       9/27/19
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
	cout << "Altitude and Temperature" <<
		"\n-------------------------------------------" << endl;

	//Constants
	const char DEGREE_SYMBOL = (char)167;
	setprecision(2);

	//Declaring variables
	float gT;//ground temp
	float aT;//air temp
	float aTf;//air temp fahrenheit
	float alt;//altitude

	//To user 
	cout << "Enter the ground temperature in Celsius: ";
	cin >> gT;

	cout << "Enter the altitude in kilometers: ";
	cin >> alt;

	//Calculations
	aT = gT - (alt * 6.5);
	aTf = (aT - 32) * (.56);

	//To screen 
	cout << setw(25) << left << "\nGround temperature:" << setw(16) << right << gT << DEGREE_SYMBOL << "C" << endl;
	cout << setw(25) << left << "Altitude:" << setw(17) << right << alt << endl;
	cout << setw(25) << left << "Air temperature:" << setw(15) << right << aT << DEGREE_SYMBOL<< "C" << endl;
	cout << setw(25) << left << "Air temperature:" << setw(15) << right << aTf << DEGREE_SYMBOL<< "F" << endl;

	// Show application close
	cout << "-------------------------------------------" << "\nHave a nice day!" << endl;

	return 0;
};