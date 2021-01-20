/* 
 * File:   main.cpp
 * Author: Aamir
 * Created on January 12, 2021, 3:15 PM
 * Purpose:  Pay Calculations 
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
     float prevAnn, // Previous Annual Salary
           prevMon, // Previous Monthly salary
           curAnn,  // Current Annual Salary with the 7.6% pay increase
           curMon,  // Current Monthly Salary
           incrAmt, // Extra retroactive amount after 7.6% pay increase 
           rtract,  // Retroactive pay amount
           prcIncr, // Pay increase Percent
           prdIncr; // Pay Increase Period which is 6 months
    //Initialize Variables
    prcIncr = 0.076f; //7.6% pay increase
    prdIncr = 6;
    cout << "Input previous annual salary.\n";
    cin >> prevAnn;
    prevMon = prevAnn / 12;
    //Map Inputs to Outputs -> Process
    //retroactive amount gained = (prev monthly salary * 7.6%) * period of 6 months
    incrAmt = (prevMon * prcIncr) * prdIncr; 
    curAnn = prevAnn * (prcIncr + 1); // Previous Ann * 1.076 to find new Ann
    curMon = curAnn / 12;
    //Display Inputs/Outputs
    cout << fixed << setprecision(2);
    cout << "Retroactive pay    = $" << setw(7) << incrAmt << endl;
    cout << "New annual salary  = $" << setw(7) << curAnn << endl;
    cout << "New monthly salary = $" << setw(7) << curMon;
    //Exit the Program - Cleanup
    return 0;
}