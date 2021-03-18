//==========================================================
//
// Title:      Encoding Egrets
// Course:     CSC 1101
// Lab Number: 16-02
// Author:     Sadeem Shamoun
// Date:       11/07/19
// Description:
//		functions
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

string input, output, str2;
int i;

string encodedF (string str){
	for (i = 0; i < 10; i++)
	{
		str[i] = (int) ((str[i]) + 17) % 256; 
	}
	return str;
}

string decodedF (string str) {
	for (i = 0; i < 10; i++)
	{
		return str;
	}
}

	int main()
	{
		cout << "Welcome to String Encoder" <<
				"\n---------------------------------------------" << endl;

		//declarations
		string encode, decode, str;

		//prompting user
		cout << "\nEnter a string up to 10 letters: ";
		getline(cin, str); 

		//validation
		while (str.length() > 10)
		{
			cout << "\n...That's more than 10 letters dummy" <<
					"\nLet's try that again: ";
			getline(cin, str);
			cout << "\n---------------------------------------------" << endl;
		}

		encode = encodedF(str);
		cout << "\nEncoded String:" << encode;
		cout << endl;

		decode = decodedF(str);
		cout << "Decoded String:" << decode;
		cout << endl;

		return 0;
	}

