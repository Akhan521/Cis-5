/* 
 * File:   main.cpp
 * Author: Aamir
 * Created on January 5, 2021, 11:27 AM
 * Purpose:  Painter's Problem
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
    unsigned short height, length, pntCov,srfArea,numGlns;
    //Initialize Variables
    height = 6;
    length = 100;
    pntCov = 340;
    //Map Inputs to Outputs -> Process
    srfArea = 2*2*height*length;
    numGlns = srfArea / pntCov + 1;
    //Display Inputs/Outputs
    cout << "Number of Gallons = " << numGlns << " to paint a ";
    cout << height << " x " << length << " fence twice front and back.";
    //Exit the Program - Cleanup
    return 0;
}