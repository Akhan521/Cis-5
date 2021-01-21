/* 
 * File:   main.cpp
 * Author: Aamir Khan 
 * Created on January 9, 2021, 12:15 AM
 * Purpose:  Calculate Average Rainfall 
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Formatting Library
#include <string>    //String Object Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    string month1, month2, month3; // To store the name of each month from input
    float avgrnfl, // To store the avg rainfall of the 3 specified months
          m1inch, // The number of inches of rain that fell during month 1
          m2inch, // The number of inches of rain that fell during month 3
          m3inch; // The number of inches of rain that fell during month 3
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    cout << setprecision(2) << fixed;
    cout << "This program calculates the average rainfall of three months in inches. \n";
    cout << "Choose the first month: ";
    cin >> month1;
    cout << "Choose the second month: ";
    cin >> month2;
    cout << "Choose the third month: ";
    cin >> month3;
    cout << "Now enter three numbers separated by a space for the # of inches \n";
    cout << "of rain that fell during each month. (ex. 3.5 4.5 5.5): ";
    cin >> m1inch >> m2inch >> m3inch;
    avgrnfl = (m1inch + m2inch + m3inch) / 3;
    cout << "The average rainfall for " << month1 << ", " << month2 << ", ";
    cout << "and " << month3 << " is: " << avgrnfl;
    //Exit the Program - Cleanup
    return 0;
}