//==========================================================
//
// Title:      Population Information
// Course:     CSC 1101
// Lab Number: 4-2
// Author:     Sadeem Shamoun
// Date:       9/23/19
// Description:
//   Population data of five countries.
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
	cout << "Information about the 5 following contries:" << endl;
	cout << "-------------------------------------------" << endl << endl;
	cout << "Country		Population	Land Area (sq km)	Density (people per sq km)" << endl;
	//Outputs:
	// Australia
	cout << "\nAustralia\t" << "25,274,428\t" << "7,692,024\t\t" << "3.28" <<
		//United States
		"\nUnited States\t" << "329,529,442\t" << "9,372,610\t\t" << "35.11" <<
		//Turkey
		"\nTurkey\t\t" << "83,667,955\t" << "783,562\t\t\t" << "106.47" <<
		//Iraq
		"\nIraq\t\t" << "39,529,168\t" << "438,317\t\t\t" << "89.68" <<
		//Germany
		"\nGermany\t\t" << "83,558,785\t" << "357,114\t\t\t" << "233.87" <<

		// Show application close
		"\n-------------------------------------------" <<
		"\nHave a nice day!" << endl;
}
