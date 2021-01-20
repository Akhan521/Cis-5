/* 
 * File:   main.cpp
 * Author: 
 * Created on January 12, 2021, 12:20 PM
 * Purpose:  
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
    unsigned short num2Cnv; //Number to convert to Roman Numeral
    unsigned char n1000s, n100s, n10s, n1s; // Number of 1000s, 100s, 10s, and 1s you have
    //Initialize Variables
    cout << "Arabic to Roman numeral conversion.\n";
    cout << "Input the integer to convert.\n";
    cin >> num2Cnv;
    //Map Inputs to Outputs -> Process
    n1000s = (num2Cnv/1000)%10;
    n100s = (num2Cnv/100)%10;
    n10s = (num2Cnv/10)%10;
    n1s = num2Cnv%10;
    if (num2Cnv >= 1000 & num2Cnv <= 3000){
        cout << num2Cnv << " is equal to ";
        switch(n1000s){
            case 3: cout << 'M';
            case 2: cout << 'M';
            case 1: cout << 'M';
        }
        switch(n100s){
            case 9: cout << "CM";
            break;
            case 8: cout << "DCCC";
            break;
            case 7: cout << "DCC";
            break;
            case 6: cout << "DC";
            break;
            case 5: cout << "D";
            break;
            case 4: cout << "CD";
            break;
            case 3: cout << "CCC";
            break;
            case 2: cout << "CC";
            break;
            case 1: cout << "CC";
        }
        switch(n10s){
            case 9: cout << "XC";
            break;
            case 8: cout << "LXXX";
            break;
            case 7: cout << "LXX";
            break;
            case 6: cout << "LX";
            break;
            case 5: cout << "L";
            break;
            case 4: cout << "XL";
            break;
            case 3: cout << "XXX";
            break;
            case 2: cout << "XX";
            break;
            case 1: cout << "X";
        }
        switch(n1s){
            case 9: cout << "IX";
            break;
            case 8: cout << "VIII";
            break;
            case 7: cout << "VII";
            break;
            case 6: cout << "VI";
            break;
            case 5: cout << "V";
            break;
            case 4: cout << "IV";
            break;
            case 3: cout << "III";
            break;
            case 2: cout << "II";
            break;
            case 1: cout << "I";
        }
    }else
        cout << num2Cnv << " is Out of Range!";
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}