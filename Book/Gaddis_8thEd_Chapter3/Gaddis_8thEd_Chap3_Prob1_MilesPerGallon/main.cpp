/* 
 * File:   main.cpp
 * Author: Aamir Khan
 * Created on January 8, 2021, 7:31 PM
 * Purpose: Miles Per Gallon
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    short galLim,  // The # of gallons of gas a car can hold (The tank's gallon limit)
          totMi,   // The # of miles a full tank can go
          mpg;     // Miles Per Gallon -> Gas mileage
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    // Program to calculate a car's gas mileage (MPG)
    cout << "How many gallons of gas can your car hold? ";
    cin >> galLim;
    cout << "How many miles can your car travel on a full tank? ";
    cin >> totMi;
    mpg = totMi / galLim;
    cout << "Your car's gas mileage is: " << mpg << " miles per gallon.";
    //Exit the Program - Cleanup
    return 0;
}