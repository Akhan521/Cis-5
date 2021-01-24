/* 
 * File:   main.cpp
 * Author: Aamir
 * Created on January 12, 2021, 11:10 PM
 * Purpose:  Diet COke Ratios Problem
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
const float CNVENGM = 453.592; // Conversion from pounds to grams
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float massMs = 35,    // Mass of the mouse
          massKms = 5,    //Mass of sweetener to kill the mouse
          wDietr,         // Weight of the dieter in pounds
          massCoke = 350, // Mass of the coke in grams
          cncnt8 = 0.001f;// Concentration of sweetener in one can of coke
    int nCans;            // Number of cans coke
    //Initialize Variables
   cout << "Program to calculate the limit of Soda Pop Consumption.\n";
   cout << "Input the desired dieters weight in lbs.\n";
   cin >> wDietr;
    //Map Inputs to Outputs -> Process
    nCans = (massKms * wDietr * CNVENGM) / (massMs * cncnt8 * massCoke);
    //Display Inputs/Outputs
    cout << "The maximum number of soda pop cans\n";
    cout << "which can be consumed is " << nCans << " cans";
    //Exit the Program - Cleanup
    return 0;
}