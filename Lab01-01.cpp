//==========================================================
//
// Title:      Warmup Lab 1
// Course:     CSC 1101
// Lab Number: Warmup Lab 1	
// Author:     Sadeem Shamoun
// Date:       9/10/19
// Description: 
//	This is an application that displays ten of the
// ASCII characters and their corresponding decimals.
//
//==========================================================#include <conio.h> // For function getch()
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{
  
  cout << "Welcome to Conversion Tables" << endl;
  cout << "----------------------------" << endl << endl;

  cout << "Character Decimal Hexadecimal Octal Binary" << endl << endl;

  cout << "space     32      20          40    100000"         << endl;
  cout << "!         33      21          41    100001"         << endl;
  cout << "/         34      22          42    100010"         << endl;
  cout << "#         35      23          43    100011"         << endl;
  cout << "$         36      24          44    100100"         << endl;
  cout << "%         37      25          45    100101"		   << endl;
  cout << "&         38      26          46    100110"         << endl;
  cout << "'         39      27          47    100111"         << endl;
  cout << "(         40      28          50    101000"         << endl;
  cout << ")         41      29          51    101001" << endl << endl;

  cout << "End of Conversion Tables"                   << endl << endl;

  // Pause before application window closes
  cout << "Press any key to exit ..." << endl;

}
