// conditional_operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	/*
	
	int num{};

	cout << "Enter and integer: ";
	cin >> num;

	if (num % 2 == 0)
		cout << num << " is even" << endl;
	else
		cout << num << " is odd" << endl;

	//same logiic but using conditional operators

	cout << num << " is " << ((num % 2 == 0) ? "even" : "odd") << endl;

	*/

	//Example 2

	int num1{}, num2{};

	cout << " Enter two integers separated by space: ";
	cin >> num1 >> num2;

	if (num1 != num2) {
		cout << "Largest " << ((num1 > num2) ? num1 : num2) << endl;
		cout << "Smallest " << ((num1 < num2) ? num1 : num2) << endl;


	}
	else {

		cout << "The numbers are the same!" << endl;
	}
		
	
	
		

	

	return 0;
}

