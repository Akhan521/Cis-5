/* 
 * File:   main.cpp
 * Author: Aamir Khan
 * Created on January 5, 2021, 1:24 PM
 * Purpose: Sales Tax 
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
    float purch, // Purchase amount
          stattx, // States Sales Tax percent
          tottx, // Total Sales Tax (adding state and county sales tax percents)
          txamnt, // Tax amount after applying total sales tax percent
          counttx; // County Sales Tax percent
    
    //Initialize Variables
    stattx = .04;
    counttx = .02;
    purch = 95;
        
    //Map Inputs to Outputs -> Process
    tottx = stattx + counttx;
    txamnt = purch * tottx;
            
    //Display Inputs/Outputs
    cout << "The total sales tax amount of a $95 dollar purchase is " << txamnt;
    //Exit the Program - Cleanup
    return 0;
}