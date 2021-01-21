/* 
 * File:   main.cpp
 * Author: Aamir Khan
 * Created on January 9, 2021, 12:00 PM
 * Purpose: Ingredient Adjuster Prob 
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
//Program to readjust ingredients based on the # of cookies the user wants to make
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float sug48, // Cups of sugar required to make 48 cookies
          butr48,// Cups of butter required to make 48 cookies
          flr48, // Cups of flour required to make 48 cookies
          numCks,// Number of cookies the user wants to make
          adjSgr, // Adjusted value of sugar needed to make numCks
          adjButr, // Adjusted value of butter needed to make numCks
          adjFlr, // Adjusted value of flour needed to make numCks
          recCks;// Number of cookies that can be made with the original recipe (48)
    //Initialize Variables
    sug48 = 1.5;
    butr48 = 1;
    flr48 = 2.75;
    recCks = 48;
    //Map Inputs to Outputs -> Process
    // The ratio of an (ingredient's initial value / 48 cookies) needs to be the 
    // same as the ratio of (new ingredient value / # of cookies the user wants to make)
    // Ex. (1.5/48) = (new ingred / num of cookies) so if we multiply the both
    // sides by num of cookies, we can solve for the new ingredient value
    //Display Inputs/Outputs
    cout << "This program readjusts the ingredients based on the \n";
    cout << "number of cookies the user wants to make. \n";
    cout << "How many cookies do you want to make: ";
    cin >> numCks;
    adjSgr = (1.5 / 48) * numCks;
    adjButr = (1.0 / 48) * numCks;
    adjFlr = (2.75 / 48) * numCks;
    cout << "The ingredients you'll need to make " << numCks << " cookies are: \n";
    cout << adjSgr << " Cups of Sugar" << endl;
    cout << adjButr << " Cups of Butter" << endl;
    cout << adjFlr << " Cups of Flour";
    //Exit the Program - Cleanup
    return 0;
}