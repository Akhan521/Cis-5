/* 
 * File:   main.cpp
 * Author: Aamir
 * Created on January 16, 2021, 12:35 PM
 * Purpose:  For Loops for Patterns
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

    //Initialize Variables

    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    //Pattern A
    for (int r=0; r<10; r++){
        for (int c=0; c<=r; c++){
            cout << "+";
        }cout << endl;
    }
    cout << endl;
    //Pattern B
    for (int r=0; r<10; r++){
        for (int c=10; c>r; c--){
            cout << "+";
        }cout << endl;
    }
    //Exit the Program - Cleanup
    return 0;
}