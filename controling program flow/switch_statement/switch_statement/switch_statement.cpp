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
		//break;

	}

	 
	
	return 0;
}

