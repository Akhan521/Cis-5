/* 
 * File:   main.cpp
 * Author: Aamir 
 * Created on January 12, 2021, 11:00 PM
 * Purpose:  
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
    unsigned short numCks = 40,    // Number of cookies
                   numCals = 300,  // Number of calories per serving
                   numServ = 10,   // Number of servings per bag of cookies
                   numCksSrv = 4,  // Number of cookies per serving
                   numCalCk,       // Number of calories per cookie
                   cksCnsd,        // Number of cookies consumed
                   calCnsd;        // Calories consumed by user
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    numCalCk = numCals / numCksSrv; // To find the number of clories per cookie consumed
    cout << "Calorie Counter\n";
    cout << "How many cookies did you eat?\n";
    cin >> cksCnsd;
    calCnsd = cksCnsd * numCalCk;   // Calories consumed = number of cookies eaten * number of calories per cookie
    //Display Inputs/Outputs
    cout << "You consumed " << calCnsd << " calories.";
    //Exit the Program - Cleanup
    return 0;
}