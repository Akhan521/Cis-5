/* 
 * File:   main.cpp
 * Author: Aamir Khan
 * Created on January 9, 2021, 11:43 AM
 * Purpose: Male and Female Percentages 
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
    unsigned short males, // Number of Males in the class
                   females; // Number of females in the class
    float mlPerc, // Male percentage
          flPerc, // Female percentage
          total; // Number of males and females combined in the class
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    cout << "How many males are in the class? ";
    cin >> males;
    cout << "How many females are in the class? ";
    cin >> females;
    total = males + females;
    mlPerc = (males / total) * 100;
    flPerc = (females / total) * 100;
    cout << "The percentage of males in the class is: %" << mlPerc << endl;
    cout << "The percentage of females in the class is: %" << flPerc << endl;
    //Exit the Program - Cleanup
    return 0;
}