/* 
 * File:   main.cpp
 * Author: Aamir Khan
 * Created on January 12, 2021, 5:30 PM
 * Purpose:  Negative, Positive, and Total Sums
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
    float num1, // Numbers 1-10 -> input
          num2,
          num3,
          num4,
          num5,
          num6,
          num7,
          num8,
          num9,
          num10,
          posSum, // Sum of the positive numbers
          negSum, // Sum of the negative numbers
          totSum; // Total sum of all 10 numbers
    //Initialize Variables
    totSum = negSum = posSum = 0;
    cout << "Input 10 numbers, any order, positive or negative\n";
    cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7 >> num8 >> num9 >> num10;
    //Map Inputs to Outputs -> Process
    // For Number 1
    (num1>0?posSum+=num1:negSum+=num1);
    // For Number 2
    (num2>0?posSum+=num2:negSum+=num2);
    // For Number 3
    (num3>0?posSum+=num3:negSum+=num3);
    // For Number 4
    (num4>0?posSum+=num4:negSum+=num4);
    // For Number 5
    (num5>0?posSum+=num5:negSum+=num5);
    // For Number 6
    (num6>0?posSum+=num6:negSum+=num6);
    // For Number 7
    (num7>0?posSum+=num7:negSum+=num7);
    // For Number 8
    (num8>0?posSum+=num8:negSum+=num8);
    // For Number 9
    (num9>0?posSum+=num9:negSum+=num9);
    // For Number 10
    (num10>0?posSum+=num10:negSum+=num10);
    totSum = posSum + negSum;
    //Display Inputs/Outputs
    cout << "Negative sum =" << setw(4) << negSum << endl;
    cout << "Positive sum =" << setw(4) << posSum << endl;
    cout << "Total sum    =" << setw(4) << totSum;
    //Exit the Program - Cleanup
    return 0;
}