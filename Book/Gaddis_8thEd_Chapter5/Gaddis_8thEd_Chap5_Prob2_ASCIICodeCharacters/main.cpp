/* 
 * File:   main.cpp
 * Author: Aamir
 * Created on January 16, 2021, 1:50 PM
 * Purpose:  Characters for ASCII Code Using Loops
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
    char a; //To diplay ASCII code characters
    //Initialize Variables

    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    for (int i=0;i<=127;i++){
        a = i; // Assigning the char a an int so that it converts to ASCII code
        cout << a << " ";
        // We are printing characters for as long as a % 16 != 0
        // We only print the characters on a new line every 16 characters
        // Anything other than multiples of 16 will give us a remainder
        // so we use this if statement to print 16 chars per line
        if (a % 16 == 0) 
            cout << endl;
    }
    //Exit the Program - Cleanup
    return 0;
}