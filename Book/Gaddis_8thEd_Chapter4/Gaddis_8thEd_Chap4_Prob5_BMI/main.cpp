/* 
 * File:   main.cpp
 * Author: Aamir 
 * Created on January 13, 2021, 1:55 PM
 * Purpose:  Body Mass Index Calc.
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
    float weight, // Weight of the user in pounds -> input 
            height, // Height of the user in inches
            bmi; // Body Mass Index
    //Initialize Variables
    cout << "This program calculates your BMI.\n";
    cout << "Enter your body weight in pounds: ";
    cin >> weight;
    cout << "How tall are you in inches? ";
    cin >> height;
    //Map Inputs to Outputs -> Process
    bmi = (weight * 703) / (height * height);
    //Display Inputs/Outputs
    if (bmi >= 18.5 && bmi <= 25)
        cout << "Your BMI is optimal.";
    else if (bmi < 18.5)
        cout << "You're underweight.";
    else if (bmi > 25)
        cout << "You're overweight.";
    else
        cout << "You may have entered the wrong inputs. Rerun the program.";
    cout << "Your BMI is: " << bmi;
    //Exit the Program - Cleanup
    return 0;
}