/* 
 * File:   main.cpp
 * Author: Aamir Khan
 * Created on January 5, 2021, 3:29 PM
 * Purpose: Ocean Levels
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
    float risert, // Rate at which the ocean rises in millimeters
          aft5, // How much higher the ocean has risen after 5 years
          aft7, // How much higher the ocean has risen after 7 years
          aft10; // How much higher the ocean has risen after 10 years
         
    //Initialize Variables
    risert = 1.5;
    
    //Map Inputs to Outputs -> Process
    aft5 = risert * 5;
    aft7 = risert * 7;
    aft10 = risert * 10;
    //Display Inputs/Outputs
    cout << "After 5 years, the ocean will have risen " << aft5 << " millimeters" << endl;
    cout << "After 7 years, the ocean will have risen " << aft7 << " millimeters" << endl;
    cout << "After 10 years, the ocean will have risen " << aft10 << " millimeters" << endl;
    //Exit the Program - Cleanup
    return 0;
}