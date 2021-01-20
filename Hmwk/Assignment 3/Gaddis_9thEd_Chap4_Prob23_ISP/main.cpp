/* 
 * File:   main.cpp
 * Author: Aamir
 * Created on January 14, 2021, 8:00 PM
 * Purpose:  Internet Service Provider Problem
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
    char package;       //Package A-C
    unsigned int hours; //Number of hours used
    float monFee,       // Monthly Fee
          addhrs,       // Additional hours above the limit
          totAdd,       // Total Additional cost = addhrs * addChrg
          total,        // Total Cost = additional cost + monthly fee
          addChrg = 0;      //Additional Charge for exceeding limit
    //Initialize Variables
    cout << "ISP Bill\n";
    cout << "Input Package and Hours\n";
    cin >> package >> hours;
    //Map Inputs to Outputs -> Process
    switch(package){
        case 'A':
        monFee = 9.95;
        if (hours > 10){
            addChrg = 2.0;
            addhrs = hours - 10;
            totAdd = addhrs * addChrg;
            }
            total = totAdd + monFee;
            break;
        case 'B':
        monFee = 14.95;
        if (hours > 20){
            addChrg = 1.0;
            addhrs = hours - 20;
            totAdd = addhrs * addChrg;
            }
            total = totAdd + monFee;
            break;
        case 'C':
        monFee = 19.95;
        total = monFee;
    }
    //Display Inputs/Outputs
    cout << "Bill = $" << setw(6) << total;
    //Exit the Program - Cleanup
    return 0;
}