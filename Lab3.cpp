//==========================================================
//
// Title:      Lab 3 In Class
// Course:     CSC 1101
// Lab Number: Lab 3	
// Author:     Sadeem Shamoun
// Date:       9/17/19
// Description: 
//	This application shows costs of a new carpet.
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{ // Showing application header
	cout << "How Much Will New Carpet Cost?" << endl;
	cout << "------------------------------" << endl << endl;
  
  // Declaring variables
	float costPerSquareFoot;
	float cost;
	int roomWidth;
	int roomLength;
	int roomArea;

  // Initializing Variables
	costPerSquareFoot = 1.25; 
	roomWidth = 9;
	roomLength = 12;
	roomArea = roomWidth * roomLength;
	cost = roomArea *costPerSquareFoot;

  // Writing to screen
	cout << "Cost per square foot ($): " << costPerSquareFoot << endl;
	cout << "------------------------" << endl;
	cout << "Length of room      (ft): " << roomLength << endl;
	cout << "Width of room       (ft): " << roomWidth << endl;
	cout << "Area of room      (ft^2): " << roomArea << endl;
	cout << "Cost of new carpet   ($): " << cost << endl;

  // Show application close
	cout << "------------------------" << endl;
	cout << "It will cost $" <<cost << " to recarpet " << roomArea << "sqft."<< endl;

}
