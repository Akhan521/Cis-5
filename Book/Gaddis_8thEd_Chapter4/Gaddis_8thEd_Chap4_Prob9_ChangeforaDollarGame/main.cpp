/* 
 * File:   main.cpp
 * Author: Aamir 
 * Created on January 13, 2021, 5:25 PM
 * Purpose:  Change for a dollar game
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
    float penny = .01,
          numPenny,
          nickel = .05,
          numNick,
          dime = .1,
          numDime,
          quarter = .25,
          numQuart,
          total,
          dollar = 1.0;
            
    //Initialize Variables
    cout << "Find coin combinations that equal one dollar exactly.\n";
    cout << "Input the # of pennies, nickels, dimes, or quarters that ";
    cout << "make up one dollar.\n";
    cout << "For Ex. 0 0 0 4 -> 0 pennies, 0 nickels, 0 dimes, and 4 quarters.\n";
    cin >> numPenny >> numNick >> numDime >> numQuart;
    //Map Inputs to Outputs -> Process
    total = (numPenny*penny) + (numNick*nickel) + (numDime*dime) + (numQuart*quarter);
    //Display Inputs/Outputs
    if (total == dollar)
        cout << "You win!";
    else 
        cout << "You Lose!";
    //Exit the Program - Cleanup
    return 0;
}