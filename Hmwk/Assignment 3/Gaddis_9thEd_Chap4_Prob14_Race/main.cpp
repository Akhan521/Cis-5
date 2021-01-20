/* 
 * File:   main.cpp
 * Author: Aamir
 * Created on January 14, 2021, 6:00 PM
 * Purpose:  Race Problem
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
    string rnr1, rnr2, rnr3; // The 3 Runners
    int rnr1tme, rnr2tme, rnr3tme; //Times of the 3 Runners
    //Initialize Variables
    cout << "Race Ranking Program\n";
    cout << "Input 3 Runners\n";
    cout << "Their names, then their times\n";
    cin >> rnr1 >> rnr1tme >> rnr2 >> rnr2tme >> rnr3 >> rnr3tme;
    //Map Inputs to Outputs -> Process
    if (rnr1tme < rnr2tme && rnr1tme < rnr3tme && rnr2tme < rnr3tme){
        cout << rnr1 << "\t" << setw(3) << rnr1tme << endl;
        cout << rnr2 << "\t" << setw(3) << rnr2tme << endl;
        cout << rnr3 << "\t" << setw(3) << rnr3tme;
    }
    else if (rnr1tme < rnr2tme && rnr1tme < rnr3tme && rnr3tme < rnr2tme){
        cout << rnr1 << "\t" << setw(3) << rnr1tme << endl;
        cout << rnr3 << "\t" << setw(3) << rnr3tme << endl;
        cout << rnr2 << "\t" << setw(3) << rnr2tme;
    }
    else if (rnr2tme < rnr1tme && rnr2tme < rnr3tme && rnr1tme < rnr3tme){
        cout << rnr2 << "\t" << setw(3) << rnr2tme << endl;
        cout << rnr1 << "\t" << setw(3) << rnr1tme << endl;
        cout << rnr3 << "\t" << setw(3) << rnr3tme;
    }
    else if (rnr2tme < rnr1tme && rnr2tme < rnr3tme && rnr3tme < rnr1tme){
        cout << rnr2 << "\t" << setw(3) << rnr2tme << endl;
        cout << rnr3 << "\t" << setw(3) << rnr3tme << endl;
        cout << rnr1 << "\t" << setw(3) << rnr1tme;
    }
    else if (rnr3tme < rnr2tme && rnr3tme < rnr1tme && rnr1tme < rnr2tme){
        cout << rnr3 << "\t" << setw(3) << rnr3tme << endl;
        cout << rnr1 << "\t" << setw(3) << rnr1tme << endl;
        cout << rnr2 << "\t" << setw(3) << rnr2tme;
    }
    else if (rnr3tme < rnr2tme && rnr3tme < rnr2tme && rnr2tme < rnr1tme){
        cout << rnr3 << "\t" << setw(3) << rnr3tme << endl;
        cout << rnr2 << "\t" << setw(3) << rnr2tme << endl;
        cout << rnr1 << "\t" << setw(3) << rnr1tme;
    }
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}