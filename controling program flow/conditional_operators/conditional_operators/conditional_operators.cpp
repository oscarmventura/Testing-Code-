// conditional_operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int num{};

	cout << "Enter and integer: ";
	cin >> num;

	if (num % 2 == 0)
		cout << num << " is even" << endl;
	else
		cout << num << " is odd" << endl;

	//same logiic but using conditional operators

	cout << num << " is " << ((num % 2 == 0) ? "even" : "odd") << endl;

	return 0;


}

