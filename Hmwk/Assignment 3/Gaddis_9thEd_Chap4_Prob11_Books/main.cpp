/* 
 * File:   main.cpp
 * Author: Aamir
 * Created on January 14, 2021, 4:10 PM
 * Purpose:  Books and Points
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
    unsigned short numBks, //Number of books that the user purchased
                   numPts; //Number of points the user earns
    //Initialize Variables
    cout << "Book Worm Points\n";
    cout << "Input the number of books purchased this month.\n";
    cin >> numBks;
    numBks = abs(numBks);
    //Map Inputs to Outputs -> Process
    if (numBks == 1)
        numPts = 5;
    else if (numBks == 2)
        numPts = 15;
    else if (numBks == 3)
        numPts = 30;
    else if (numBks >= 4)
        numPts = 60;
    else
        cout << "Invalid Input";
    //Display Inputs/Outputs
    cout << "Books purchased =" << setw(3) << numBks << endl;
    cout << "Points earned   =" << setw(3) << numPts;
    //Exit the Program - Cleanup
    return 0;
}