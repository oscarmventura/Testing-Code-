// student_grade.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Oscar M Ventura

#include <iostream>
using namespace std;

int main()
{
	int score{};
	cout << "Enter your score on the exam (0-100): ";
	cin >> score;

	char letter_grade{};

	if (score <= 100 && score >= 0) {

		if (score >= 90)
			letter_grade = 'A';
		else if (score >= 80)
			letter_grade = 'B';
		else if (score >= 70)
			letter_grade = 'C';
		else if (score >= 60)
			letter_grade = 'D';
		else
			letter_grade = 'F';

		cout << "Your grade is: " << letter_grade << endl;
		if (letter_grade == 'F')
			cout << "Sorry you must repeat the class" << endl;

		cout << "Congratulations!" << endl;

	}
		
	


	else {
		cout << "You must enter a valid input" << endl;
	}

	

	

	return 0;
}

