/*  
 * File:   main.cpp
 * Author: Aamir
 * Created on January 13, 2021, 8:20 PM
 * Purpose:  Bank Charges Problem
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
    float monFee = 10,   // Monthly fee for the account 
          numChks,       // Number of checks
          addChrg,       // Additional Charge if account balance falls below $400
          chkFee,        // Checking Fees
          begBlnce,      // Beginning balance of the account
          newBlnc,       // New Balance
          totFee = 0;    // Total service fees including $10 monthly + check fees
    //Initialize Variables
    cout << "Monthly Bank Fees\n";
    cout << "Input Current Bank Balance and Number of Checks\n";
    cin >> begBlnce >> numChks;
    numChks = abs(numChks);
    //Map Inputs to Outputs -> Process
    if (begBlnce < 0)
        cout << "Account is overdrawn.";
    else{
        if (begBlnce < 400){
            addChrg = 15;
             totFee += addChrg; // Adding $15 charge for being under $400
        }
        else if (begBlnce >= 400){
            addChrg = 0;
            totFee += addChrg;
        }
        if (numChks < 20){
            chkFee = (numChks * .1);
            totFee += monFee + chkFee;
        }
        else if (numChks >= 20 && numChks < 40){
            chkFee = (numChks * .08);
            totFee += monFee + chkFee;
        }
        else if (numChks >= 40 && numChks < 60){
            chkFee = (numChks * .06);
            totFee += monFee + chkFee;
        }
        else {
            chkFee = (numChks * .04);
            totFee += monFee + chkFee;
    }
    newBlnc = begBlnce - totFee;
    cout << fixed << setprecision(2);
    cout << "Balance     $" << setw(9) << begBlnce << endl;
    cout << "Check Fee   $" << setw(9) << chkFee << endl;
    cout << "Monthly Fee $" << setw(9) << monFee << endl;
    cout << "Low Balance $" << setw(9) << addChrg << endl;
    cout << "New Balance $" << setw(9) << newBlnc;
    }
    //Display Inputs/Outputs
    cout << "Total service fees for the month are: $" << totFee;
    //Exit the Program - Cleanup
    return 0;
}