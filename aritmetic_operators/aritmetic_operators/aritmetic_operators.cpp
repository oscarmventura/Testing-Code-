// aritmetic_operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Oscar M Ventura 
// Aritmetic Operators

#include <iostream>
using namespace std;

int main()
{
    int num1{ 200 };
    int num2{ 100 };

   //cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
    //Math
    int result{ 0 };
    result = num1 + num2;
    cout << num1 << "+" << num2 << "=" << result << endl; //addition

    result = num1 - num2;
    cout << num1 << "-" << num2 << "=" << result << endl; //substaction

    result = num1 * num2;
    cout << num1 << "*" << num2 << "=" << result << endl; //multiplication

    result = num1 / num2;
    cout << num1 << "/" << num2 << "=" << result << endl; //Division 

    result = num2 / num1;
    cout << num1 << "/" << num2 << "=" << result << endl; // Will only output 0 because using integers...For the actual result needs to have a double to display 0.5

    result = num1 % num2;
    cout << num1 << "%" << num2 << "=" << result << endl; 

    num1 = 10;
    num2 = 3;
    /*
    The modulo operator, denoted by %, is an arithmetic operator. 
    The modulo division operator produces the remainder of an integer division. 
    Produces the remainder when x is divided by y.
     
    */
    
    result = num1 % num2;
    cout << num1 << "%" << num2 << "=" << result << endl;

    result = num1 * 10 + num2;
    cout << 5 / 10 << endl;
    cout << 5.0 / 10.0 << endl;

    
    return 0;
}

