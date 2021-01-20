/* 
 * File:   main.cpp
 * Author: Aamir Khan
 * Created on January 5, 2021, 3:16 PM
 * Purpose: Calculating Annual Pay 
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    unsigned short payAmnt, // How Much the employer is paid
                   payPrd,// How many times he's paid
                   annPay; // Annual Pay
    //Initialize Variables
    payAmnt = 2200;
    payPrd = 26;
   
    //Map Inputs to Outputs -> Process
    annPay = payAmnt * payPrd;
    //Display Inputs/Outputs
    cout << "The employer's annual pay is: " << annPay << endl;
    cout << "after being paid 26 times and $2200 each time.";
    //Exit the Program - Cleanup
    return 0;
}