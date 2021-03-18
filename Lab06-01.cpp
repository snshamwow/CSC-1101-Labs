//==========================================================
//
// Title:      Big Hot Air Balloon
// Course:     CSC 1101
// Lab Number: 6
// Author:     Sadeem Shamoun
// Date:       9/26/19
// Description:
//   Tells you some calculations of a hot air balloon.
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
	cout << "Big Hot Air Balloon" <<
		"\n-------------------------------------------" << endl;
	//Format Real Numbers
	cout << fixed << setprecision(3);

	//Declaring variables
	double V{};
	double C{};
	double A{};
	double r{};

	//Constants
	const double pi = 3.14159;
	
	//To user 
	cout << "Enter a radius (m):";
	cin >> r;

	//Initiating
	V = double ((4 / 3)*pi*r*r);
	C= double (2*pi*r);
	A = double (pi * r * r);

	//To screen 
	cout << setw(20) << left << "Radius (m):" << setw(10) << right << r << endl;
	cout << setw(20) << left << "Volume (m^3):" << setw(10) << right << V << endl;
	cout << setw(20) << left << "Circumference (m):" << setw(10) << right << C << endl;
	cout << setw(20) << left << "Area (m^2):" << setw(10) << right << A << endl;

	// Show application close
	cout << "-------------------------------------------" <<
		"\nHave a nice day!" << endl;
}