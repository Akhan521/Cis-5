/* 
 * File:   main.cpp
 * Author: Aamir 
 * Created on January 12, 2021, 6:00 PM
 * Purpose:  Paycheck Calculations Problem
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
    float payRt,        // Pay rate in dollars per hour
          hours,        // Number of hours user worked -> input
          stHours = 40, // Number of hours where you are paid straight time
          otHours,      // Number of hours you are paid overtime (anything above 40)
          otAmnt,       // Amount made during over time 
          grsPay;       // Gross pay
    //Initialize Variables
    cout << "This program calculates the gross paycheck.\n";
    cout << "Input the pay rate in $'s/hr and the number of hours.\n";
    cin >> payRt >> hours;
    payRt = payRt;
    hours = hours;
    //Map Inputs to Outputs -> Process
    if (hours <= stHours) // If hours the user worked is less than or = to 40, you're paid straight time
        grsPay = payRt * hours;
    else if (hours > stHours) // If hours goes beyond 40, you have overtime hours which is & paid straight time for the first 40 hours
        {
            grsPay = payRt * stHours;
            otHours = hours - stHours;
            otAmnt = (2 * payRt) * otHours;
            grsPay += otAmnt;
        }
    //Display Inputs/Outputs
    cout << fixed << setprecision(2);
    cout << "Paycheck = $" << setw(7) << grsPay;
    //Exit the Program - Cleanup
    return 0;
}