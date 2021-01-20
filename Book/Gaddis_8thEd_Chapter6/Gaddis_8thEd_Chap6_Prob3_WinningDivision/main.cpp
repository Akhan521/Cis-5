/* 
 * File:   main.cpp
 * Author: Aamir 
 * Created on January 19, 2021, 5:45 PM
 * Purpose:  4 Division Sales Calcs.
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Definition
float getSales(string name){
    float slsFig;
    cout << "What was the quarterly sales figure of the " << name << " division: ";
    cin >> slsFig;
    while (slsFig < 0){
        cout << "Enter a value greater than $0.00: ";
        cin >> slsFig;
    }
    return slsFig;
}
void findHighest(float tot1, float tot2, float tot3, float tot4){
    if (tot1>tot2&&tot1>tot3&&tot1>tot4)
        cout << "Highest Grossing Division: Northeast Division";
    else if (tot2>tot1&&tot2>tot3&&tot2>tot4)
        cout << "Highest Grossing Division: Southeast Division";
    else if (tot3>tot1&&tot3>tot2&&tot3>tot4)
        cout << "Highest Grossing Division: Northwest Division";
    else if (tot4>tot1&&tot4>tot2&&tot4>tot3)
        cout << "Highest Grossing Division: Southwest Division";
}
//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float div1, //Northeast Division Sales Total 
          div2, //Southeast Division Sales Total
          div3, //Northwest Division Sales Total
          div4; //Southwest Division Sales Total
    //Initialize Variables
    div1 = getSales("Northeast");
    div2 = getSales("Southeast");
    div3 = getSales("Northwest");
    div4 = getSales("Southwest");
    //Map Inputs to Outputs -> Process
    findHighest(div1,div2,div3,div4);
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}