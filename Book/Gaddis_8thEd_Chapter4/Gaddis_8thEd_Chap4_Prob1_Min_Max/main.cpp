/* 
 * File:   main.cpp
 * Author: Aamir
 * Created on January 12, 2021, 12:20 PM
 * Purpose:  Minimum/Maximum Numbers
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
    short num1, num2;
    //Initialize Variables
    cout << "Enter two whole numbers separated by a space.\n";
    cin >> num1 >> num2;
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    cout << "The larger one is: " << (num1 > num2? num1: num2) << endl;
    cout << "The smaller one is: " << (num1 < num2? num1: num2) << endl;
    //Exit the Program - Cleanup
    return 0;
}