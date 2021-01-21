/* 
 * File:   main.cpp
 * Author: Aamir Khan
 * Created on January 9, 2021, 4:24 PM
 * Purpose:  How Many Calories?
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
//Program to calculate how many calories were consumed 
//based on the # of cookies consumed
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    unsigned short totCks, // Total number of cookies in one bag of cookies
                   calPSer,// Number of calories consumed per serving
                   numServ,// Number of servings in one bag of cookies
                   calPCk, // Number of calories consumed per cookie
                   cksPSer,// Number of cookies per serving
                   numCks, // Number of cookies the user ate
                   calCons; // calories consumed by the user 
            
    //Initialize Variables
    totCks = 30;
    calPSer = 300;
    numServ = 10;
    //Map Inputs to Outputs -> Process
    cksPSer = totCks / numServ; // Find the number of cookies per serving (3 cookies)
    calPCk = calPSer / cksPSer; // Dividing the # of cals per serving by the # 
                                // of cookies per serving = # of cals per cookie
    //Display Inputs/Outputs
    cout << "This program tells you how many calories you consumed from eating cookies.\n";
    cout << "One bag of cookies contains 30 cookies. How many did you eat? ";
    cin >> numCks;
    calCons = numCks * calPCk;
    cout << "You consumed " << calCons << " calories by eating " << numCks << " cookies.";
    //Exit the Program - Cleanup
    return 0;
}