/* 
 * File:   main.cpp
 * Author: Aamir 
 * Created on January 13, 2021, 9:10 PM
 * Purpose:  Learning how to use switch statements
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
    int choice, //Choice of where we want to branch to
        opt1 = 1, //Option 1
        opt2 = 2, //Option 2
        opt3 = 3, //Option 3
        opt4 = 4; //Option 4
    //Initialize Variables
    cout << "\t\t Menu-Driven Program:\n";
    cout << "1. Program 1" << endl;
    cout << "2. Program 2" << endl;
    cout << "3. Program 3" << endl;
    cout << "4. Quit Menu" << endl;
    cout << "Choose an option #1-4: ";
    cin >> choice;
    //Map Inputs to Outputs -> Process
    switch(choice){
        case 1: 
            cout << "Branching to Program 1...";
            break;
        case 2: 
            cout << "Branching to Program 2...";
            break;
        case 3:
            cout << "Branching to Program 3...";
            break;
        case 4:
            cout << "Quitting Menu.";
            break;
        default: cout << "Enter a valid option between 1 and 4.";
    }
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}