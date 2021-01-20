/* 
 * File:   main.cpp
 * Author: Aamir Khan
 * Created on January 5, 2021, 1:18 PM
 * Purpose: Average of Values
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
    float num1, // All numbers from 1-5
          num2,
          num3,
          num4,
          num5,
          sum, // The sum of all five numbers
          avgVal; // The average of these numbers
    //Initialize Variables
    num1 = 28;
    num2 = 32;
    num3 = 37; 
    num4 = 24;
    num5 = 33;
    //Map Inputs to Outputs -> Process
    sum = num1 + num2 + num3 + num4 + num5;
    avgVal = sum / 5;
    //Display Inputs/Outputs
    cout << "The average of the five numbers is " << avgVal;
    //Exit the Program - Cleanup
    return 0;
}