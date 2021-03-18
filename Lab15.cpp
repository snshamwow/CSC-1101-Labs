//==========================================================
//
// Title:      calculator
// Course:     CSC 1101
// Lab Number: 15
// Author:     Sadeem Shamoun
// Date:       10/21/19
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

float x, y;

float add(float x, float y)
{
	return x + y;
}

float sub(float x, float y)
{
	return x - y;
}

int main()
{
	cout << "Enter the first number: " << endl;
	cin >> x;
	cout << "Enter the second number: " << endl;
	cin >> y;

	cout << "Using the add function: " << return (add) << endl;
	cout << "Using the subtract function: " << return (sub) << endl;
}
