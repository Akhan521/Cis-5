/* 
 * File:   main.cpp
 * Author: Aamir
 * Created on January 17, 2021, 10:40 AM
 * Purpose:  Savings Account Loop Program
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
    float begBlnc,  //Beginning balance
          newBlnc,  //New Balance After everything
          annRte,   //Annual Interest Rate
          monRte,   //Monthly Interest rate
          monInt,   //Monthly Interest = monthly rate * balance
          totInt=0, //Total Interest earned = monthly int * numMths or add all monthly interests
          deposit,  //Amount deposited each month
          depCntr=0,//Deposit Counter
          withDrwn, //Amount withdrawn each month
          wdCntr=0, //Withdrawal Counter
          numMths;  //Number of months that have passed since the account started
    //Initialize Variables
    cout << "Enter the annual interest rate: ";
    cin >> annRte;
    monRte = annRte/12;
    cout << "Enter the starting balance: ";
    cin >> begBlnc;
    cout << "How many months have passed since the account was established? ";
    cin >> numMths;
    //Map Inputs to Outputs -> Process
    for (int i=1;i<=numMths;i++){
        cout << "How much was deposited for month " << i << "? ";
        cin >> deposit;
        depCntr++;
        cout << "How much was withdrawn? ";
        cin >>withDrwn;
        wdCntr++;
        while (deposit<0||withDrwn<0){
            cout << "Enter a valid deposit and/or withdrawn amount (NO NEGATIVES): ";
            cin >> deposit >> withDrwn;
        }
        begBlnc += deposit;
        begBlnc -= withDrwn;
        monInt = monRte * begBlnc;
        totInt += monInt;
        begBlnc += monInt;
        newBlnc = begBlnc;
    }
    cout << "Beginning Balance: " << begBlnc << endl;
    cout << "New Balance: " << newBlnc << endl;
    cout << "Number of Deposits: " << depCntr << endl;
    cout << "Number of Withdrawals: " << wdCntr << endl;
    cout << "Total Interest Earned: " << totInt << endl;
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}