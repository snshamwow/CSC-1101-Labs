//==========================================================
//
// Title:      Array Amazons
// Course:     CSC 1101
// Lab Number: 16-01
// Author:     Sadeem Shamoun
// Date:       11/07/19
// Description:
//		calculates
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
	//variables
	int vowels = 0, letters = 0, digits = 0, punctuation = 0, other = 0;

	//constants
	int const r = 15, l = 5, aS = 8;
	
	//array declaration
	char characters[aS];

	//prompting user
	int i;
	for (i = 0; i < 8; i++)
	{ 
		cout << "Enter a character: ";
		cin >> characters[i];
		cout << endl;
	}

	//char entered
	cout << "\nCharacters entered:" << endl;
	for (i = 0; i < 8; i++)
	{
		cout << characters[i] << endl;
	}

	//character analysis
	for (i = 0; i < 8; i++)
	{
		if (characters[i] == 'a' || characters[i] == 'e' ||
			characters[i] == 'i' || characters[i] == 'o' ||
			characters[i] == 'u')
			vowels++;

		else if (isalpha(characters[i]))
			letters++;

		else if (isdigit(characters[i]))
			digits++;

		else if (ispunct(characters[i]))
			punctuation++;

		else
			other++;
	}
	//character counts
	cout << "\nCharacter counts:" << endl;
	cout << left << setw(r) << "Vowels: " << right << setw(l) << vowels << endl;
	cout << left << setw(r) << "Letters: " << right << setw(l) << letters << endl;
	cout << left << setw(r) << "Digits: " << right << setw(l) << digits << endl;
	cout << left << setw(r) << "Punctuation: " << right << setw(l) << punctuation << endl;
	cout << left << setw(r) << "Other: " << right << setw(l) << other << endl;

	return 0;
}
