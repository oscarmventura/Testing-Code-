// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Basic arrays practices 
// Declaring , initializing and accessing array elements 

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

	//*********************************************************************
	

	int test_scores[]{100,90,80,70,60}; 

	cout << "\nFirst score at index 0: " << test_scores[0] << endl;
	cout << "Second score at index 1: " << test_scores[1] << endl;
	cout << "Thirds score at index 2: " << test_scores[2] << endl;
	cout << "Fourth score at index 3; " << test_scores[3] << endl;
	cout << "Fifth score at index 4; " << test_scores[4] << endl;

	cout << "\nEnter 5 test scores:";

	cin >> test_scores[0];
	cin >> test_scores[1];
	cin >> test_scores[2];
	cin >> test_scores[3];
	cin >> test_scores[4];

	cout << "\nThe updated array is:";
	cout << "\nFirst score at index 0: " << test_scores[0] << endl;
	cout << "Second score at index 1: " << test_scores[1] << endl;
	cout << "Thirds score at index 2: " << test_scores[2] << endl;
	cout << "Fourth score at index 3; " << test_scores[3] << endl;
	cout << "Fifth score at index 4; " << test_scores[4] << endl;

	cout << "\nThe value of the array name is: " << test_scores << endl; //memory address where storage location where the array is located 

	return 0;

}



