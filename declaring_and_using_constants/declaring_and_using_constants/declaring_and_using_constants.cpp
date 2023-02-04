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

Challange 2 
Gonna add a large room with a different price 



*/


#include <iostream>
using namespace std;



int main()
{
    cout << "Hello Welcome to Oscar's Carpet Cleaning Services" << endl;
    
    int number_of_rooms{ 0 };
    cout << "\nHow many small rooms would you like to clean? ";
    cin >> number_of_rooms;
    
    int number_of_large_rooms{ 0 };
    cout << "\nHow many large rooms would you like to clean? ";
    cin >> number_of_large_rooms;
    
    //declared Constants 
    const double price_per_room{ 30.0 }; 
    const double price_per_large_rooms{ 50.00 }; //New addition  to the program
    
    const double sales_rate{ 0.0825 };    
    const int expiration{ 30 };

    
    cout << "You have selected: " << number_of_rooms << " small rooms" << endl;
    cout << "You have selected: " << number_of_large_rooms << " large rooms" << endl;
    cout << "The price per small room is: " << price_per_room << endl;
    cout << "The price per large room is: " << price_per_large_rooms << endl;
    
    cout << "Cost: $" 
         << (price_per_room * number_of_rooms) + 
            (price_per_large_rooms * number_of_large_rooms) 
         << endl; 
    
    //Tax Cost
    cout << "Tax cost: $" 
         << ((price_per_room * number_of_rooms * sales_rate) + 
            (price_per_large_rooms * number_of_large_rooms * sales_rate)) 
         << endl; 

    cout << "***********************************************" << endl;
    cout << "Grand Total: $" << ((price_per_room * number_of_rooms) + 
            (price_per_large_rooms * number_of_large_rooms)) + (((price_per_room * number_of_rooms) +
            (price_per_large_rooms * number_of_large_rooms)) * sales_rate)
         << endl; 
   
    
    cout << "This Estimate is valid for " << expiration <<  " days" << endl;
       
    return 0;

}

