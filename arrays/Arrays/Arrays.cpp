// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Basic arrays practices 

#include <iostream>
using namespace std;

int main()
{
	char vowels[]{ 'a', 'e', 'i' , 'o', 'u' };
	cout << "\nThe first vowel is: " << vowels[0] << endl;
	cout << "The last vowel is: " << vowels[4] << endl;

	//cin >> vowels[5];   out of bounds - Will crash "error example 

	//*********************************************************************

	double hi_temps[]{ 90.1, 89.8, 77.5, 81.6 };
	cout << "\nThe first high temperature is: " << hi_temps[0] << endl; //will display 90.1 original value on the array
	
	//Changing value
	hi_temps[0] = 100.7;    //changing the first element in the array to 100.7

	cout << "The first high temperature is now: " << hi_temps[0] << endl;


	return 0;

}



