//==========================================================
//
// Title:      Lefty Lenders
// Course:     CSC 1101
// Lab Number: 14-1
// Author:     Sadeem Shamoun
// Date:       11/15/19
// Description:
//		Loan calculations
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and systeminclude <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

double carLoan, monthPayment, intRate, monthRate;
int option;

int menuOption()
{
	int option;
	cout << "Lefty Lenders Menu" <<
		"\n1 - Enter loan amount" <<
		"\n2 - Enter monthly payment" <<
		"\n3 - Enter annual interest rate" <<
		"\n4 - Show loan repayment" <<
		"\n9 - Exit" <<
		"\nEnter an option: ";
	cin >> option;
	return option;
}

double loanAmount()
{
	cout << "Enter loan amount ($1k-$5k):" << endl;
	cin >> carLoan;
	while (carLoan < 1000 || carLoan >5000)
	{
		cout << "ERROR: Enter loan amount ($1k-$5k):" << endl;
		cin >> carLoan;
	}
	return carLoan;
}

double monthlyPayment()
{
	cout << "Enter monthly payment ($100-$500):" << endl;
	cin >> monthPayment;
	while (monthPayment < 100.00 || monthPayment >500.00 )
	{
		cout << "ERROR: Enter monthly payment ($100-$500):" << endl;
		cin >> monthPayment; 
	}
	return monthPayment;
}

double interestRate()
{
	cout << "Enter annual interest rate (2%-5%):" << endl;
	cin >> intRate;
	monthRate = intRate / 12 / 100;
	while (intRate < 2 || intRate > 5)
	{
		cout << "ERROR: Enter annual interest rate (2%-5%):" << endl;
		cin >> intRate;
		monthRate = intRate / 12 / 100;
	}
	return monthRate;
} 

void showLoanRepayment()
{
	double principal, balance;
	monthRate = intRate / 12 / 100; 
	cout << setw(15) << right << "Month" <<
		setw(15) << right << "Balance ($)" <<
		setw(15) << right << "Payment ($)" <<
		setw(15) << right << "Interest ($)" <<
		setw(15) << right << "Principal ($)" << endl;
	int monthCount;
	for (int month = 1; carLoan > 0; month++)
	{ 
		intRate = carLoan * intRate;
		principal = monthPayment - intRate;
		carLoan = carLoan - principal;
		monthCount = month;
		cout << fixed << setprecision(2);
		cout << setw(15) << right << month << endl;
		cout << setw(15) << right << carLoan << endl;
		cout << setw(15) << right << intRate << endl;
		cout << setw(15) << right << principal << endl;
	}
	cout << "\nMonths to repay loan: " << monthCount << endl;
}

void printLoanParameters()
{
	cout << fixed << setprecision(4);
	cout << "Loan Parameters" << endl;
	cout << setw(20) << left << "Car Loan ($): " << setw(20) << right << carLoan << endl;
	cout << setw(20) << left << "Monthly Payment ($): " << setw(20) << right << monthPayment << endl;
	cout << setw(20) << left << "Monthly Rate (%): " << setw(20) << right << monthRate << endl;
}
int main()
{
	
	double carLoan = 0, monthPayment = 0, intRate = 0, monthRate = 0;
	while (option != 9)
	{
		switch (option)
		{
		case 1:
			loanAmount();
			printLoanParameters();
			break;
		case 2:
			monthlyPayment();
			printLoanParameters();
			break;
		case 3:
			interestRate();
			printLoanParameters();
			break;
		case 4:
			printLoanParameters();
			showLoanRepayment();
			break;
		}
		option = menuOption();
	}
	
	// Show application close
	cout << "\n-------------------------------------------" << "\nHave a nice day!" << endl;

	return 0;
};