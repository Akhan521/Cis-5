/* 
 * File:   main.cpp
 * Author: Aamir
 * Created on January 19, 2021, 5:15 PM
 * Purpose: Markup using Functions
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Definitions
//This function takes a wholesale cost argument and a markup percentage as a decimal
//and calculates the new retail cost.
float calculateRetail(float wscost, float markup){
    while (wscost < 0 || markup < 0){
    cout << "Enter the wholesale cost: ";
    cin >> wscost;
    cout << "Enter the markup percentage as a decimal (Ex. 60% -> .6): ";
    cin >> markup;
    }
    markup += 1; //By adding 1, we'll be able to * w/ wscost to get markup cost
    return (wscost * markup);
}
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float retail; //Store the retail cost received from the function
    //Initialize Variables

    //Map Inputs to Outputs -> Process
    retail = calculateRetail(5,.5);
    //Display Inputs/Outputs
    cout << setprecision(2) << fixed;
    cout << "Retail Cost: " << retail;
    //Exit the Program - Cleanup
    return 0;
}