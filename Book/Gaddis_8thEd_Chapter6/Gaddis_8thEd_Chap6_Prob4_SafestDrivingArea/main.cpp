/* 
 * File:   main.cpp
 * Author: Aamir
 * Created on January 19, 2021, 7:05 PM
 * Purpose:  Safest Driving Area Using Functions
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Definitions
unsigned short getNumAccidents(string name){
    unsigned short numAcc;
    cout << "How many accidents were reported in the " << name << " this year? ";
    cin >> numAcc;
    while (numAcc < 0){
        cout << "Enter a # no less than 0: ";
        cin >> numAcc;
    }
    return numAcc;
}
void findLowest(short tot1, short tot2, short tot3, short tot4, short tot5){
    if (tot1<tot2&&tot1<tot3&&tot1<tot4&&tot1<tot5)
        cout << "Safest Region: The North: " << tot1 << " accidents";
    else if (tot2<tot1&&tot2<tot3&&tot2<tot4&&tot2<tot5)
        cout << "Safest Region: The South: " << tot2 << " accidents";
    else if (tot3<tot1&&tot3<tot2&&tot3<tot4&&tot3<tot5)
        cout << "Safest Region: The East: " << tot3 << " accidents";
    else if (tot4<tot1&&tot4<tot2&&tot4<tot3&&tot4<tot5)
        cout << "Safest Region: The West: " << tot4 << " accidents";
    else
        cout << "Safest Region: The Central: " << tot5 << " accidents";
} 
//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    unsigned short accTot1, accTot2, accTot3, accTot4, accTot5; //Accident totals #1-5
    //Initialize Variables
    accTot1 = getNumAccidents("North");
    accTot2 = getNumAccidents("South");
    accTot3 = getNumAccidents("East");
    accTot4 = getNumAccidents("West");
    accTot5 = getNumAccidents("Central");
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    findLowest(accTot1,accTot2,accTot3,accTot4,accTot5);
    //Exit the Program - Cleanup
    return 0;
}