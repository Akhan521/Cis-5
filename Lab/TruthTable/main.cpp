/* 
 * File:   main.cpp
 * Author: Aamir
 * Created on January 14, 2021, 10:10 AM
 * Purpose:  Truth Table
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
    bool X,Y; //Boolean Statements represented in the table
    //Initialize Variables
    cout << "X Y !X !Y X&&Y X||Y X^Y (X^Y)^X (X^Y)^Y !(X&&Y) !X||!Y !(X||Y) !X&&!Y" << endl;
    // 1st Row of the table
    X=Y=true;
    cout << (X?'T':'F')<<" ";
    cout << (Y?'T':'F')<<"  ";
    cout << (!X?'T':'F')<<"  ";
    cout << (!Y?'T':'F')<<"   ";
    cout << (X&&Y?'T':'F')<<"    ";
    cout << (X||Y?'T':'F')<<"   ";
    cout << (X^Y?'T':'F')<<"     ";
    cout << ((X^Y)^X?'T':'F')<<"       ";
    cout << ((X^Y)^Y?'T':'F')<<"       ";
    cout << (!(X&&Y)?'T':'F')<<"       ";
    cout << (!X||!Y?'T':'F')<<"      ";
    cout << (!(X||Y)?'T':'F')<<"      ";
    cout << (!X&&!Y?'T':'F')<<"  ";
    cout << endl;
    // 2st Row of the table
    Y=false;
    cout << (X?'T':'F')<<" ";
    cout << (Y?'T':'F')<<"  ";
    cout << (!X?'T':'F')<<"  ";
    cout << (!Y?'T':'F')<<"   ";
    cout << (X&&Y?'T':'F')<<"    ";
    cout << (X||Y?'T':'F')<<"   ";
    cout << (X^Y?'T':'F')<<"     ";
    cout << ((X^Y)^X?'T':'F')<<"       ";
    cout << ((X^Y)^Y?'T':'F')<<"       ";
    cout << (!(X&&Y)?'T':'F')<<"       ";
    cout << (!X||!Y?'T':'F')<<"      ";
    cout << (!(X||Y)?'T':'F')<<"      ";
    cout << (!X&&!Y?'T':'F')<<"  ";
    cout << endl;
    //3rd Row of the table
    X=false;
    Y=true;
    cout << (X?'T':'F')<<" ";
    cout << (Y?'T':'F')<<"  ";
    cout << (!X?'T':'F')<<"  ";
    cout << (!Y?'T':'F')<<"   ";
    cout << (X&&Y?'T':'F')<<"    ";
    cout << (X||Y?'T':'F')<<"   ";
    cout << (X^Y?'T':'F')<<"     ";
    cout << ((X^Y)^X?'T':'F')<<"       ";
    cout << ((X^Y)^Y?'T':'F')<<"       ";
    cout << (!(X&&Y)?'T':'F')<<"       ";
    cout << (!X||!Y?'T':'F')<<"      ";
    cout << (!(X||Y)?'T':'F')<<"      ";
    cout << (!X&&!Y?'T':'F')<<"  ";
    cout << endl;
    //4th row of the table
    X=Y=false;
    cout << (X?'T':'F')<<" ";
    cout << (Y?'T':'F')<<"  ";
    cout << (!X?'T':'F')<<"  ";
    cout << (!Y?'T':'F')<<"   ";
    cout << (X&&Y?'T':'F')<<"    ";
    cout << (X||Y?'T':'F')<<"   ";
    cout << (X^Y?'T':'F')<<"     ";
    cout << ((X^Y)^X?'T':'F')<<"       ";
    cout << ((X^Y)^Y?'T':'F')<<"       ";
    cout << (!(X&&Y)?'T':'F')<<"       ";
    cout << (!X||!Y?'T':'F')<<"      ";
    cout << (!(X||Y)?'T':'F')<<"      ";
    cout << (!X&&!Y?'T':'F')<<"  ";
    cout << endl;
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}