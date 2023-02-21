// mixed_type_expressions.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Oscar M Ventura  

/*
Ask the user to enter 3 integers
Calculate the sum of the integers then
calculate the average of the 3 integers.

Display each of them, aslo the average
*/
#include <iostream>
using namespace std;
int main()
{
	int total{};
	int num1{}, num2{}, num3{};
	const int count{ 3 };

	cout << "Enter 3 numbers separated by spaces: ";
	cin >> num1 >> num2 >> num3;
	total = num1 + num2 + num3;

	double average{ 0.0 };

	average = total / count;

	cout << "The 3 numbers were: " << num1 << "," << num2 << ","  << num3 << endl;
	cout << "The average is: " << average << endl;

	return 0;
	  
	 
}

