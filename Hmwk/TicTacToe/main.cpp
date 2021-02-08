/* 
 * File:   main.cpp
 * Author: Aamir
 * Created on Feb 2, 2021
 * Purpose:  Tic Tac Toe
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Math, Science, Universal, Conversions, High Dimensioned Arrays
const int COLS = 3; //Number of columns on the board
//Function Prototypes
void fillAry(char [][COLS],int);
void prntBrd(char [][COLS],int);
void markX(char [][COLS]);
void markO(char [][COLS]);
bool testWinP1(char [][COLS]);
bool testWinP2(char [][COLS]);
//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    const int ROWS = 3;
    char board[ROWS][COLS];
    bool win;
    //Initialize Variables
    fillAry(board,ROWS);
    prntBrd(board,ROWS);
    //Process or map Inputs to Outputs
    do{
        win = false;
        markX(board); //Player 1's Turn
        win=testWinP1(board);
        if(win==false){
            prntBrd(board,ROWS);
        }
        if(win==false){
            markO(board); //Player 2's Turn
            win=testWinP2(board);
        if(win==false){
            prntBrd(board,ROWS);
        }
        }
    }while(win==false);
    //Display Outputs
   
    //Exit the Program - Cleanup
    return 0;
}
void fillAry(char a[][COLS],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<COLS;j++){
            a[i][j] = '*';
        }
    }
}
void prntBrd(char a[][COLS],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<COLS;j++){
            if(j!=2)cout<<a[i][j]<<"|";
            else cout<<a[i][j];
            if(j%COLS==(COLS-1))cout<<endl;  
        }
        if(i!=2)cout<<"-|-|-"<<endl;
      
    }
}
void markX(char a[][COLS]){
    int i,j; //For what row and column they want to make a move in
    cout<<"Player 1 select location:\n";
    cin>> i >> j;
    a[i-1][j-1]='X';
}
void markO(char a[][COLS]){
    int i,j; //For what row and column they want to make a move in
    cout<<"Player 2 select location:\n";
    cin>> i >> j;
    a[i-1][j-1]='O';
}
bool testWinP1(char a[][COLS]){
    //Player 1 Wins
    if(a[0][0]=='X'&&a[0][1]=='X'&&a[0][2]=='X') {
        cout<< "Player 1 has won";
        return true;
    }
    else if(a[1][0]=='X'&&a[1][1]=='X'&&a[1][2]=='X') {
        cout<< "Player 1 has won";
        return true;
    }
    else if(a[2][0]=='X'&&a[2][1]=='X'&&a[2][2]=='X') {
        cout<< "Player 1 has won";
        return true;
    }
    else if(a[0][0]=='X'&&a[1][0]=='X'&&a[2][0]=='X') {
        cout<< "Player 1 has won";
        return true;
    }
    else if(a[0][1]=='X'&&a[1][1]=='X'&&a[2][1]=='X') {
        cout<< "Player 1 has won";
        return true;
    }
    else if(a[2][0]=='X'&&a[2][1]=='X'&&a[2][2]=='X') {
        cout<< "Player 1 has won";
        return true;
    }
    else if(a[0][0]=='X'&&a[1][1]=='X'&&a[2][2]=='X') {
        cout<< "Player 1 has won";
        return true;
    }
    else if(a[0][2]=='X'&&a[1][1]=='X'&&a[2][0]=='X') {
        cout<< "Player 1 has won";
        return true;
    }else 
        return false;
}
bool testWinP2(char a[][COLS]){
    //Player 2 Wins
    if(a[0][0]=='O'&&a[0][1]=='O'&&a[0][2]=='O') {
        cout<< "Player 2 has won";
        return true;
    }
    else if(a[1][0]=='O'&&a[1][1]=='O'&&a[1][2]=='O') {
        cout<< "Player 2 has won";
        return true;
    }
    else if(a[2][0]=='O'&&a[2][1]=='O'&&a[2][2]=='O') {
        cout<< "Player 2 has won";
        return true;
    }
    else if(a[0][0]=='X'&&a[1][0]=='X'&&a[2][0]=='X') {
        cout<< "Player 2 has won";
        return true;
    }
    else if(a[0][1]=='X'&&a[1][1]=='X'&&a[2][1]=='X') {
        cout<< "Player 2 has won";
        return true;
    }
    else if(a[2][0]=='X'&&a[2][1]=='X'&&a[2][2]=='X') {
        cout<< "Player 2 has won";
        return true;
    }
    else if(a[0][0]=='O'&&a[1][1]=='O'&&a[2][2]=='O') {
        cout<< "Player 2 has won";
        return true;
    }
    else if(a[0][2]=='O'&&a[1][1]=='O'&&a[2][0]=='O') {
        cout<< "Player 2 has won";
        return true;
    }else 
        return false;
}