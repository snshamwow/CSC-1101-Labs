//==========================================================
//
// Title:      Burger King Menu	Upgraded
// Course:     CSC 1101
// Lab Number: 14-1
// Author:     Sadeem Shamoun
// Date:       10/31/19
// Description:
//		Menu stuff
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
	double payment, rate, principal, interest, loan, month, monthcount;

	cout << "Enter loan amount ($1k-$5k):" << endl;
	cin >> loan;
	while (loan < 1000 || loan >5000)
	{
		cout << "ERROR: Enter loan amount ($1k-$5k):" << endl;
		cin >> loan;
	}
	cout << "Enter monthly payment ($100-$500):" << endl;
	cin >> payment;
	while (payment < 100 || payment >500)
	{
		cout << "ERROR: Enter monthly payment ($100-$500):" << endl;
		cin >> payment;
	}
	cout << "Enter annual interest rate (2%-5%):" << endl;
	cin >> rate;
	while (rate < 2 || rate > 5)
	{
		cout << "ERROR: Enter annual interest rate (2%-5%):" << endl;
		cin >> rate;
	}

	rate = rate / 12 / 100;
	
	cout << setw(15) << right << "Month" <<
			setw(15) << right << "Balance ($)" << 
			setw(15) << right << "Payment ($)" << 
			setw(15) << right << "Interest ($)" << 
			setw(15) << right << "Principal ($)" << endl;
	for (month = 1; loan > 0; month++)
	{
		interest = loan * rate;
		principal = payment - interest;
		loan = loan - principal;
		cout << setw(15) << right << month <<
				setw(15) << right << loan <<
				setw(15) << right << payment <<
				setw(15) << right << interest <<
				setw(15) << right << principal << endl;
	}

	monthcount = month;
	cout << "\nMonths to repay loan: " << monthcount << endl;
	
	// Show application close
	cout << "\n-------------------------------------------" << "\nHave a nice day!" << endl;

	return 0;
};