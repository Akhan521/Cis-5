/* 
 * File:   main.cpp
 * Author: Aamir
 * Created on January 13, 2021, 5:40 PM
 * Purpose:  Math Tutor
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    int seed = time(0);
    srand(seed);
    //Declare Variables
    int num1,
        num2,
        corTot, // Correct Total
        tot; // Total after the addition
    //Initialize Variables
    cout << "Add up the two random #s below.\n";
    num1 = rand() % (999 - 100 + 1) + 100; // Range: 100-999
    num2 = rand() % (999 - 100 + 1) + 100; // Range: 100-999
    corTot = num1 + num2;
    //Map Inputs to Outputs -> Process
    cout << setw(5) << num1 << "\n" << "+" << setw(4) << num2 << "\n";
    cout << "______" << endl;
    cin >> tot;
    //Display Inputs/Outputs
    if (tot == corTot)
        cout << "You win!";
    else 
        cout << "You more need practice.";
    //Exit the Program - Cleanup
    return 0;
}