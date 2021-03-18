//==========================================================
//
// Title:      String Analyzer
// Course:     CSC 1101
// Lab Number: 6-2
// Author:     Sadeem Shamoun
// Date:       9/27/19
// Description:
//	Gives some information about an inputted string 
//  with a corresponding character.
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
	cout << "String Analyzer" <<
		    "\n-------------------------------------------" << endl;

	//Declaring variables
	string W{};//string input
	char C{};//character input
	int cPos{};//where C is in W
	int L{};//Length of W
	int alpha;
	int num;
	int punct;

	//To user 
	cout << "Enter a string: ";
	getline(cin, W);
	cout << "Enter a character: ";
	cin >> C;

	//Calculations
	L = W.length();
	cPos = W.find(C);
	alpha = isalpha(C);
	num = isalnum(C);
	punct = ispunct(C);

	//To screen 
	cout << setw(20) << left << "\nString information: " << W << endl;
	cout << setw(20) << left << "Length:" << setw(10) << right << L << endl;
	cout << setw(20) << left << "Index:" << setw(10) << right << cPos << endl;
	cout << setw(20) << left <<"\nCharacter information: " << C << endl;
	cout << setw(20) << left << "Value:" << setw(10) << right << C << endl;
	cout << setw(20) << left << "Alpha? " << setw(10) << right << alpha << endl;
	cout << setw(20) << left << "Digit?:" << setw(10) << right << num << endl;
	cout << setw(20) << left << "Puncuation?:" << setw(10) << right << punct << endl;

	// Show application close
	cout << "-------------------------------------------" <<
		    "\nHave a nice day!" << endl;
}