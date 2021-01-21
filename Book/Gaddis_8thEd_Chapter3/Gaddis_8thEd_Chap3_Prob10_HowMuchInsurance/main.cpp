/* 
 * File:   main.cpp
 * Author: Aamir Khan
 * Created on January 9, 2021, 10:00 PM
 * Purpose:  How Much Insurance?
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
    float insPerc, // insurance percentage (80% of replacement cost
          repCst,  // Cost to replace a home or building <- Input
          insAmnt; // Cost or amount of insurance 
    //Initialize Variables
    insPerc = .8;
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    cout << "This program calculates how much you must pay to insure ";
    cout << "a home or building based on the replacement cost." << endl;
    cout << "Enter the replacement cost for your home or building: $";
    cin >> repCst;
    insAmnt = repCst * insPerc;
    cout << "It would cost $" << insAmnt << " to insure your home or building by 80%.";
    //Exit the Program - Cleanup
    return 0;
}