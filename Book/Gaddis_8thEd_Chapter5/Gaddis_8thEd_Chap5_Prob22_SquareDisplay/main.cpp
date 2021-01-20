/* 
 * File:   main.cpp
 * Author: Aamir 
 * Created on January 16, 2021, 1:15 PM
 * Purpose:  Square Display
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
    int dimen,//Dimensions of the square
        r,    //# of Rows
        c;    //# of Columns
    //Initialize Variables
    while (dimen < 1 || dimen > 15){
        cout << "Enter a # between 1-15 and a square of those dimensions will be displayed: ";
        cin >> dimen;
    }
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    for (r=0; r<dimen; r++){
        for (c=0; c<dimen; c++)
            cout << "X";
    cout << endl;}
    //Exit the Program - Cleanup
    return 0;
}