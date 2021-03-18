//==========================================================
//
// Title:      Student Records
// Course:     CSC 1101
// Lab Number: 21
// Author:     Sadeem Shamoun
// Date:       11/26/2019
// Description:
//
//   Adds student records
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

struct StudentRecord {
	string firstName, lastName;
	int age;
	float gpa;
};

int main()
{
	StudentRecord newStudent;
	cout << "Input the following parameters:" << endl;
	cout << "\nEnter first name: " << endl;
	cin >> newStudent.firstName;
	cout << "\nEnter last name: " << endl;
	cin >> newStudent.lastName;
	cout << "\nEnter age: " << endl;
	cin >> newStudent.age;
	cout << "\nEnter GPA: " << endl;
	cin >> newStudent.gpa;

	cout << "New student age " << newStudent.age <<
		" with name of " << newStudent.firstName << " " << newStudent.lastName <<
		" with GPA " << newStudent.gpa << " added to student records!" << endl;
}