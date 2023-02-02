// size_of_operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Size of Operators 

#include <iostream>
#include <climits>

using namespace std;

int main()
{
    cout << "size of information" << endl;
    cout << "****************************" << endl;

    cout << "char: " << sizeof(char) << " bites" << endl;
    cout << "int: " << sizeof(int) << " bites" << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << " bites" << endl;
    cout << "short: " << sizeof(short) << " bites" << endl;
    cout << "long: " << sizeof(long) << " bites" << endl;
    cout << "long long: " << sizeof(long long) << " bites" << endl;
    
    cout << "****************************" << endl;

    cout << "float: " << sizeof(float) << " bites" << endl;
    cout << "double: " << sizeof(double) << " bites" << endl;
    cout << "long double: " << sizeof(long double) << " bites" << endl;




    return 0;
}

