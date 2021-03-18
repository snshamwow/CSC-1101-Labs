//==========================================================
//
// Title:      How Far Did My Football Go?
// Course:     CSC 1101
// Lab Number: 2-2
// Author:     Sadeem Shamoun
// Date:       9/12/2019
// Description:
//   This Application calculates the distance a kicked
// football travels.
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
	float initialVelocity;
	float; initialVelocity = 60;
	float hangTime;
		float; hangTime = 40;
		
  // Show application header
	cout << "How Far Did My Football Go ?" << endl;
	cout << "============================" << endl;

  // Calculate and show distance
  cout << "Initial velocity (yards/second): "
    << initialVelocity << endl;
  cout << "Hang time (seconds):             "
    << hangTime << endl;
  cout << "Distance (yards):                "
    << initialVelocity * hangTime << endl;

  // Show application close
  cout << "That was a terrible kick!" << endl; 
  cout << "============================" << endl;

}
