/* 
 * File:   main.cpp
 * Author: Aamir
 * Created on January 16, 2021, 4:20 PM
 * Purpose:  Distance Traveled Using Loops
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
    unsigned short spd,  //Speed of the vehicle in MPH -> input
                   hrs,  //Hours Traveled -> input
                   dist; //Distance traveled = spd * hrs
    //Initialize Variables
    cout << "What is the speed of the vehicle in MPH? ";
    cin >> spd;
    cout << "How many hours has it traveled? ";
    cin >> hrs;
    while (spd<0 || hrs<1){
        cout << "Enter the speed again: ";
        cin >> spd;
        cout << "Enter the time again: ";
        cin >> hrs;
    }
    cout << "Hours\tDistance Traveled\n";
    cout << "--------------------------\n";
    //Map Inputs to Outputs -> Process
        for (int r=1;r<=hrs;r++){
            cout << setw(3) << r << "\t\t" << (spd * r) << endl;
        }
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}