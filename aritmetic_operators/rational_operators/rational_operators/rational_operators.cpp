// rational_operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Oscar M Ventura

#include <iostream>
using namespace std;

int main()
{
	int num1{}, num2{};

	cout << boolalpha;
	// Example 1
	/*

	cout << "Enter 2 integers separated by a space: ";
	cin >> num1 >> num2;

	cout << num1 << " > " << num2 << " : " << (num1 > num2) << endl;
	cout << num1 << " >= " << num2 << " : " << (num1 >= num2) << endl;
	cout << num1 << " < " << num2 << " : " << (num1 < num2) << endl;
	cout << num1 << " <= " << num2 << " : " << (num1 <= num2) << endl;

	*/

	//Example 2
	const int lower{ 10 };
	const int higher{ 20 };

	cout << "\nEnter an integer that is greater than " << lower << " : ";
	cin >> num1;
	cout << num1 << " > " << lower << " is " << (num1 > lower) << endl;

	cout << "\nEnter a integer that is less or equal than " << higher << " : ";
	cin >> num1;
	cout << num1 << " <= " << higher << " is " << (num1 <= higher) << endl;

	cout << endl;


	 
	return 0;
	
}

