/* 
 * File:   main.cpp
 * Author: Aamir 
 * Created on January 12, 2021, 12:07 PM
 * Purpose:  Insurance Problem
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
    float repCst, // Replacement cost that will be stored as input
          insPrc, // Insurance percentage (80%)
          insCst; // Cost to insure a home or building by 80% of its replacement cost
    //Initialize Variables
    insPrc = .8;
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    cout << "Insurance Calculator\n";
    cout << "How much is your house worth?\n";
    cin >> repCst;
    insCst = repCst * insPrc;
    cout << "You need $" << insCst << " of insurance.";
    //Exit the Program - Cleanup
    return 0;
}