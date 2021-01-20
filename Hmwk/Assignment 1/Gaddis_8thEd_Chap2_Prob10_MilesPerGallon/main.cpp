/* 
 * File:   main.cpp
 * Author: Aamir Khan
 * Created on January 5, 2021, 4:37 PM
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
    unsigned short gallons, // # of Gallons
                   totMi, // Total Miles Traveled
                   mpg; // Miles per gallon  
    //Initialize Variables
    gallons = 15;
    totMi = 375;
    //Map Inputs to Outputs -> Process
    mpg = totMi / gallons;
    //Display Inputs/Outputs
    cout << "If a car travels 375 miles with 15 gallons, it travels " << mpg << endl;
    cout << "miles per gallon.";
    //Exit the Program - Cleanup
    return 0;
}