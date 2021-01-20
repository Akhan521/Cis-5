/* 
 * File:   main.cpp
 * Author: Aamir
 * Created on January 17, 2021, 11:00 AM
 * Purpose:  Display the Largest & Smallest # in a series
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
    unsigned short num,     //Number entered by User
                   larNum,  //Largest Number
                   smlNum,  //Smallest Number
                   sntl=-99;//Sentinel which marks the end of the series of #s
    //Initialize Variables
    cout << "This program will display the largest and smallest # in a series of #s\n";
    cout << "Enter a number or enter -99 to quit the program: ";
    cin >> num;
    larNum=smlNum=num; //Creating a starting point for when we compare these later on
    //Map Inputs to Outputs -> Process
    while (num != sntl){
        if (num < smlNum) //If num < smlNum, this will be set as the newest smallest num
            smlNum = num;
        if (num > larNum) //If num > larNum, this will be set as the newest largest num
            larNum = num;
        cout << "Enter another number: ";
        cin >> num;    
    }
    //Display Inputs/Outputs
    cout << "Largest #: " << larNum << endl;
    cout << "Smallest #: " << smlNum;
    //Exit the Program - Cleanup
    return 0;
}