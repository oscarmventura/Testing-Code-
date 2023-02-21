// equality_operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Oscar M Ventura 

#include <iostream>
using namespace std;

int main()
{
	bool equal_result{ false };
	bool not_equal_result{ false };

	int num1{}, num2{};

	cout << boolalpha;		//will display true/false instead of 1/0 for booleans
	/*
	cout << "Enter two integer separated by a space: ";
	cin >> num1 >> num2;
	equal_result = (num1 == num2);
	not_equal_result = (num1 != num2);
	cout << "Comparison result (equals): " << equal_result << endl;
	cout << "Comparison result (not equals): " << not_equal_result << endl;
	
	*/
	
	
	//Will apply to characters too

	/*
	
	char char1{}, char2{};
	cout << "Enter two characteres separated by space: ";
	cin >> char1 >> char2;
	equal_result = (char1 == char2);
	not_equal_result = (char1 != char2);
	cout << "Comparison result (equals): " << equal_result << endl;
	cout << "Comparison result (not equals): " << not_equal_result << endl;

	*/

	/*
	
	double double1{}, double2{};
	cout << "Enter two doubles separated by space: ";
	cin >> double1 >> double2;
	equal_result = (double1 == double2);
	not_equal_result = (double1 != double2);
	cout << "Comparison result (equals): " << equal_result << endl;
	cout << "Comparison result (not equals): " << not_equal_result << endl;
	
	*/

	
	double double1{}, double2{};
	cout << "Enter two integer separated by a space: ";
	cout << "Enter two doubles separated by space: ";
	cin >> num1 >> double1;
	equal_result = (num1 == double1);
	not_equal_result = (num1 != double1);
	cout << "Comparison result (equals): " << equal_result << endl;
	cout << "Comparison result (not equals): " << not_equal_result << endl;


	return 0;

 

}

