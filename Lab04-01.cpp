//==========================================================
//
// Title:      Decimal to Binary
// Course:     CSC 1101
// Lab Number: 4-1
// Author:     Sadeem Shamoun
// Date:       9/23/19
// Description:
//   Put in decimal, get binary.
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

  // Declare constants
	int BASE = 2;

  // Declare variables
	int numDec = 96;
	int numBin;
	string numStr;
  
  // Show application header
	cout << "Convert Decimal to Binary!" << endl;
	cout << "--------------------------" << endl; 

  // Loop to convert decimal to binary
  cout << "Decimal " << numDec << " is binary ";
  numStr = "";
  while (numDec > 0)
  {
    numBin = numDec % BASE;
    if (numBin == 0)
      numStr = "0" + numStr;
    else
      numStr = "1" + numStr;
    numDec = numDec / BASE;
  }
  cout << numStr << endl;

  // Show application close
    cout << "--------------------------" << endl;
    cout << "Have a Nice Day!" << endl;

}
