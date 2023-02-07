// Variables.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Oscar M Ventura 

#include <iostream>
using namespace std;


int main()
{   
    //variables
    cout << "Enter the width of the room: ";
    int room_width{ 0 };
    cin >> room_width;

    cout << "Enter the length of the room: ";
    int room_length{ 0 };
    cin >> room_length;

    cout << "The area of the room is " << room_width * room_length << " sqft" << endl;

    return 0;

}

