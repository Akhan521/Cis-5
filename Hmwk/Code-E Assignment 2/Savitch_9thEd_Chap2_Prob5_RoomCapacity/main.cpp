/* 
 * File:   main.cpp
 * Author: Aamir 
 * Created on January 12, 2021, 6: PM
 * Purpose:  Room Capacity and Regulations Problem
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
    unsigned short maxCap, // Max room capacity according to fire law regulations
                   numPpl, // number of people joining the meeting in the room
                   remSpts, // Number of spots that need to be excluded to meet regulations
                   avlSpts; // Number of Available spots
    //Initialize Variables
    cout << "Input the maximum room capacity and the number of people\n";
    cin >> maxCap >> numPpl;
    //Map Inputs to Outputs -> Process
     if (numPpl <= maxCap){
        cout << "Meeting can be held.\n";
        avlSpts = maxCap - numPpl;
        cout << "Increase number of people by " << avlSpts << " will be allowed without violation.";
    }else if (numPpl > maxCap){
        cout << "Meeting cannot be held.\n";
        remSpts = numPpl - maxCap;
        cout << "Reduce number of people by " << remSpts << " to avoid fire violation.";
    }
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}