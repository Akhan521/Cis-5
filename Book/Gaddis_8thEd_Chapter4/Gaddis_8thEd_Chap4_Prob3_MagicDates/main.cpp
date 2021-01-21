/* 
 * File:   main.cpp
 * Author: Aamir
 * Created on January 13, 2021, 1:43 PM
 * Purpose:  Magic Dates Problem
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    unsigned short month, // Store the month in numeric form
                   day,   // Store the day
                   year;  // Store the two-digit year (ex. 2010 -> 10) or (1995 -> 95) 
    //Initialize Variables
    cout << "Enter the month in numeric form, day, and two-digit year \n";
    cout << "Ex. 1 12 10 -> January 12th, 2010 (Ex. 2010 -> 10 or 1995 -> 95): ";
    cin >> month >> day >> year;
    //Map Inputs to Outputs -> Process
    if (month * day == year)
        cout << "The date is magic.";
    else 
        cout << "The date isn't magic.";
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}