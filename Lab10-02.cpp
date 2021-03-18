//==========================================================
//
// Title:      Planet Calculator
// Course:     CSC 1101
// Lab Number: 10-02
// Author:     Sadeem Shamoun
// Date:       10/21/19
// Description:
//		Planet calclulator
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
	int lineCount;
	int tokenCount;
	string planet;
	double diameter;
	double length;

	// Declare constants
	const string planets = "planets.txt";
	const int COLFMT1 = 11;
	const int COLFMT2 = 15;
	const int COLFMT3 = 15;
	cout << fixed << setprecision(1);

	// Attempt to open input file
	inFile.open(planets);
	if (!inFile.is_open())
		cout << "Error: unable to open file '"
		<< planets << "'." << endl << endl;
	else
	{
		// Print read messsage
		cout << "Reading tokens from file '" << planets
			<< "' ..." << endl << endl;

		//header
		getline(inFile, planet);
			cout << setw(COLFMT1) << left << "Planet"
			   	 << setw(COLFMT2+4) << right << "Diameter"
				 << setw(COLFMT3+5) << right << "Length"
				 << endl;
			cout << "--------------------------------------------------\n";

		// Loop to read from input file
		lineCount = 1;
		tokenCount = 0;

		while (inFile.good())
		{
			inFile >> planet;
			inFile >> diameter;
			inFile >> length;
		//data
			cout << setw(COLFMT1) << left << planet
				<< setw(COLFMT2) << right << diameter << "(mi)"
				<< setw(COLFMT3) << right << length << "(hr)"
				<< endl;
		//converted data
			cout << setw(COLFMT1) << left << " "
				<< setw(COLFMT2) << right << diameter * 5280 << "(ft)"
				<< setw(COLFMT3) << right << length * 60 << "(min)"
				<< endl;
			
			lineCount = lineCount + 1;
			tokenCount = tokenCount + 3;
		}

		// Close input file
		inFile.close();
		cout << endl << lineCount << " line(s) and "
			<< tokenCount << " token(s) read from file '"
			<< planets << "'." << endl << endl;

	}
}