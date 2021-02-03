/* 
 * File:   main.cpp
 * Author: Aamir
 * Created on February 2, 2020, 4:20 PM
 * Purpose:  Municipal Bond Savings V6 Using Dr.Mark's Savings Program
 *                        Using MVC w/ 2D Array
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Formatting Library
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions
const float CNVDCML=100.0f;//Conversion to Decimal from Percent
const int COLS = 4;        //4 columns in 2D Array
//Function Prototypes
void savings(float [][COLS],int,float &,float &,float &,float &);
void display(float [][COLS],int,float,float,float,float);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    float intRate,//Interest Rate %
          salary, //Salary in $'s
          yrDep,
          yrDpPc;//Yearly Percent Deposit
    const int NYEARS=31;  //Number of Years, remember array size + 1
    float balance[NYEARS][COLS];//Savings Balance $'s  2D Parallel Array
    
    //Initialize Variables
    //The 2 Dimension balance Array
    //Column 1 index 0 represents the year
    //Column 2 index 1 represents the date year
    //Column 3 index 2 represents the balance
    //Column 4 index 3 represents the interest
    balance[0][2]=0.0f;     //Savings in $'s
    balance[0][0]=0;        //Initialize counter year to 0
    balance[0][1]=2020;     //Initialize actual date year to now
    intRate=5;              //Yearly Interest Rate
    salary=100000.0f;       //$100,000 per year
    yrDpPc=0.1f;            //Percentage of Salary to deposit
    
    //Process or map Inputs to Outputs
    savings(balance,NYEARS,intRate,yrDpPc,salary,yrDep);
    
    //Display the Heading
    display(balance,NYEARS,intRate,yrDpPc,salary,yrDep);
    
    //Exit stage right!
    return 0;
}
void display(float balance[][COLS],int NYEARS,float intRate,float yrDpPc,float salary, float yrDep){
    //Display the Heading
    float sav2Rtr=salary/intRate;
    yrDep=yrDpPc*salary;
    balance[0][3]=balance[0][2]*intRate; //Balance * intRate = Interest
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"With a Yearly Salary of $"<<salary
            <<" and an investment rate of "<<intRate*CNVDCML<<"%,"<<endl;
    cout<<"you will need a savings of $"<<sav2Rtr
            <<" at Retirement."<<endl;
    cout<<"Is "<<yrDpPc*CNVDCML<<"% = $"<<yrDep<<"/year enough for "
            <<NYEARS<<" years to reach the goal?"<<endl;
    cout<<"Year  Year       Balance      Interest       Deposit"<<endl;
    cout<<fixed<<setprecision(0)<<noshowpoint;
    cout<<setw(4)<<balance[0][0]<<setw(6)<<balance[0][1]
            <<setw(14)<<fixed<<setprecision(2)<<balance[0][2]<<setw(14)
            <<balance[0][3]<<setw(14)<<yrDep<<endl;
    //Loop and Display for all years
    for(int cnt=1;cnt<NYEARS;cnt++){
        balance[cnt][3]=balance[cnt][2]*intRate;
        cout<<fixed<<setprecision(0)<<noshowpoint;
        cout<<setw(4)<<balance[cnt][0]<<setw(6)<<balance[cnt][1]
            <<setw(14)<<fixed<<setprecision(2)<<balance[cnt][2]<<setw(14)
            <<balance[cnt][3]<<setw(14)<<yrDep<<endl;
    }
    //Did you reach the goal
    if(balance[NYEARS-1][2]>sav2Rtr)cout<<"Yes you reached your retirement goal"<<endl;
    else cout<<"You failed to reach your retirement goal"<<endl;
}
void savings(float balance[][COLS],int NYEARS,float &intRate, float &yrDpPc,float &salary,float &yrDep){
    intRate/=CNVDCML;
    yrDep=yrDpPc*salary;
    //Loop and Calculate for all years
    for(int cnt=1;cnt<NYEARS;cnt++){
        balance[cnt][0]=balance[cnt-1][0]+1; //Year index from 0
        balance[cnt][1]=balance[cnt-1][1]+1;    //Actual Year counter from 2020
        balance[cnt][2]=balance[cnt-1][2]*(1+intRate); //Current value = previous value * intRate
        balance[cnt][2]+=yrDep;//End of Year
    }
}