// switch_statement.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Oscar M Ventura 

#include <iostream>
using namespace std;

int main()
{
	char letter_grade{};

	cout << "Enter the letter grade you expect from the exam: ";
	cin >> letter_grade;

	switch (letter_grade) {

	case 'a':
	case 'A':
		cout << "You need 90 or above, study hard." << endl;
		break;

	case 'b':
	case 'B':
		cout << "You need 80-89" << endl;
		break;
	
	case 'c':
	case 'C':
		cout << "You need 70-79." << endl;
		break;

	case 'd':
	case 'D':
		cout << "You need 60-69." << endl;
		break;

	case 'f':
	case 'F':
		
	{
		char confirm{};
		cout << "Are you sure (Y/N): ";
		cin >> confirm;

		if (confirm == 'y' || confirm == 'Y')
			cout << "You suck!" << endl;
		else if (confirm == 'n' || confirm == 'N')
			cout << "Go study" << endl;
		else
			cout << "Invalid Choice" << endl;
				
		break;
	}

		
	
	default:
		cout << "Please enter A,B,C,D or F" << endl;

	}
	
	return 0;
}

