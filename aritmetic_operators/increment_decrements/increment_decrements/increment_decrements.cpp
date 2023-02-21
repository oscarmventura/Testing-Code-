// increment_decrements.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{

    int counter{ 10 };
    int result{ 0 };

    //Example 1 simple increment
    /*
     cout << "Counter: " << counter << endl;

    counter = counter + 1;
    cout << "Counter: " << counter << endl;

    counter++;
    cout << "Counter: " << counter << endl;

    ++counter;
    cout << "Counter: " << counter << endl;
    
    */
    

      
//Example 2 - preincrement 
   
    /*
    
    counter = 10;
    result = 0;

    cout << "Counter: " << counter << endl;

    result = ++counter;//Pre-increment
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;
   
   */
    
    //Example 3 - Post- Increment
    
    /*
    
    counter = 10;
    result = 0;

    cout << "Counter: " << counter << endl;
    result = counter++; //Post-increment
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;
   
   */

    //Example 4 - 
    counter = 10;
    result = 0;

    cout << "Counter: " << counter << endl;
    result = ++counter + 10;//Pre increment 

    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;
        
        return 0;
}

