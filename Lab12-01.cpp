//==========================================================
//
// Title:      Lawn Lubbers
// Course:     CSC 1101
// Lab Number: 12-01
// Author:     Sadeem Shamoun
// Date:       10/24/19
// Description:
//		cost of lawn rakin
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
	//constants
	const int COLFMT1 = 25;
	const int COLFMT2 = 10;

	//variables
	int front, back, depth;
	double area, rate, cost;

	cout << "Enter the front edge lawn length between 5-50 yd/m: ";
	cin >> front;
	while (front < 5 || front > 50)
	{
		cout << "\nEnter a length between 5-50 yd/m: ";
		cin >> front;
	}
	cout << "\nEnter the back edge lawn length between 10-100 yd/m: ";
	cin >> back;
	while (back < 10 || back > 100)
	{
		cout << "\nEnter a length between 10-100 yd/m: ";
		cin >> back;
	}
	cout << "\nEnter the depth of the lawn between 20-200 yd/m: ";
	cin >> depth;
	while (depth < 20 || depth > 200)
	{
		cout << "\nEnter a length between 20-200 yd/m: ";
		cin >> back;
	}

	//calculations
	area = depth * (double(front + back) / 2);

	if (area <= 3000)
	{
		rate = .08;
	}
	else
	{
		rate = .07;
	}

	cost = rate * area;
	
	//to user
	cout << setw(COLFMT1) << left << "Front edge yd/m:" << setw(COLFMT2) << right << front << endl;
	cout << setw(COLFMT1) << left << "Back edge yd/m:" << setw(COLFMT2) << right << back << endl;
	cout << setw(COLFMT1) << left << "Depth yd/m:" << setw(COLFMT2) << right << depth << endl;
	cout << setw(COLFMT1) << left << "area (square yd/m):" << setw(COLFMT2) << right << area << endl;
	cout << setw(COLFMT1) << left << "Rate ($per square yard):" << setw(COLFMT2) << right << rate << endl;
	cout << setw(COLFMT1) << left << "Cost estimate ($):" << setw(COLFMT2) << right << cost << endl;
}
