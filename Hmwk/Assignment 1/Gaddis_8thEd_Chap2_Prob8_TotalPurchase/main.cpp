/* 
 * File:   main.cpp
 * Author: Aamir Khan
 * Created on January 5, 2021, 3:40 PM
 * Purpose: Total Purchase Calculations
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
    float item1, // Prices of each item 1-5
          item2,
          item3,
          item4,
          item5,
          subTot, // Subtotal excluding sales tax
          txAmnt, // Amount of sales tax
          total; // Total including sales tax
      
    //Initialize Variables
    item1 = 15.95;
    item2 = 24.95;
    item3 = 6.95;
    item4 = 12.95;
    item5 = 3.95;
    //Map Inputs to Outputs -> Process
    subTot = item1 + item2 + item3 + item4 + item5;
    txAmnt = subTot * .07;
    total = subTot + txAmnt;
    //Display Inputs/Outputs
    cout << "The price of item 1 is: " << item1 << endl;
    cout << "The price of item 2 is: " << item2 << endl;
    cout << "The price of item 3 is: " << item3 << endl;
    cout << "The price of item 4 is: " << item4 << endl;
    cout << "The price of item 5 is: " << item5 << endl;
    cout << "The subtotal of the purchase is: " << subTot << endl;
    cout << "The amount of the sales tax is: " << txAmnt << endl;
    cout << "The total including the sales tax is: " << total << endl;
    //Exit the Program - Cleanup
    return 0;
}