//==========================================================
//
// Title:      Pi Calculator
// Course:     CSC 1101
// Lab Number: 10
// Author:     Sadeem Shamoun
// Date:       10/17/19
// Description:
//		Pi approximator
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
	int front, back, depth = 0;

	cout << "\nEnter the front edge lawn length between 5-50 yd/m: ";
	cin >> front
		while (front < 5 || front > 50)
		{
			cout << "\nEnter a length between 5-50 yd/m: ";
			cin >> front;
		}
	cout << "\nEnter the back edge lawn length between 10-100 yd/m: ";
	cin >> back
		while (back < 10 || back > 100)
		{
			cout << "\nEnter a length between 10-100 yd/m: ";
			cin >> back;
		}
	cout << "\nEnter the depth of the lawn between 20-200 yd/m: ";
	cin >> depth
		while (depth < 20 || depth > 200)
		{
			cout << "\nEnter a length between 20-200 yd/m: ";
			cin >> back;
		}
	for (i = 0; i <= 2 * terms; i++)
		{
			if (i % 2 == 0)//skips evens
				continue;
			if ((i - 1) % 4 == 0)
				pi += 1 / (double)i;
			else
				pi -= 1 / (double)i;
		}
		//calculations
		pi *= 4;
		cout << setprecision(10) << "Approximation is: " << pi;
		pi = origPi;
	
}