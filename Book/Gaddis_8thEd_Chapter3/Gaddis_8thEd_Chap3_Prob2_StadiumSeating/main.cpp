/* 
 * File:   main.cpp
 * Author: Aamir Khan
 * Created on January 8, 2021, 7:42 PM
 * Purpose: Stadium Seating Calc.
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Formatting Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    unsigned short clATic, // Class A Tickets sold
                   clBTic, // Class B Tickets sold
                   clCTic; // Class C Tickets sold            
    float          clAPrc, // Price of one Class A ticket
                   clBPrc, // Price of one Class B ticket
                   clCPrc, // Price of one Class C ticket
                   ticSls, // Ticket Sales generated from all three class tickets
                   clATot, // Total revenue for Class A tickets sold
                   clBTot, // Total revenue for Class B tickets sold
                   clCTot; // Total revenue for Class C tickets sold
    //Initialize Variables
    clAPrc = 15.0;
    clBPrc = 12.0;
    clCPrc = 9.0;
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    // Program to calculate ticket sales:
    cout << "How many Class A tickets were sold: ";
    cin >> clATic;
    cout << "How many Class B tickets were sold: ";
    cin >> clBTic;
    cout << "How many Class C tickets were sold: ";
    cin >> clCTic;
    clATot = clATic * clAPrc;
    clBTot = clBTic * clBPrc;
    clCTot = clCTic * clCPrc;
    ticSls = clATot + clBTot + clCTot;
    cout << setprecision(2) << fixed;
    cout << "The total revenue made from tickets sales is: $" << ticSls << endl;
    cout << "Where Class A tickets went for: $15. \n";
    cout << "Class B tickets went for: $12. \n";
    cout << "and Class C tickets went for: $9.";
    
    //Exit the Program - Cleanup
    return 0;
}