/* 
 * File:   main.cpp
 * Author: Aamir 
 * Created on January 14, 2021, 7:50 PM
 * Purpose:  Rock Paper Scissors Game
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
    char pl1move, pl2move; //Player 1 & 2 Moves 
    //Initialize Variables
    cout << "Rock Paper Scissors Game\n";
    cout << "Input Player 1 and Player 2 Choices\n";
    cin >> pl1move >> pl2move;
    //Map Inputs to Outputs -> Process
    if ((pl1move == 'P' || pl1move == 'p') && (pl2move == 'R' || pl2move == 'r'))      // P R
        cout << "Paper covers rock.";
    else if ((pl1move == 'R' || pl1move == 'r') && (pl2move == 'P' || pl2move == 'p')) // R P
        cout << "Paper covers rock.";
    else if ((pl1move == 'R' || pl1move == 'r') && (pl2move == 'S' || pl2move == 's')) // R S
        cout << "Rock breaks scissors.";
    else if ((pl1move == 'S' || pl1move == 's') && (pl2move == 'R' || pl2move == 'r')) // S R
        cout << "Rock breaks scissors.";
    else if ((pl1move == 'P' || pl1move == 'p') && (pl2move == 'S' || pl2move == 's')) // P S
        cout << "Scissors cuts paper.";
    else if ((pl1move == 'S' || pl1move == 's') && (pl2move == 'P' || pl2move == 'p')) // S P
        cout << "Scissors cuts paper.";
    else if ((pl1move == 'P' || pl1move == 'p') && (pl2move == 'P' || pl2move == 'p')) // P P
        cout << "Nobody wins.";
    else if ((pl1move == 'S' || pl1move == 's') && (pl2move == 'S' || pl2move == 's')) // S S
        cout << "Nobody wins.";
    else if ((pl1move == 'R' || pl1move == 'r') && (pl2move == 'R' || pl2move == 'r')) // R R
        cout << "Nobody wins.";
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}