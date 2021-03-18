//==========================================================
//
// Title:      Paragraph tester
// Course:     CSC 1101
// Lab Number: 12-02
// Author:     Sadeem Shamoun
// Date:       10/25/19
// Description:
//		lets you know how smart the literature is
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
	//constants
	const int COLFMT1 = 30;
	const int COLFMT2 = 10;
	cout << fixed << setprecision(1);

	//variables
	int strlen = 0, alphanum = 0, punct = 0, space = 0,
		unknown = 0, sentences = 0, words = 0, strlench = 0, i = 0;
	double syll, senlen, avgsen, avgsyll, grade;
	string input = "Apollo 11 was the spaceflight that landed the first two humans on the Moon. Mission commander Neil Armstrong and pilot Buzz Aldrin, both American, landed the lunar module Eagle on July 20, 1969. Armstrong became the first to step onto the lunar surface six hours later on July 21. Aldrin joined him about 20 minutes later. They spent about two and a quarter hours together outside the spacecraft, and collected lunar material to bring back to Earth. Michael Collins piloted the command module Columbia alone in lunar orbit while they were on the Moon's surface. Armstrong and Aldrin spent just under a day on the lunar surface before rendezvousing with Columbia in lunar orbit.";

	//calculations
	for (i = 0; i < input.length(); i++)//go through each character
	{
		if (isalnum(input.at(i)))//alphanum
		{
			alphanum++;
		}
		else if (ispunct(input.at(i)))//punctuation	
		{
			punct++;
			if ((input.at(i) == '.'))//sentences
			{
				sentences++;
			}
		}
		else if (isspace(input.at(i)))//spaces and words
		{
			space++;
		}
		else if ((input.at(i) == '.'))//sentences
		{
			sentences++;
		}
	}
	strlen = input.length();//string length 
	syll = alphanum * (.33);
	words = 1 + space;
	avgsyll = syll / words;
	avgsen = words / sentences;
	grade = ((.39 * avgsen) + (11.8 * avgsyll) - 15.59);
	strlench = alphanum + punct + space + unknown;

	//to user
	cout << setw(COLFMT1) << left << "String length:" << setw(COLFMT2) << right << strlen << endl;
	cout << setw(COLFMT1) << left << "Alphanumeric chars:" << setw(COLFMT2) << right << alphanum << endl;
	cout << setw(COLFMT1) << left << "Punctuation chars:" << setw(COLFMT2) << right << punct << endl;
	cout << setw(COLFMT1) << left << "Spaces:" << setw(COLFMT2) << right << space << endl;
	cout << setw(COLFMT1) << left << "Unknowns:" << setw(COLFMT2) << right << unknown << endl;
	cout << setw(COLFMT1) << left << "String length check:" << setw(COLFMT2) << right << strlench << endl;

	cout << setw(COLFMT1) << left << "Sentences:" << setw(COLFMT2) << right << sentences << endl;
	cout << setw(COLFMT1) << left << "Words:" << setw(COLFMT2) << right << words << endl;
	cout << setw(COLFMT1) << left << "Syllables:" << setw(COLFMT2) << right << syll << endl;
	cout << setw(COLFMT1) << left << "Average sentence length :" << setw(COLFMT2) << right << avgsen << endl;
	cout << setw(COLFMT1) << left << "Average syllable count:" << setw(COLFMT2) << right << avgsyll << endl;
	cout << setw(COLFMT1) << left << "Grade level index:" << setw(COLFMT2) << right << grade << endl;
}
