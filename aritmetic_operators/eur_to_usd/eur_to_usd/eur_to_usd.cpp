// eur_to_usd.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Convert EUR to USD

#include <iostream>
using namespace std;



int main()
{
	const double usd_per_eur{ 1.07 };
	
	cout << "Welcome to the EUR TO USD converter" << endl;
	cout << "Enter the amount in EUR that you want to convert in USD: " << endl;
	
	double euros{ 0.0 };
	double usd{ 0.0 };
	cin >> euros;
	
	double dollars{};
	dollars = euros * usd_per_eur;
	cout << "The amount that you entered " << euros << " in USD is " 
		 << dollars << endl;

	

	return 0;

}


