/* 
 * File:   main.cpp
 * Author: Aamir
 * Created on January 16, 2021, 1:40 PM
 * Purpose:  Sum of Numbers Problem
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
    unsigned short sum = 0, //Sum of #s till the ending number
                   endNum;  //Last value in the running total
    //Initialize Variables
    cout << "Enter a # between 1-500 and this program will calculate ";
    cout << "the running total from 1 till that number: ";
    cin >> endNum;
    //Map Inputs to Outputs -> Process
    while(endNum <1 || endNum >500){
        cout << "Enter a # within the range 1-500: ";
        cin >> endNum;
    }for (int i=1; i<=endNum; i++)
        sum += i;
    //Display Inputs/Outputs
    cout << "Sum = " << sum;
    //Exit the Program - Cleanup
    return 0;
}