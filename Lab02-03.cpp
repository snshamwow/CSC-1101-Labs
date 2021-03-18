//==========================================================
//
// Title:      Travel Time Calculator
// Course:     CSC 1101
// Lab Number: 2-3
// Author:     Sadeem Shamoun
// Date:       9/12/19
// Description:
//   This application calculates how long it takes to travel 
//between two cities.
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
	string fromCity; 
	string toCity; 
	int distance;
	float averageSpeed;
	float travelTime; 
	float totalTime;
	float restTime;

  // Show application header
	cout << "Trip Planner" << endl; 
	cout << "============" << endl;

  // Initialize variables
	fromCity ="New York";
	toCity ="Los Angeles";
	distance = 2473;
	averageSpeed = 500;

  // Calculate times
	travelTime = (distance) / (averageSpeed);
	restTime = (travelTime) * (.1);
	totalTime = travelTime + restTime;

  // Calculate and show inputs and outputs
  cout << "From city:           " << fromCity << endl;
  cout << "To city:             " << toCity << endl;
  cout << "Distance (miles):    " << distance << endl;
  cout << "Average speed (mph): " << averageSpeed << endl;
  cout << "Travel time (hours): " << travelTime << endl;
  cout << "Rest time (hours):   " << restTime << endl;
  cout << "Total time (hours):  " << totalTime << endl;

  // Show application close
  cout << "================" << endl; 
  cout << "Enjoy your trip!" << endl;

}
