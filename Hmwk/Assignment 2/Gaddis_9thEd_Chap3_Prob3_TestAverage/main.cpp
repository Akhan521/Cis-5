/* 
 * File:   main.cpp
 * Author: Aamir
 * Created on January 9, 2021, 11:32 AM
 * Purpose: Calculate Test Average 
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Formatting Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float scr1, // Score of Test 1
          scr2, // Score of Test 2
          scr3, // Score of Test 3
          scr4, // Score of Test 4
          scr5, // Score of Test 5
          avgscr; // Average test score of the 5 tests
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    cout << setprecision(1) << fixed; // To display one decimal place of precision
    cout << "What was the first test score: ";
    cin >> scr1;
    cout << "What was the second test score: ";
    cin >> scr2;
    cout << "What was the third test score: ";
    cin >> scr3;
    cout << "What was the fourth test score: ";
    cin >> scr4;
    cout << "What was the fifth test score: ";
    cin >> scr5;
    avgscr = (scr1 + scr2 + scr3 + scr4 + scr5) / 5;
    cout << "The average test score is: " << avgscr;
    //Exit the Program - Cleanup
    return 0;
}