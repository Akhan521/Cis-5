/* 
 * File:   main.cpp
 * Author: Aamir Khan
 * Created on January 9, 2021, 3:00 PM
 * Purpose: Box Office Profits  
 */

//System Libraries
#include <iostream>  //I/O Library
#include <string>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
//Program to calculate movie ticket profits and sales
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float adtPrc,   // Price of one adult ticket
          chdPrc,   // Price of one child ticket
          adtTot,   // Total revenue from adult tickets sold
          chdTot,   // Total revenue from child tickets sold
          grsProf,  // Gross profit from combined adult and child tickets
          nbProf,   // Net Box Office profit (20% of the Gross profit)
          distProf, // Amount paid to distributor (80% of the Gross profit)
          distPerc, // The percentage of profit the distributor keeps from Gross profit
          movPerc;  // The percentage of profit the movie theater keeps from Gross profit
    unsigned short adtSld, // Number of adult tickets sold
                   chdSld; // Number of Child tickets sold
    string movie; // Name of the Movie watched
            
    //Initialize Variables
    adtPrc = 10.0;
    chdPrc = 6.0;
    movPerc = .2;
    distPerc = .8;
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    cout << "This program lists some Box Office data and sales information. \n";
    cout << "What movie did you watch? ";
    getline(cin, movie);
    cout << "How many adult tickets were sold? ";
    cin >> adtSld;
    cout << "How many child tickets were sold? ";
    cin >>chdSld;
    adtTot = adtSld * adtPrc;
    chdTot = chdSld * chdPrc;
    grsProf = adtTot + chdTot;
    nbProf = grsProf * movPerc;
    distProf = grsProf * distPerc;
    cout << setprecision(2) << fixed << showpoint;
    cout << "Movie name: " << movie << endl;
    cout << "Adult Tickets Sold: " << adtSld << endl;
    cout << "Child Tickets Sold: " << chdSld << endl;
    cout << "Gross Box Office Profit: $" << grsProf << endl;
    cout << "Net Box Office Profit: $" << nbProf << endl;
    cout << "Amount Paid to Distributor: $" << distProf << endl;
    
    
    //Exit the Program - Cleanup
    return 0;
}