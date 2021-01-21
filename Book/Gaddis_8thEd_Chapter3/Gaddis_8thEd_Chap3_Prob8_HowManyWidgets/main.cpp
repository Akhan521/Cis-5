/* 
 * File:   main.cpp
 * Author: Aamir Khan
 * Created on January 9, 2021, 4:05 PM
 * Purpose:  How Many Widgets?
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
    float wgtWid,   // Weight of one widget in pounds
          wgtPlt,   // Weight of the Pallet alone in pounds
          totWidWt, //Total weight of the widgets stacked on the pallet in pounds
          totWt,    //Total weight including widgets and the pallet in pounds
          numWid;   // Number of widgets stacked on the pallet
    //Initialize Variables
    wgtWid = 12.5;
    //Map Inputs to Outputs -> Process
    //Total weight of the widgets on top is just: total weight - weight of the pallet
    //& the # of widgets can be found by dividing the total weight of the widgets
    //by the weight of a single widget -> numWid = totWidWt / wgtWid
    
    //Display Inputs/Outputs
    cout << "This program determines how many widgets are stacked on top of a \n";
    cout << "pallet based on weight calculations in pounds. \n";
    cout << "How much does the pallet weigh by itself in pounds? ";
    cin >> wgtPlt;
    cout << "How much does the pallet weigh with the widgets stacked on top in pounds? ";
    cin >> totWt;
    totWidWt = totWt - wgtPlt;
    numWid = totWidWt / wgtWid;
    cout << "The number of widgets stacked on top is: " << numWid << endl;
    //Exit the Program - Cleanup
    return 0;
}