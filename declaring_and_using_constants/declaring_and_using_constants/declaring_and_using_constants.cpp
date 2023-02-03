// declaring_and_using_constants.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Oscar M Ventura 
//Service estimator program

/*
Pseudocode:

Prompt the user to enter the numbers of rooms
Display numbers of rooms
Display price per room

Display cost: (number of rooms * price per room)
Display Tax : (number of rooms * price per room * Tax rate)
Display total estimate: (number of rooms * price per room) + (number of rooms * price per room * Tax rate)
Display Estimate expiration Time : 30 Days 

*/


#include <iostream>
using namespace std;



int main()
{
    cout << "Hello Welcome to Oscar's Carpet Cleaning Services" << endl;
    cout << "\nHow many rooms would you llike to clean? ";
    
    int number_of_rooms{ 0 };
    cin >> number_of_rooms;

    
    const double price_per_room{ 30.0 }; //don't want to change the price
    const double sales_rate{ 0.0825 };   //don't want to change the price  
    const int expiration{ 30 };

    
    cout << "You have selected: " << number_of_rooms << " rooms" << endl;
    cout << "The price per room is: " << price_per_room << endl;
    cout << "Cost: $" << price_per_room * number_of_rooms << endl;
    
    //Tax Cost
    cout << "Tax cost: $" << price_per_room * number_of_rooms * sales_rate << endl;
    cout << "***********************************************" << endl;
    cout << "Grand Total: $" << (price_per_room * number_of_rooms) + (price_per_room * number_of_rooms * sales_rate) << endl;
    cout << "This Estimate is valid for " << expiration <<  " days" << endl;
       
   
    return 0;

}

