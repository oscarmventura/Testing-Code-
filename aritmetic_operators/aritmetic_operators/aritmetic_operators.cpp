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





    
    


   
    
    
    
    
    return 0;
}

