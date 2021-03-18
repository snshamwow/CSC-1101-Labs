//==========================================================
//
// Title:      Lake Stuff
// Course:     CSC 1101
// Lab Number: 10-02
// Author:     Sadeem Shamoun
// Date:       10/21/19
// Description:
//		reads from file with data about Lake Huron
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
	// Declare variables
	ifstream inFile;
	int lineCount, year, yearmin{}, yearmax{};
	string line;
	double level, minval, maxval, length, levelavg{};


	// Declare constants
	const string lake = "MichiganHuronLakeLevels.txt";
	const int COLFMT1 = 15;
	const int COLFMT2 = 15;
	const int COLFMT3 = 15;
	cout << fixed << setprecision(3);
	minval = DBL_MAX;
	maxval = DBL_MIN;

	// Attempt to open input file
	inFile.open(lake);
	if (!inFile.is_open())
		cout << "Error: unable to open file '"
		<< lake << "'." << endl << endl;
	else
	{
		//skipping first two lines
		getline(inFile, line);
		getline(inFile, line);

		// Loop to read from input file
		lineCount = 0;

		while (inFile.good())
		{
			inFile >> year >> level;
			if (maxval < level)
			{
				yearmax = year;
				maxval = level;
			}

			if (minval > level)
			{
				yearmin = year;
				minval = level;
			}
			levelavg += level;
			lineCount++;
		}
		levelavg /= lineCount;
		// Print read messsage
		cout << "Reading tokens from file '" << lake
			<< "' ..." << endl << endl;

		//header
		cout << setw(COLFMT1) << left << " "
			<< setw(COLFMT2) << right << "Year"
			<< setw(COLFMT3 + 7) << right << "Level (meters)"
			<< endl;
		cout << "-----------------------------------------------------\n";

		//data
		cout << setw(COLFMT1) << left << "Max level: "
			<< setw(COLFMT1) << right << yearmax
			<< setw(COLFMT2 + 3) << right << maxval << "(m)"
			<< endl;
		cout << setw(COLFMT1) << left << "Min level: "
			<< setw(COLFMT1) << right << yearmin
			<< setw(COLFMT2 + 3) << right << minval << "(m)"
			<< endl;
		cout << setw(COLFMT1) << left << "Average level: "
			<< setw(COLFMT1) << right << " "
			<< setw(COLFMT2 + 3) << right << levelavg << "(m)"
			<< endl;

		// Close input file
		inFile.close();
		cout << endl << lineCount << " line(s) read from file '"
			<< lake << "'." << endl;
		return 0;
	}
}
