//==========================================================
//
// Title:      Rugged Robots
// Course:     CSC 1101
// Lab Number: 20
// Author:     Sadeem Shamoun
// Date:       11/21/2019
// Description:
//
//   Controls a robotic floor vacuum.
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include "RuggedRobotLibrary.h" // For programmer-defined library
using namespace std; // So "std::cout" may be abbreviated to "cout"

void moveRobot(char floor[ROW_SIZE][COL_SIZE], int stats[], char move);

//==========================================================
// main
//==========================================================
int main()
{
  // Declare variables
  char floor[ROW_SIZE][COL_SIZE];
  int stats[STATS_SIZE];

  // Show application header
  cout << "Welcome to Rugged Robots" << endl;
  cout << "------------------------" << endl << endl;

  // Set real-number formatting
  cout << fixed << setprecision(0);

  // Initialize game
  printFloorKey();
  initFloor(floor);
  initStats(stats);
  printFloor(floor, stats);

  // Robot moves
  moveRobot(floor, stats, DOWN);

  // Show application close
  cout << "\nEnd of Rugged Robots" << endl;
}
