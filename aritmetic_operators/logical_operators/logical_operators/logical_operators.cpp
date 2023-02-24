// logical_operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Oscar M Ventura 

#include <iostream>
using namespace std;

int main()
{
	cout << boolalpha;
	int num{};
	const int lower{ 10 };
	const int upper{ 20 };

	//Determine if an entered integer is between two integers
	/*
	cout << "Enter an integer - the bounds are " << lower << " and " << upper << ": ";
	cin >> num;

	bool within_bounds{ false };
	within_bounds = (num > lower && num < upper);
	cout << num << " is between " << lower << " and " << upper << " : " << within_bounds << endl;

	*/

	//Determine if an entered integer is outside two other integers
	/*
	
	cout << "\nEnter an integer - the bounds are " << lower << " and " << upper << ": ";
	cin >> num;
	bool outside_bounds{ false };
	outside_bounds = (num < lower || num > upper);
	cout << num << " is outside" << lower << " and " << upper << ": " << outside_bounds << endl;
	*/

	// Determine if an entered integer is exactly on the bounds 

	cout << "\nEnter an integer - the bounds are " << lower << " and " << upper << ": ";
	cin >> num;

	bool on_bounds{ false };
	on_bounds = (num == lower || num == upper);
	cout << num << " is on one of the bounds which are " << lower << " and " << upper << " : " << on_bounds << endl;
	
	
	return 0;
}


