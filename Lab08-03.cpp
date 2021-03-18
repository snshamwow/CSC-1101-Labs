//==========================================================
//
// Title:      Frozen Fliers
// Course:     CSC 1101
// Lab Number: 8-3
// Author:     Sadeem Shamoun
// Date:       10/03/19
// Description:
//		Calculates Celsius and Fahrenheit temperatures
// at a given altitude within givin ranges. 
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
	int const c = 30;
	int const w = 18;

	//Declaring variables
	float gT;//ground temp
	float aT;//air temp
	float aTf;//air temp fahrenheit
	float alt{};//altitude

	//To user 
	cout << "\nEnter the ground temperature in Celsius: ";
	cin >> gT;
	if (gT > 50 or gT < -30)

	{
		cout << "\nEnter a number between -30 and 50";
		// Show application close
		cout << "\n-------------------------------------------" << "\nHave a nice day!" << endl;
	}

	else if (gT < 50 or gT >-30)
	{
		{
			cout << "\nEnter the altitude in kilometers: ";
			cin >> alt;
		}

		if (alt > 15 or alt < 1)
		{
			cout << "\nEnter a number between 1 and 15";
	
			// Show application close
			cout << "\n-------------------------------------------" << "\nHave a nice day!" << endl;
		}
		else if (alt >= 1 or alt <= 15)
		{
			//Calculations
			aT = gT - (alt * 6.5);
			aTf = (aT - 32) * (.56);

			//To screen 
			cout << setw(c+1) << left << "\nGround temperature:" << setw(w) << right << gT << DEGREE_SYMBOL << "C" << endl;
			cout << setw(c) << left << "Altitude:" << setw(w) << right << alt << "km" << endl;
			cout << setw(c) << left << "Air temperature:" << setw(w) << right << aT << DEGREE_SYMBOL << "C" << endl;
			cout << setw(c) << left << "Air temperature:" << setw(w) << right << aTf << DEGREE_SYMBOL << "F" << endl;

			// Show application close
			cout << "-------------------------------------------" << "\nHave a nice day!" << endl;
			return 0;
		}
	}
}