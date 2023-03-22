// for_loops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	/*
	for (int i{ 1 }; i <= 10; ++i)
		cout << i << endl;
	
	*/
	
	/*
	for (int i{ 1 }; i <= 10; i+=2)
		cout << i << endl;
	
	*/
	
	/*
	for (int i{ 10 }; i > 0; --i)
		cout << i << endl;
	*/

	/*
	for (int i{ 10 }; i <= 100; i += 10) {
		if (i % 15 == 0)
		cout << i << endl;
		
	}	
	*/

	for (int i{ 1 }, j{ 5 }; i <= 5; ++i, ++j)
		cout << i << " + " << j << " = " << (i+j) << endl;
		



	return 0;
}

