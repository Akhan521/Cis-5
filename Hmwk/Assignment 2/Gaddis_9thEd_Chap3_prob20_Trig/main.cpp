/* 
 * File:   main.cpp
 * Author: Aamir 
 * Created on January 12, 2021, 12:36 PM
 * Purpose:  Sine,Cosine,Tan Functions Problem
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int   angDeg; // angle in degrees
    float angRad, // Angle in radians needed for the trig functions
          sinVal, // Value of the sine of the angle
          cosVal, // Value of the cosine of the angle
          tanVal; // Value of the tan of the value
    //Initialize Variables
    cout << "Calculate trig functions\n";
    cout << "Input the angle in degrees.\n";
    cin >> angDeg;
    angRad = angDeg * (M_PI / 180); 
    // So that we have it in radians when we put it through 
    // the sine,cosine,tan functions because args need to be in radians
    //Map Inputs to Outputs -> Process
    sinVal = sin(angRad);
    cosVal = cos(angRad);
    tanVal = tan(angRad);
    //Display Inputs/Outputs
    cout << fixed << setprecision(4);
    cout << "sin(" << angDeg << ") = " << sinVal << endl;
    cout << "cos(" << angDeg << ") = " << cosVal << endl;
    cout << "tan(" << angDeg << ") = " << tanVal;
    //Exit the Program - Cleanup
    return 0;
}