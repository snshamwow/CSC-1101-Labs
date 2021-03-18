//==========================================================
//
// Title:      Grade tracker
// Course:     CSC 1101
// Lab Number: 17
// Author:     Sadeem Shamoun
// Date:       11/12/19
// Description:
//		functions
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

enum grade { A = 90, B = 80, C = 70, D = 60, F = 50 };

int main()
{
	char input;
	cout << "Enter your grade (A-F): ";
	cin >> input;

	switch (input)
	{
	case 'A':
		cout << "The student's percentage is " << A;
		break;
	case 'B':
		cout << "The student's percentage is " << B;
		break;
	case 'C':
		cout << "The student's percentage is " << C;
		break;
	case 'D':
		cout << "The student's percentage is " << D;
		break;
	case 'F':
		cout << "The student's percentage is " << F;
		break;
	default:
		cout << "The student's percentage is " << F;
		break;
	}

	return 0;
}

