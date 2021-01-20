/* 
 * File:   main.cpp
 * Author: Aamir 
 * Created on January 12, 2021, 12:20 PM
 * Purpose:  Fahrenheit to Celsius Temps
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
    float celTmp, // Temperature in Celcius
          fhtTmp; // Temperature in Fahrenheit
    //Initialize Variables
    cout << "Temperature Converter\n";
    cout << "Input Degrees Fahrenheit\n";
    cin >> fhtTmp;
    //Map Inputs to Outputs -> Process
    cout << fixed << setprecision(1) << showpoint;
    celTmp = 5.0/9 *(fhtTmp - 32); // Formula Conversion
    //Display Inputs/Outputs
    cout << fhtTmp << " Degrees Fahrenheit = " << celTmp << " Degrees Centigrade";
    //Exit the Program - Cleanup
    return 0;
}