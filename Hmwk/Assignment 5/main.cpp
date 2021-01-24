/* 
 * File:   main.cpp
 * Author: Aamir 
 * Created on January 22, 2021, 5:10 PM
 * Purpose:  Menu Driven Assignment 5
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes
void minmax(int,int,int);
int fctrl(int);
bool isPrime(int);
int collatz(int);
int collatzV2(int arg);
void getInput(int &, int &);
int timeCNV(int, char &);
void getOutput(int, int, int, char);
void timeCNV2();
float psntVal(float,int,float);
void getScre(int &,int &,int &,int &,int &);
float calcAvg(int,int,int,int,int);
int fndLwst(int,int,int,int,int);
//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int choice; //Choice of where we want to branch to
    //Initialize Variables
    cout << "\t\t Menu-Driven Assignment 5:\n";
    cout << "1. Min/Max Program " << endl;
    cout << "2. Factorial Program" << endl;
    cout << "3. isPrime Program" << endl;
    cout << "4. Collatz Sequence Program" << endl;
    cout << "5. Collatz Sequence Program Ver. 2" << endl;
    cout << "6. Waiting Time Program (Modified # 7) - Sav9EdC5P12" << endl;
    cout << "7. Military Time Converter Program - Sav9EdC5P11" << endl;
    cout << "8. Present Value Program - Ga9EdC6P9" << endl;
    cout << "9. Average Test Score Program - Ga9EdC6P10" << endl;
    cout << "10. Quit Menu" << endl;
    cout << "Choose an option #1-10: ";
    cin >> choice;
    //Map Inputs to Outputs -> Process
    if (choice != 10){
        switch(choice){
            case 1:{
                //Declare Variables
                int inp1, inp2, inp3;
                //Initialize Variables
                cout << "Input 3 numbers\n";
                cin >> inp1 >> inp2 >> inp3;
                //Output data
                minmax(inp1,inp2,inp3);
                break;
            }
            case 2:{
                //Declare Variables
                int inp1;
                //Initialize Variables
                cout << "This program calculates the factorial using a function prototype found in the template for this problem.\n";
                cout << "Input the number for the function.\n";
                cin >> inp1;
                //Output data
                cout << inp1 << "! = " << fctrl(inp1);
                break;
            }
            case 3:{
                //Declare Variables
                bool prime; //Result after function returns value
                int inp1;   //Input
                //Initialize Variables
                cout << "Input a number to test if Prime.\n";
                cin >> inp1;
                //Output data
                isPrime(inp1);
                break;
            }
            case 4:{
                //Declare Variables
                int n; //Sequence start
                //Initialize Variables
                cout<<"Collatz Conjecture Test"<<endl;
                cout<<"Input a sequence start"<<endl;
                cin>>n;
                //Process/Map inputs to outputs
                cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
                        collatz(n)<<" steps";
                break;
            }
            case 5:{
                //Declare Variables
                int n,ns; //Steps and sequence will be displayed using these
                //Initialize Variables
                cout<<"Collatz Conjecture Test"<<endl;
                cout<<"Input a sequence start"<<endl;
                cin>>n; 
                //Process/Map inputs to outputs
                ns=collatzV2(n); //Store the result of the function
                //Output data
                cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
                        ns<<" steps";
                break;
            }
            case 6:{
                //Display the outputs
                timeCNV2();
                break;
            }
            case 7:{
                //Declare Variables
                int  hrs,       //This will hold the hours the user inputs through the reference variable
                     mins,      //This will holds the minutes the user inputs through the reference variable
                     adjHrs;    // Will hold the adjusted hours in 12 hr format
                char ampm='A',  //Will hold 'A' or 'P' for AM or PM, but initialized with 'A' to begin with
                     choice;
                //Initialize or input i.e. set variable values
                cout <<"Military Time Converter to Standard Time\n";
                cout << "Input Military Time hh:mm\n";
                //getInput(hrs,mins);
                //Display the outputs
                do{
                getInput(hrs,mins);                 //This will prompt the user for the military time
                adjHrs = timeCNV(hrs,ampm);         //This function will return the hrs in correct 12 hr format and set variable ampm to either 'A' or 'P'
                getOutput(hrs,mins,adjHrs,ampm);    //This will display the formatted time with either AM or PM
                cout << "Would you like to convert another time (y/n)\n";
                cin >> choice;
                }while (choice == 'Y' || choice == 'y');
                break;
            }
            case 8:{
                //Declare Variables
                float futVal,  //Future value that the user wants in dollars
                      intRte,  // Annual interest rate percent
                      presVal; //Present Value 
                int   numYrs;  //# of years the money will sit in the account
                //Initialize or input i.e. set variable values
                cout << "This is a Present Value Computation\n";
                cout << "Input the Future Value in Dollars\n";
                cin >> futVal;
                cout << "Input the Number of Years\n";
                cin >> numYrs;
                cout << "Input the Interest Rate %/yr\n";
                cin >> intRte;
                intRte /= 100.0f; //Converting the percent to decimal 
                //Map inputs -> outputs
                presVal = psntVal(futVal,numYrs,intRte);
                //Display the outputs
                cout << fixed << setprecision(2);
                cout << "The Present Value = $" << presVal; 
                break;
            }
            case 9:{
                //Declare Variables
                int scr1, scr2, scr3, scr4, scr5; //1 test score will be stored in each 
                int lowest, scrTot;               //Lowest test score stored here and the score total will be used to test the range 
                float average;                    //Average stored here
                //Initialize or input i.e. set variable values
                cout << "Find the Average of Test Scores\n";
                cout << "by removing the lowest value.\n";
                //Display the outputs
                getScre(scr1,scr2,scr3,scr4,scr5); //Gets 5 test scores
                scrTot = scr1 + scr2 + scr3 + scr4 + scr5;
                if (scrTot >= 5 && scrTot <= 500){           //The most you could have is 500 and the least is 5 for the total of the scores (Range: 1-100)
                average = calcAvg(scr1,scr2,scr3,scr4,scr5); //Calls the fndLwst function and drops that test score, then calculates the average of the 4 remaining scores
                cout << fixed << setprecision(1);
                cout << "The average test score = " << average;
                }
                break;
            }
            default: cout << "Enter a valid option between 1 and 10.";
        }
    }
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}
//Function Definitions
//***********************************
//     Function minmax:             *
//Return the min and max of 3 args  *
//***********************************
void minmax(int num1, int num2, int num3){
    int min, max;
    min = (num1<num2&&num1<num3?num1:
           num2<num1&&num2<num3?num2:num3);
    max = (num1>num2&&num1>num3?num1:
           num2>num1&&num2>num3?num2:num3);
    cout << "Min = " << min << endl;
    cout << "Max = " << max;
}
//******************************************
//           Function fctrl:               *
// returns the factorial result of the arg *
//******************************************
int fctrl(int arg){
    int result = 1;
    for (int i=arg; i>0; i--){
        result *= i;
    }
    return result;
}
//*************************************
//          Function isPrime:         *
//returns true if prime, false if not *
//*************************************
bool isPrime(int arg){
    if (arg % 2 != 0){
        cout << arg << " is prime.";
        return true;
    }
    else{
        cout << arg << " is not prime.";
        return false;
    }
}
//**********************************************
//      Function collatz:                      *
// When even, divide by 2. When odd, multiply  *
// by 3 and add 1 until the number is 1        *
//**********************************************
int collatz(int arg){
    int steps=1;
    while (arg != 1){
        if (arg % 2 == 0){
            arg /= 2;
            steps++;
        }
        else{
            arg = arg * 3 + 1;
            steps++;
        }
    }
    return steps;
}
//**********************************************
//      Function collatz:                      *
// When even, divide by 2. When odd, multiply  *
// by 3 and add 1 until the number is 1        *
//displays the sequence as well                *
//**********************************************
int collatzV2(int arg){
    int steps=1;
    cout << arg << ", ";
    while (arg != 1){
        if (arg % 2 == 0){
            arg /= 2;
            steps++;
            if (arg != 1)
                cout << arg << ", ";
            else if (arg == 1)
                cout << arg;
        }
        else{
            arg = arg * 3 + 1;
            steps++;
            if (arg != 1)
            cout << arg << ", ";
            else if (arg == 1)
                cout << arg;
        }
    }
    cout << endl;
    return steps;
}
//*****************************
//       Function getInput:   *
// Ask user for military time *
//*****************************
void getInput(int &hrs, int &mins){ //Initialized w/ 0 by default and we'll prompt the user for their value
    cin >> hrs;
    cin.ignore(20,':');
    cin >> mins;
    }
//*******************************************************
//               Function timeCNV:                      *
// convert military hrs to proper adjusted 12 hr format *
//*******************************************************
int timeCNV(int hrs, char &ampm){
    int adjHrs;     //Adjusted Hours for the 12 hr format
    if (hrs < 12){
        ampm = 'A'; // AM for hours less than 12
        if (hrs < 1) 
            adjHrs = hrs + 12; //If its 00:15, it'll return 12 for hours
        else 
            adjHrs = hrs;      //Else it'll return the hours like normal
    }
    if (hrs >= 12){
        ampm = 'P';         //PM for hours greater than 12
        if (hrs == 12)
            adjHrs = 12;
        else
            adjHrs = hrs - 12;  // To display hours in 12 hour format
    }
    return adjHrs;
}
//******************************************
//      Function getOutput:                *
//returns the time in proper 12 hr format  *
//******************************************
void getOutput(int hrs, int mins, int adjHrs, char ampm){
    cout << setw(2);  //To set the width of each value and fill any blank spots with a 0.                 
    cout.fill('0'); // For ex. if we had 00:15, it would show as 0:15, but we make it show 00:15
    if (hrs >= 0 && hrs < 24 && mins > 0 && mins <= 60){  //Hours and minutes must be in range
        cout << hrs<<":"<<mins<<" = "<<adjHrs<<":"<<mins<<" ";
        if (ampm == 'A')
            cout << "AM\n";
        else 
            cout << "PM\n";
    }
    else 
        cout << hrs<<":"<<mins<<" is not a valid time\n";
}
//*********************************************
//     Function timeCNV2:                     *
//Asks user for current time and wait period. *
//  Then calculates time after waiting        *
//*********************************************
void timeCNV2(){
    unsigned short hrs, mins, waitTme;  //Current hours and minutes as well as the wait time in minutes
    unsigned short wtTmeHr, wtTmeMin, newTme;   //Wait time converted to hours and minutes and the newTme after waiting
    char choice, ampm;                  //Choice to repeat and whether it's AM or PM
    do{
        cout << "Enter hour:\n\n";
        cin >> hrs;
        cout << "Enter minutes:\n\n";
        cin >> mins;
        cout << "Enter A for AM, P for PM:\n\n";
        cin >> ampm;
        cout << "Enter waiting time:\n\n";
        cin >> waitTme;
        cout << "Current time = ";
        cout << setw(2);
        cout.fill('0');
        cout << hrs << ":" << mins << " ";
        if (ampm == 'A')
            cout << "AM\n";
        else 
            cout << "PM\n";
        //For the actual time calculations
        wtTmeHr = waitTme / 60;  //Get hours from wait time in minutes 
        wtTmeMin = waitTme % 60; //Get minutes as the remainder of the division
        if (hrs + wtTmeHr > 12 && ampm == 'A'){
            newTme = (hrs + wtTmeHr) - 12;
            ampm = 'P';           //To make sure I keep track of when time goes past 12
        }
        else if (hrs + wtTmeHr > 12 && ampm == 'P'){
            newTme = (hrs + wtTmeHr) - 12;
            ampm = 'A';
        }
        else
            newTme = hrs + wtTmeHr;
        if (mins + wtTmeMin > 59){
            newTme += 1;                 //Add an hour if its 60 or above
            mins = (mins + wtTmeMin) - 60; //Calculate the remaining minutes after the hour is added
        }
        else{
            mins = (mins + wtTmeMin);
        }
        cout << "Time after waiting period = ";
        cout << setw(2);
        cout.fill('0');
        cout << newTme << ":";
        cout << setw(2);
        cout.fill('0');
        cout << mins << " ";
        if (ampm == 'A')
            cout << "AM\n\n";
        else 
            cout << "PM\n\n";
        cout << "Again:\n";
        cin >> choice;
        if (choice == 'Y' || choice == 'y')
            cout << endl;
    }while(choice == 'Y' || choice == 'y');    
}
//***********************************************************************
//                  Function psntVal:                                   *
// Asks for the final amount, annual interest rate and years            *
// that the money will sit in the account and returns the present value *
// necessary to reach that final amount                                 *
//***********************************************************************
float psntVal(float finalVal,int numYrs,float intRte){
    float result;
    result = (finalVal / pow(1+intRte,numYrs));  // F / (1 + r) ^ n -> present value formula
    return result;
 }
//*****************************
//       Function getScre:    *
//Takes five scores as input  *
//ands tores in referenc var. *
//*****************************
void getScre(int & scr1, int & scr2, int & scr3, int & scr4, int & scr5){
    cout << "Input the 5 test scores.\n";
    cin >> scr1 >> scr2 >> scr3 >> scr4 >> scr5;
}
//*****************************************
//   Function fndLwst:                    *
//Takes 5 args and returns the lowest arg *
//*****************************************
int fndLwst(int scr1, int scr2, int scr3, int scr4, int scr5){
    int lowest;   //Lowest score will be stored Here
    lowest = scr1;//Starting point for comparisons
    if(scr2<scr1)
        lowest = scr2;
    if (scr3<scr2)
        lowest = scr3;
    if (scr4<scr3)
        lowest = scr4;
    if (scr5<scr4)
        lowest = scr5;
    //cout << lowest;
    return lowest;
}
//*********************************************
//        Function calcAvg:                   *
//Takes 5 test scores and calls fndLwst func. *
//Calculates the average of 4 reaming scores  *
//*********************************************
float calcAvg(int scr1, int scr2, int scr3, int scr4, int scr5){
    int total,   //Total of the 4 remaining scores
        dropped; //Dropped test score
    float avg;   //The avergae of the 4 scores
    dropped = fndLwst(scr1,scr2,scr3,scr4,scr5);
    total = scr1 + scr2 + scr3 + scr4 + scr5;
    total -= dropped;
    avg = total / 4.0f;
    return avg;
}