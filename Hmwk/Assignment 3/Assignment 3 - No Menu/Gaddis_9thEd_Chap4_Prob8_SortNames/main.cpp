/* 
 * File:   main.cpp
 * Author: Aamir 
 * Created on January 14, 2021, 4:10 PM
 * Purpose:  Sorting Names
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    string a,b,c; // Three names as input
    //Initialize Variables
    cout << "Sorting Names\n";
    cout << "Input 3 names\n";
    getline(cin, a);
    getline(cin, b);
    getline(cin, c);
    //Map Inputs to Outputs -> Process
    if (a < b && a < c && b < c)
        cout << a <<endl << b <<endl << c;
    else if (a < b && a < c && c < b)
        cout << a <<endl << c <<endl << b;
    else if (b < a && b < c && a < c)
        cout << b <<endl << a <<endl << c;
    else if (b < a && b < c && c < a)
        cout << b <<endl << c <<endl << a;
    else if (c < a && c < b && a < b)
        cout << c <<endl << a <<endl << b;
    else if (c < a && c < b && b < a)
        cout << c <<endl << b <<endl << a;
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}