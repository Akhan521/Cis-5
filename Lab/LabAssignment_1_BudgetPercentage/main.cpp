/* 
 * File:   main.cpp
 * Author: Dr. Mark Lehr
 * Created on January 4, 2021, 10:00 PM
 * Purpose:  
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
    float milBdgt, // Military Budget (A percentage of the federal budget)
          fedBdgt, // Federal Budget 
          mlPrcnt; // Military budget as a percentage of the Fed. budget
            
    //Initialize Variables
    milBdgt = 7.0e11f; // 700 Billion
    fedBdgt = 4.1e12f; // 4.1 Trillion
    //Map Inputs to Outputs -> Process
    mlPrcnt = (milBdgt / fedBdgt) * 100; // To get the military budget as a 
                                         // percentage of the fed budget 
    //Display Inputs/Outputs
    cout << "This program determines what percentage of the federal budget ";
    cout << "the military budget is.\n";
    cout << fixed << setprecision(1);
    cout << "If the federal budget is: $" << fedBdgt << " or 4.1 Trillion Dollars" << endl;
    cout << "And the military budget is: $" << milBdgt << " or 700 Billion Dollars" << endl;
    cout << "The military budget is around %" << mlPrcnt << " of the federal budget.";
    //Exit the Program - Cleanup
    return 0;
}