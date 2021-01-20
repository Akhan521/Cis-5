/* 
 * File:   main.cpp
 * Author: Aamir khan
 * Created on January 12, 2021, 10:30 AM
 * Purpose:  Diet Coke Ratio Problem
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Formatting Library
#include <cstdlib>   //Random # Function
#include <ctime>     //Time Library to set srand()
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
const float CNVENGM = 453.592; //Pounds to grams  
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    float massMs = 35,      // Mass of the mouse in grams
          massKms = 5,      //Mass to kill mouse of sweetener
          wDietr,           // Weight of the Dieter
          massCoke = 350,   // Mass of 1 can of coke
          cncnt8 = 0.001f;  // Concentration of sweetener in a can of diet coke
    int nCans;              // Number of cans of coke
    string name;
    //Initialize Variables
    cout << "This program calculates the max # of diet coke cans the dieter can drink.\n";
    cout << "Input the name of the dieter: ";
    getline(cin,name);
    cout << "Input the weight of the dieter: ";
    cin >> wDietr;
    //wDietr = rand() % (350 - 90 + 1) + 90; // Range from 90 - 350 
    //wDietr = 200;
    //Map Inputs to Outputs -> Process
    nCans = (massKms * wDietr * CNVENGM)/ (massMs * massCoke * cncnt8);
    //Display Inputs/Outputs
    cout << "The maximum number of cans of coke: " << nCans << " that the individual";
    cout << " weighing " << wDietr << " lbs can drink." << endl;
    //Exit the Program - Cleanup
    return 0;
}