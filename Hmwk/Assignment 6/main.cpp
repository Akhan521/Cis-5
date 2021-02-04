/* 
 * File:   main.cpp
 * Author: Aamir
 * Created on February 3, 2021, 6:30 PM
 * Purpose:  Assignment 6 with menu
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
const int COLS = 3; //Number of columns on the tic-tac-toe board
//Function Prototypes
void fillAry(char [][COLS],int);           //Fill Array with '*'
void prntBrd(char [][COLS],int);           //Display or print board
void markX(char [][COLS]);
void markO(char [][COLS]);
bool testWinP1(char [][COLS]);              //Test for P1 Win
bool testWinP2(char [][COLS]);              //Test for P2 Win
void askEmp(int [],float [],int [], int);   //To ask for hours and pay
void getgrs(float [],int [], float [], int);//Get gross pay of each employee
void dsply(int [], float [], int);          //Display the gross pay
bool binSrch(string [], int, string);       //Binary Searcher for strings
void markSrt(string [],int);                //Sorter for strings
void bublSrt(int [], int, int, int &);      //Bubble Sorter
void selSrt(int [], int, int, int &);       //Selection Sorter
//Execution Begins Here
int main(int argc, char** argv) {
    // Variable Declaration
    int choice; //Choice of the User
    //Display the Menu
    cout << "\t\tMenu For Assignment 3:\n";
    cout << "1. Min and Max in a List - Ga9EdC7P1" << endl;;
    cout << "2. Chips & Salsa Sales Report - Ga9EdC7P3" << endl;
    cout << "3. DMV Written Exam Checker - Ga9EdC7P10" << endl;
    cout << "4. Tic-Tac-Toe Game - Ga9EdC7P18" << endl;
    cout << "5. Employees & Gross Pay Calculator - Ga9EdC7P9" << endl;
    cout << "6. Ticket Winning Entry Linear Searcher - Ga9EdC8P2" << endl;
    cout << "7. Ticket Winning Entry Binary Searcher - Ga9EdC8P3" << endl;
    cout << "8. Binary Searcher for Names - Ga9EdC8P6" << endl;
    cout << "9. Bubble & Selection Sorter - Ga9EdC8P9" << endl;
    cout << "Choose an option #1-9: ";
    cin >> choice;
    cin.ignore(); // Bypass the newline character so all three names are accepted
    switch(choice){
        case 1:{
            //Declare Variable Data Types and Constants
            const int SIZE=10;
            int array[SIZE];
            int max, min;
            //Initialize Variables
            cout<<"Enter 10 integers:\n";
            for(int cnt=0;cnt<SIZE;cnt++){
                cin>>array[cnt];
            }
            //Starting point for comparisons
            max = min = array[0];
            //Process or map Inputs to Outputs
            for(int cnt=1;cnt<SIZE;cnt++){
                if(array[cnt]>max){
                    max = array[cnt];
                }
                if(array[cnt]<min){
                    min = array[cnt];
                }
            }
            //Display Outputs
            cout<< max<< " is the highest number.\n";
            cout<< min<< " is the lowest number.";            
           //Exit stage right or left!
            break;
        }
        case 2:{
            //Declare Variable Data Types and Constants
            const int FIVE = 5;
            string salsas[FIVE]={"mild","medium","sweet","hot","zesty"};
            float sales[FIVE];
            string highest, lowest; //To store best/worst selling salsa
            int max,min;            //For the min and max int values
            //Initialize Variables
            for(int cnt=0;cnt<FIVE;cnt++){
                cout<< "Enter the sales of "<<salsas[cnt]<< " salsa:$\n";
                cin>> sales[cnt];
            }
            //Starting point for comparisons
            max = min = sales[0];
            highest = lowest = salsas[0];
            //Process or map Inputs to Outputs
            for(int cnt=1;cnt<FIVE;cnt++){ //Find min and max and save salsa string accordingly
                if(sales[cnt]>=max){
                    max=sales[cnt];
                    highest = salsas[cnt];
                }
                if(sales[cnt]<=min){
                    min=sales[cnt];
                    lowest = salsas[cnt];
                }
            }
            //Calculating total
            float total = 0.0f;
            for(int cnt=0;cnt<FIVE;cnt++){ //Display the report
                total+=sales[cnt]; //Add each sale to the total
            }
            //Display Outputs
            cout<<fixed<<setprecision(2);
            cout<< "Type     Sales\n";
            cout<<salsas[0]<<setw(6)<<"$"<<sales[0]<<endl;
            cout<<salsas[1]<<setw(4)<<"$"<<sales[1]<<endl;
            cout<<salsas[2]<<setw(5)<<"$"<<sales[2]<<endl;
            cout<<salsas[3]<<setw(7)<<"$"<<sales[3]<<endl;
            cout<<salsas[4]<<setw(5)<<"$"<<sales[4]<<endl;
            cout<< "Total Sales was $"<<total<< endl;
            cout<< lowest<< " was the lowest selling product.\n";
            cout<< highest<< " was the highest selling product.";
            //Exit stage right or left!
            break;
        }
        case 3:{
            //Declare Variable Data Types and Constants
            const int QSTNS = 20; //Number of questions
            char test[QSTNS] = {'A','D','B','B','C',
                                'B','A','B','C','D',
                                'A','C','D','B','D',
                                'C','C','A','D','B'}; //Test Answers
            char answers[QSTNS];         //Holding student answers
            vector<int> wrongNum; //For holding the numbers that were wrong. I didn't size it because I dont know how many will be wrong.
            //Also, I was thinking of using the .size() function because it's very useful for when you don't know how many elements there are
            //Initialize Variables
            cout<<"Enter the student's test answers:\n";
            for(int cnt=0;cnt<QSTNS;cnt++){
                cin>>answers[cnt];
            }
            int correct = 0,
                incorrect = 0;
            //Process or map Inputs to Outputs
            for(int cnt=0;cnt<QSTNS;cnt++){
                if(answers[cnt]==test[cnt]){
                    correct++;
                }else {
                    incorrect++;
                    wrongNum.push_back(cnt+1); //To push the number that was wrong onto the vector
                }
            }
            //Display Outputs
            if(correct>=15) cout<< "The student passed.\n";
            else cout<< "The student failed.\n";
            cout<< "There were "<< correct<< " correct answers.\n";
            cout<< "There were "<< incorrect<< " incorrect answers.\n";
            cout<< "Incorrect questions:\n";
            for(int i=0;i<wrongNum.size();i++){
                cout<<wrongNum[i]<<endl;
            }
            //Exit stage right or left!
            break;
        }
        case 4:{
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
            //Exit stage right or left!
            break;
        }
        case 5:{
            //Declare Variable Data Types and Constants
            const int EMPS = 7; //# of employees
            int empId[EMPS]={5658845,4520125,7895122,8777541,8451277,1302850,7580489}; //Employee Ids of all 7 employees
            int hrs[EMPS];
            float payRte[EMPS];
            float grsPay[EMPS];
            //Initialize Variables
            askEmp(empId, payRte, hrs, EMPS); //Pass in 3 lists and ask employees for hrs and pay rate

            getgrs(payRte, hrs, grsPay, EMPS);//Calculates the gross pay for employees

            dsply(empId,grsPay,EMPS);         //Display the results
            //Exit stage right or left!
            break;
        }
        case 6:{
            //Declare Variable Data Types and Constants
            const int TKTS = 10; //10 Ticket Entry #
            int ltry[TKTS]={13579, 26791, 26792, 33445, 55555,
                            62483, 77777, 79422, 85647, 93121};
            int winner; //For the winning ticket #
            //Initialize Variables
            cout<< "Enter the winning number:\n";
            cin>> winner;
            bool win = false; //Whether they won or not
            for(int i=0;i<TKTS;i++){
                if(ltry[i]==winner){
                    cout<< "Congratulations you have won!";
                    win = true;
                }
            }
            if(win==false)cout<<"No winning numbers.";
            //Exit stage right or left!
            break;
        }
        case 7:{
           //Declare Variable Data Types and Constants
            const int TKTS = 10; //10 Ticket Entry #
            int ltry[TKTS]={13579, 26791, 26792, 33445, 55555,
                            62483, 77777, 79422, 85647, 93121};
            int winner; //For the winning ticket #
            //Initialize Variables
            cout<< "Enter the winning number:\n";
            cin>> winner;
            bool win = false; //Whether they won or not
            int low = 0, high = TKTS-1; //Highest and lowest value indexes
            do{
                int midPnt = (low+high)/2;
                if(ltry[midPnt]==winner){
                    cout<<"Congratulations you have won!";
                    win = true;
                }else if(ltry[midPnt]>winner){
                    high = midPnt - 1;
                }else{
                    low = midPnt + 1;
                }
            }while(low<=high&&!win);
            if(win==false) cout<< "No winning numbers.";
           //Exit stage right or left!
            break;
        }
        case 8:{
            //Declare Variable Data Types and Constants
            const int NUM_NAMES=20;
                string names[NUM_NAMES]={"Collins, Bill", "Smith, Bart", "Allen, Jim",
                                         "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
                                         "Taylor, Terri", "Johnson, Jill",
                                         "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
                                         "James, Jean", "Weaver, Jim", "Pore, Bob",
                                         "Rutherford, Greg", "Javens, Renee",
                                         "Harrison, Rose", "Setzer, Cathy",
                                         "Pike, Gordon", "Holland, Beth" };
                string name; //The name we want to find
            //Initialize Variables
            cout<<"Enter a name to search for:\n";
            getline(cin,name);
           // cout<< name<<endl;
            //Process or map Inputs to Outputs

            //Display Outputs
            markSrt(names,NUM_NAMES); //Sorting the list by last names
            if(binSrch(names,NUM_NAMES,name)) {
                cout<<"The name was found"; //Search for and display found/not found message
            }else cout<< "The name was not found";
            //Exit stage right or left!
            break;
        }
        case 9:{
            //Declare Variable Data Types and Constants
            int bubSwps;     //Number of buble sort swaps 
            int selSwps;     //Number of selection sort swaps
            int start, end;//Start and ends of the sort 
            const int SIZE = 40;
            int arr1 [SIZE]={
                    81,36,37,85,52,70,38,55,31,37,
                    27,58,32,40,99,79,92,31,32,64,
                    92,35,85,66,27,67,23,11,91,88,
                    17,18,71,49,13,82,68,82,23,12
            };
            int arr2 [SIZE]={
                    81,36,37,85,52,70,38,55,31,37,
                    27,58,32,40,99,79,92,31,32,64,
                    92,35,85,66,27,67,23,11,91,88,
                    17,18,71,49,13,82,68,82,23,12
            };


            //Initialize Variables
            cout<< "Enter the starting location to sort:\n";
            cin >> start;
            cout<< "Enter the ending location to sort:\n";
            cin >> end;
            //Process or map Inputs to Outputs
            bublSrt(arr1, start, end, bubSwps);
            selSrt(arr2, start, end, selSwps);
            cout<< "Selection Sort "<<selSwps<<endl;
            cout << "Bubble Sort "<<bubSwps;
            //Exit stage right or left!
            break;
        }
        default:
            cout << "Not an option." << endl;
    } //End of Switch Statement
    //Exit the Program - Cleanup
    return 0;
}
//All used in Problem 4 Tic-Tac-Toe
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
//All used for Problem 5 - Employee Gross Wages
void askEmp(int a[], float b[], int c[], int size){
    for(int i=0;i<size;i++){
        cout<<"Enter employee "<< a[i] << "'s pay rate:\n";
        cin >> b[i]; //Store the pay rate in parallel array
        cout<<"Enter employee "<< a[i] << "'s hours work:\n";
        cin >> c[i];    //Store the hours in a parallel array
    }
}
void getgrs(float a[], int b[], float c[], int size){
    for(int i=0;i<size;i++){
        c[i] = a[i]*b[i];
    }
}
void dsply(int a[], float b[], int size){
    for(int i=0;i<size;i++){
        cout<<"Employee "<<a[i]<< "'s gross pay $"<< setprecision(2)<<fixed<<showpoint<<b[i]<<endl;
    }
}
//All used for Problem 8 - Binary Searcher for Names
bool binSrch(string names[], int size, string name){
    int low = 0, high = size - 1, midPnt;
    while(low<=high){
        midPnt = (low+high)/2;
       // cout<< low << " " << midPnt << " "<<high<<endl;
        if(names[midPnt]==name) {
            return true;
        }else if(names[midPnt]>name){
            high = midPnt - 1;
        }else{
            low = midPnt + 1;
        }
        //cout<< low << " " << midPnt << " "<<high<<endl;
    }
    return false; //If the name is not found by then
}
void markSrt(string a[],int n){
    for(int i=0;i<n-1;i++){      //Loop for each position in List
        for(int j=i+1;j<n;j++){  //Loop to swap with first in List
            if(a[i]>a[j]){       //Put the smallest at top of List
                string temp;
                temp = a[i]; //Swapping
                a[i]=a[j];   //Swapping
                a[j]=temp;   //Swapping
            }
        }
    }
}
//All used for Problem 9 - Bubble/Selection Sort
void bublSrt(int a[], int start, int end, int &swpCnt){
    bool swap;
    swpCnt=0;
    do{
        swap=false;
        for(int i=start;i<end-1;i++){    //Loop to swap with first in List
            if(a[i]>a[i+1]){             //Put the smallest at top of List
                a[i]=a[i]^a[i+1];        //In place Swap
                a[i+1]=a[i]^a[i+1];      //In place Swap
                a[i]=a[i]^a[i+1];        //In place Swap
                swap=true;
                swpCnt++;          //Keep track of how many times a swap occurs
            }
        }
    }while(swap);
}
void selSrt(int a[], int start, int end, int &swpCnt){
    swpCnt = 0;
    for(int i=start;i<end-1;i++){      //Loop for each position in List
        int mindex=i;            //minimum index, index of the smallest value at that point
        for(int j=i+1;j<end;j++){  //Loop to swap with first in List
            if(a[j]<a[mindex]){  //Put the smallest at top of List
                mindex=j;
            }
        }
        int temp=a[i];
        a[i]=a[mindex];
        a[mindex]=temp;
        swpCnt++;
    }
}