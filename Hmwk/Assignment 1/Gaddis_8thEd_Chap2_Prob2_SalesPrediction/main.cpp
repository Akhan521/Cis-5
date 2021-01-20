/* 
 * File:   main.cpp
 * Author: Dr. Mark Lehr
 * Created on January 5, 2021, 12:43 PM
 * Purpose:  Sales Prediction
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
    float slsPerc,// How much percent the East Coast generates in sales
          slsGen, // How much the East Coast Generated out the total
          totSls; // Total sales generated 
    //Initialize Variables
    slsPerc = .58;
    totSls = 8600000;
    //Map Inputs to Outputs -> Process
    slsGen = totSls * slsPerc;
    //Display Inputs/Outputs
    cout << "Of the 8.6 million, the East Coast Sales Division generated \n";
    cout << slsGen << " dollars.";
    //Exit the Program - Cleanup
    return 0;
}