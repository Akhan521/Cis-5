/* 
 * File:   main.cpp
 * Author: Aamir
 * Created on February 6, 2021, 1:00 PM
 * Purpose: Searching and 5 player function-> LCR V.6
 * Added searching at the end and another function for 5 players
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Formatting Library
#include <cstdlib>   //Rand # Generator
#include <ctime>     //Time set to seed
#include <fstream>   //File Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes
void threeTrn(int [], bool &, int &);
void fiveTrn(int [], bool &, int &);
void markSrt(int [], int);
void cpyLst(int [], int [], int);
void rnking3(int [], int [], int);
void rnking5(int [], int [], int);
bool linSrch(int [], int, int);
//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0))); //Set Random # Generator
    //Declare Variables
    fstream in;
    fstream out;
    char fn[] = "Num_Plyrs.dat";    //Character Array for filename Num_Plyrs
    string flnme = "Game_Stats.dat";//Will hold the winner and other stuff
    int numPlyrs;               //Number of players
    //Validate File Input
    in.open(fn,ios::in);
    while(in>>numPlyrs){};      //Empty while loop to read in the file content
    (numPlyrs==3||numPlyrs==5?numPlyrs:0); //Accepts 3 players or 5 and nothing else
    out.open(flnme,ios::out);
    //Display Outputs
    if(numPlyrs==3){ //play if there are 3 players
        const int PLYRS = 3;
        int tknCntr[PLYRS]={3,3,3}; //Initialize all elements with 3 tokens
        int plcings[PLYRS]={};      //Sorted Placings after each round (Copy of the Prev. list)
        bool win = false;  //Create a condition for the do-while
        int mean; //It has to be a whole number because you can't have half a dice or the like
        do{
        threeTrn(tknCntr, win, mean);
        cpyLst(tknCntr,plcings,PLYRS);
        markSrt(plcings,PLYRS);
        cout<<"Ranking after round:\n";
        rnking3(plcings,tknCntr,PLYRS);
        cout<<endl;
        }while(win==false);//Loop until a win occurs
        //Send mean to file
        out<< "The mean value rolled was around = "<< mean<<endl;
        if(linSrch(tknCntr, PLYRS, 3)){
            cout<< "Three was found in the list of token counters.\n";
            out << "Three was found in the list of token counters.\n";
        }else{ 
            cout<< "Three was not found in the list.\n";
            out << "Three was not found in the list.\n";
        }
        //Sending Info to file
        (tknCntr[0]>tknCntr[1]&&tknCntr[0]>tknCntr[2]?out<<"Player 1 won with "<<tknCntr[0]<< " token/s!":
         tknCntr[1]>tknCntr[0]&&tknCntr[1]>tknCntr[2]?out<<"Player 2 won with "<<tknCntr[1]<< " token/s!":
         out<<"Player 3 won with "<<tknCntr[2]<<" token/s!");
        //Displaying Winner using Nested Ternary Operator
        (tknCntr[0]>tknCntr[1]&&tknCntr[0]>tknCntr[2]?cout<<"Player 1 won with "<<tknCntr[0]<< " token/s!":
         tknCntr[1]>tknCntr[0]&&tknCntr[1]>tknCntr[2]?cout<<"Player 2 won with "<<tknCntr[1]<< " token/s!":
         cout<<"Player 3 won with "<<tknCntr[2]<<" token/s!");
    }else if(numPlyrs==5){ //Play with 5 players
        const int PLYRS = 5;
        int tknCntr[PLYRS]={3,3,3,3,3}; //Initialize all elements with 3 tokens
        int plcings[PLYRS]={};          //Sorted Placings after each round (Copy of the Prev. list)
        bool win = false;  //Create a condition for the do-while
        int mean; //It has to be a whole number because you can't have half a dice or the like
        do{
        fiveTrn(tknCntr, win, mean);
        cpyLst(tknCntr,plcings,PLYRS);
        markSrt(plcings,PLYRS);
        cout<<"Ranking after round:\n";
        rnking5(plcings,tknCntr,PLYRS);
        cout<<endl;
        }while(win==false);//Loop until a win occurs
        //Send mean to file
        out<< "The mean value rolled was around = "<< mean<<endl;
        if(linSrch(tknCntr, PLYRS, 5)){
            cout<< "Five was found in the list of token counters.\n";
            out << "Five was found in the list of token counters.\n";
        }else{ 
            cout<< "Five was not found in the list.\n";
            out << "Five was not found in the list.\n";
        }
        //Sending Info to file
        (tknCntr[0]>0&&tknCntr[1]==0&&tknCntr[2]==0&&tknCntr[3]==0&&tknCntr[4]==0?out<<"Player 1 won with "<<tknCntr[0]<< " token/s!":
         tknCntr[1]>0&&tknCntr[0]==0&&tknCntr[2]==0&&tknCntr[3]==0&&tknCntr[4]==0?out<<"Player 2 won with "<<tknCntr[1]<< " token/s!":
         tknCntr[2]>0&&tknCntr[0]==0&&tknCntr[1]==0&&tknCntr[3]==0&&tknCntr[4]==0?out<<"Player 3 won with "<<tknCntr[2]<< " token/s!":
         tknCntr[3]>0&&tknCntr[0]==0&&tknCntr[1]==0&&tknCntr[2]==0&&tknCntr[4]==0?out<<"Player 4 won with "<<tknCntr[3]<< " token/s!":
         out<<"Player 5 won with "<<tknCntr[4]<< " token/s!");
        //Displaying Winner using Nested Ternary Operator
        (tknCntr[0]>0&&tknCntr[1]==0&&tknCntr[2]==0&&tknCntr[3]==0&&tknCntr[4]==0?cout<<"Player 1 won with "<<tknCntr[0]<< " token/s!":
         tknCntr[1]>0&&tknCntr[0]==0&&tknCntr[2]==0&&tknCntr[3]==0&&tknCntr[4]==0?cout<<"Player 2 won with "<<tknCntr[1]<< " token/s!":
         tknCntr[2]>0&&tknCntr[0]==0&&tknCntr[1]==0&&tknCntr[3]==0&&tknCntr[4]==0?cout<<"Player 3 won with "<<tknCntr[2]<< " token/s!":
         tknCntr[3]>0&&tknCntr[0]==0&&tknCntr[1]==0&&tknCntr[2]==0&&tknCntr[4]==0?cout<<"Player 4 won with "<<tknCntr[3]<< " token/s!":
         cout<<"Player 5 won with "<<tknCntr[4]<< " token/s!");
    }
    else cout<< "You need either 3 or 5 Players.";
    //Exit the Program - Cleanup
    in.close();
    out.close();
    return 0;
}
void threeTrn(int tknCntr[], bool &win, int &mean){
    int tknLim=3,numDice=0,sum=0; //Token limit is 3 for when we check if we are above/below limit
    char die; 
    mean = 0;
    if(tknCntr[0]!=0){
    //Player 1's Turn
    cout << "Player 1's Turn: Press Enter to start rolling...";
    cin.get();
    if(tknCntr[0]<tknLim){ //for when the counter goes below 3
        for (int count=1;count<=tknCntr[0];count++){ //Either 2 or 1 rolls based on the # of tokens you have
            die = rand()%6+1; //Range: [1,6]
            sum+=die;
            numDice++;
            cout << "Roll "<<count<< " = " <<static_cast<int>(die)<<endl;
            if (die==4){tknCntr[0]--;tknCntr[1]++;}      //Token is given to the left or Player 2
            else if (die==5) {tknCntr[0]--;}          //Token is placed in the center and is lost for good
            else if (die==6){tknCntr[0]--;tknCntr[2]++;}  //Token is given to the right or Player 3 
        }
    }else{ //for when the counter is 3 or more
        for (int count=1;count<=tknLim;count++){ //3 rolls for having 3 or more tokens
            die = rand()%6+1; //Range: [1,6]
            sum+=die;
            numDice++;
            cout << "Roll "<<count<< " = " <<static_cast<int>(die)<<endl;
            if (die==4){tknCntr[0]--;tknCntr[1]++;}      //Token is given to the left or Player 2
            else if (die==5) {tknCntr[0]--;}          //Token is placed in the center and is lost for good
            else if (die==6){tknCntr[0]--;tknCntr[2]++;}  //Token is given to the right or Player 3 
        }
    }
    cout << "Player 1 Current Token Count = " << tknCntr[0]<<endl;
    cout << "Player 2 Current Token Count = " << tknCntr[1]<<endl;
    cout << "Player 3 Current Token Count = " << tknCntr[2]<<endl<<endl;
    if(tknCntr[0]>0&&tknCntr[1]==0&&tknCntr[2]==0){win = true;}
    else if(tknCntr[1]>0&&tknCntr[0]==0&&tknCntr[2]==0){win = true;}
    else if(tknCntr[2]>0&&tknCntr[0]==0&&tknCntr[1]==0){win = true;}
    }
    if(tknCntr[1]!=0){
    if(win==false){
    //Player 2's Turn
    cout << "Player 2's Turn: Press Enter to start rolling...";
    cin.get();
    if(tknCntr[1]<tknLim){ //for when the counter goes below 3
        for (int count=1;count<=tknCntr[1];count++){ //Either 2 or 1 rolls based on the # of tokens you have
            die = rand()%6+1; //Range: [1,6]
            sum+=die;
            numDice++;
            cout << "Roll "<<count<< " = " <<static_cast<int>(die)<<endl;
            switch(die){
                case 4:tknCntr[1]--;tknCntr[2]++;break; //Token is given to the left or Player 3
                case 5:tknCntr[1]--;break;              //Token is placed in the center and is lost for good
                case 6:tknCntr[1]--;tknCntr[0]++;break; //Token is given to the right or Player 1
            }
            }
    }else{ //for when the counter is 3 or more
        for (int count=1;count<=tknLim;count++){ //3 rolls for having 3 or more tokens
            die = rand()%6+1; //Range: [1,6]
            sum+=die;
            numDice++;
            cout << "Roll "<<count<< " = " <<static_cast<int>(die)<<endl;
            switch(die){
                case 4:tknCntr[1]--;tknCntr[2]++;break; //Token is given to the left or Player 3
                case 5:tknCntr[1]--;break;              //Token is placed in the center and is lost for good
                case 6:tknCntr[1]--;tknCntr[0]++;break; //Token is given to the right or Player 1
            }
        }
    }
    cout << "Player 1 Current Token Count = " << tknCntr[0]<<endl;
    cout << "Player 2 Current Token Count = " << tknCntr[1]<<endl;
    cout << "Player 3 Current Token Count = " << tknCntr[2]<<endl<<endl;
    if(tknCntr[0]>0&&tknCntr[1]==0&&tknCntr[2]==0){win = true;}
    else if(tknCntr[1]>0&&tknCntr[0]==0&&tknCntr[2]==0){win = true;}
    else if(tknCntr[2]>0&&tknCntr[0]==0&&tknCntr[1]==0){win = true;}
    }
    }
    if(tknCntr[2]!=0){
    if(win==false){
    //Player 3's Turn
    cout << "Player 3's Turn: Press Enter to start rolling...";
    cin.get();
    if(tknCntr[2]<tknLim){ //for when the counter goes below 3
        for (int count=1;count<=tknCntr[2];count++){ //Either 2 or 1 rolls based on the # of tokens you have
            die = rand()%6+1; //Range: [1,6]
            sum+=die;
            numDice++;
            cout << "Roll "<<count<< " = " <<static_cast<int>(die)<<endl;
            switch(die){
                case 4:tknCntr[2]--;tknCntr[0]++;break; //Token is given to the left or Player 1
                case 5:tknCntr[2]--;break;              //Token is placed in the center and is lost for good
                case 6:tknCntr[2]--;tknCntr[1]++;break; //Token is given to the right or Player 2 
            }
        }
    }else{ //for when the counter is 3 or more
        for (int count=1;count<=tknLim;count++){ //3 rolls for having 3 or more tokens
            die = rand()%6+1; //Range: [1,6]
            sum+=die;
            numDice++;
            cout << "Roll "<<count<< " = " << static_cast<int>(die)<<endl;
            switch(die){
                case 4:tknCntr[2]--;tknCntr[0]++;break;  //Token is given to the left or Player 1
                case 5:tknCntr[2]--;break;               //Token is placed in the center and is lost for good
                case 6:tknCntr[2]--;tknCntr[1]++;break;  //Token is given to the right or Player 2 
            }
        }
        }
    cout << "Player 1 Current Token Count = " << tknCntr[0]<<endl;
    cout << "Player 2 Current Token Count = " << tknCntr[1]<<endl;
    cout << "Player 3 Current Token Count = " << tknCntr[2]<<endl<<endl;
    if(tknCntr[0]>0&&tknCntr[1]==0&&tknCntr[2]==0){win = true;}
    else if(tknCntr[1]>0&&tknCntr[0]==0&&tknCntr[2]==0){win = true;}
    else if(tknCntr[2]>0&&tknCntr[0]==0&&tknCntr[1]==0){win = true;}
    }
    }
    mean = (sum+.5)/numDice; //Round up if the value is .5 off, so the rest is truncated
    cout<< "The mean value rolled was around = "<< mean<<endl;
}
void fiveTrn(int tknCntr[], bool &win, int &mean){
    int tknLim=3,numDice=0,sum=0; //Token limit is 3 for when we check if we are above/below limit
    char die; 
    mean = 0;
    if(tknCntr[0]!=0){
    //Player 1's Turn
    cout << "Player 1's Turn: Press Enter to start rolling...";
    cin.get();
    if(tknCntr[0]<tknLim){ //for when the counter goes below 3
        for(int count=1;count<=tknCntr[0];count++){ //Either 2 or 1 rolls based on the # of tokens you have
            die = rand()%6+1; //Range: [1,6]
            cout << "Roll "<<count<< " = " <<static_cast<int>(die)<<endl;
            sum+=die;
            numDice++;
            if (die==4){tknCntr[0]--;tknCntr[1]++;}      //Token is given to the left or Player 2
            else if (die==5) {tknCntr[0]--;}             //Token is placed in the center and is lost for good
            else if (die==6){tknCntr[0]--;tknCntr[4]++;} //Token is given to the right or Player 5 
        }
    }else{//for when the counter is 3 or more
        for(int count=1;count<=tknLim;count++){ //3 rolls for having 3 or more tokens
            die = rand()%6+1; //Range: [1,6]
            cout << "Roll "<<count<< " = " <<static_cast<int>(die)<<endl;
            sum+=die;
            numDice++;
            if (die==4){tknCntr[0]--;tknCntr[1]++;}      //Token is given to the left or Player 2
            else if (die==5) {tknCntr[0]--;}             //Token is placed in the center and is lost for good
            else if (die==6){tknCntr[0]--;tknCntr[4]++;} //Token is given to the right or Player 5 
        }
    }
    cout << "Player 1 Current Token Count = " << tknCntr[0]<<endl;
    cout << "Player 2 Current Token Count = " << tknCntr[1]<<endl;
    cout << "Player 3 Current Token Count = " << tknCntr[2]<<endl;
    cout << "Player 4 Current Token Count = " << tknCntr[3]<<endl;
    cout << "Player 5 Current Token Count = " << tknCntr[4]<<endl<<endl;
    if(tknCntr[0]>0&&tknCntr[1]==0&&tknCntr[2]==0&&tknCntr[3]==0&&tknCntr[4]==0){win = true;}
    else if(tknCntr[1]>0&&tknCntr[0]==0&&tknCntr[2]==0&&tknCntr[3]==0&&tknCntr[4]==0){win = true;}
    else if(tknCntr[2]>0&&tknCntr[0]==0&&tknCntr[1]==0&&tknCntr[3]==0&&tknCntr[4]==0){win = true;}
    else if(tknCntr[3]>0&&tknCntr[0]==0&&tknCntr[1]==0&&tknCntr[2]==0&&tknCntr[4]==0){win = true;}
    else if(tknCntr[4]>0&&tknCntr[0]==0&&tknCntr[1]==0&&tknCntr[2]==0&&tknCntr[3]==0){win = true;}
    }
    if(win==false){
    if(tknCntr[1]!=0){
    //Player 2's Turn
    cout << "Player 2's Turn: Press Enter to start rolling...";
    cin.get();
    if(tknCntr[1]<tknLim){ //for when the counter goes below 3
        for(int count=1;count<=tknCntr[1];count++){ //Either 2 or 1 rolls based on the # of tokens you have
            die = rand()%6+1; //Range: [1,6]
            cout << "Roll "<<count<< " = " <<static_cast<int>(die)<<endl;
            sum+=die;
            numDice++;
            switch(die){
                case 4:tknCntr[1]--;tknCntr[2]++;break; //Token is given to the left or Player 3
                case 5:tknCntr[1]--;break;              //Token is placed in the center and is lost for good
                case 6:tknCntr[1]--;tknCntr[0]++;break; //Token is given to the right or Player 1
            }
            }
    }else{//for when the counter is 3 or more
        for(int count=1;count<=tknLim;count++){ //3 rolls for having 3 or more tokens
            die = rand()%6+1; //Range: [1,6]
            cout << "Roll "<<count<< " = " <<static_cast<int>(die)<<endl;
            sum+=die;
            numDice++;
            switch(die){
                case 4:tknCntr[1]--;tknCntr[2]++;break; //Token is given to the left or Player 3
                case 5:tknCntr[1]--;break;              //Token is placed in the center and is lost for good
                case 6:tknCntr[1]--;tknCntr[0]++;break; //Token is given to the right or Player 1
            }
        }
    }
    cout << "Player 1 Current Token Count = " << tknCntr[0]<<endl;
    cout << "Player 2 Current Token Count = " << tknCntr[1]<<endl;
    cout << "Player 3 Current Token Count = " << tknCntr[2]<<endl;
    cout << "Player 4 Current Token Count = " << tknCntr[3]<<endl;
    cout << "Player 5 Current Token Count = " << tknCntr[4]<<endl<<endl;
    if(tknCntr[0]>0&&tknCntr[1]==0&&tknCntr[2]==0&&tknCntr[3]==0&&tknCntr[4]==0){win = true;}
    else if(tknCntr[1]>0&&tknCntr[0]==0&&tknCntr[2]==0&&tknCntr[3]==0&&tknCntr[4]==0){win = true;}
    else if(tknCntr[2]>0&&tknCntr[0]==0&&tknCntr[1]==0&&tknCntr[3]==0&&tknCntr[4]==0){win = true;}
    else if(tknCntr[3]>0&&tknCntr[0]==0&&tknCntr[1]==0&&tknCntr[2]==0&&tknCntr[4]==0){win = true;}
    else if(tknCntr[4]>0&&tknCntr[0]==0&&tknCntr[1]==0&&tknCntr[2]==0&&tknCntr[3]==0){win = true;}
    }
    }
    if(win==false){
    if(tknCntr[2]!=0){
    //Player 3's Turn
    cout << "Player 3's Turn: Press Enter to start rolling...";
    cin.get();
    if(tknCntr[2]<tknLim){ //for when the counter goes below 3
        for(int count=1;count<=tknCntr[2];count++){ //Either 2 or 1 rolls based on the # of tokens you have
            die = rand()%6+1; //Range: [1,6]
            cout << "Roll "<<count<< " = " <<static_cast<int>(die)<<endl;
            sum+=die;
            numDice++;
            switch(die){
                case 4:tknCntr[2]--;tknCntr[3]++;break; //Token is given to the left or Player 4
                case 5:tknCntr[2]--;break;              //Token is placed in the center and is lost for good
                case 6:tknCntr[2]--;tknCntr[1]++;break; //Token is given to the right or Player 2 
            }
        }
    }else{//for when the counter is 3 or more
        for(int count=1;count<=tknLim;count++){ //3 rolls for having 3 or more tokens
            die = rand()%6+1; //Range: [1,6]
            cout << "Roll "<<count<< " = " << static_cast<int>(die)<<endl;
            sum+=die;
            numDice++;
            switch(die){
                case 4:tknCntr[2]--;tknCntr[3]++;break;  //Token is given to the left or Player 4
                case 5:tknCntr[2]--;break;               //Token is placed in the center and is lost for good
                case 6:tknCntr[2]--;tknCntr[1]++;break;  //Token is given to the right or Player 2 
            }
        }
        }
    cout << "Player 1 Current Token Count = " << tknCntr[0]<<endl;
    cout << "Player 2 Current Token Count = " << tknCntr[1]<<endl;
    cout << "Player 3 Current Token Count = " << tknCntr[2]<<endl;
    cout << "Player 4 Current Token Count = " << tknCntr[3]<<endl;
    cout << "Player 5 Current Token Count = " << tknCntr[4]<<endl<<endl;
    if(tknCntr[0]>0&&tknCntr[1]==0&&tknCntr[2]==0&&tknCntr[3]==0&&tknCntr[4]==0){win = true;}
    else if(tknCntr[1]>0&&tknCntr[0]==0&&tknCntr[2]==0&&tknCntr[3]==0&&tknCntr[4]==0){win = true;}
    else if(tknCntr[2]>0&&tknCntr[0]==0&&tknCntr[1]==0&&tknCntr[3]==0&&tknCntr[4]==0){win = true;}
    else if(tknCntr[3]>0&&tknCntr[0]==0&&tknCntr[1]==0&&tknCntr[2]==0&&tknCntr[4]==0){win = true;}
    else if(tknCntr[4]>0&&tknCntr[0]==0&&tknCntr[1]==0&&tknCntr[2]==0&&tknCntr[3]==0){win = true;}
    }
    }
    if(win==false){
    if(tknCntr[3]!=0){
    //Player 4's Turn
    cout << "Player 4's Turn: Press Enter to start rolling...";
    cin.get();
    if(tknCntr[3]<tknLim){ //for when the counter goes below 3
        for(int count=1;count<=tknCntr[3];count++){ //Either 2 or 1 rolls based on the # of tokens you have
            die = rand()%6+1; //Range: [1,6]
            cout << "Roll "<<count<< " = " <<static_cast<int>(die)<<endl;
            sum+=die;
            numDice++;
            switch(die){
                case 4:tknCntr[3]--;tknCntr[4]++;break; //Token is given to the left or Player 5
                case 5:tknCntr[3]--;break;              //Token is placed in the center and is lost for good
                case 6:tknCntr[3]--;tknCntr[2]++;break; //Token is given to the right or Player 3 
            }
        }
    }else{//for when the counter is 3 or more
        for(int count=1;count<=tknLim;count++){ //3 rolls for having 3 or more tokens
            die = rand()%6+1; //Range: [1,6]
            cout << "Roll "<<count<< " = " << static_cast<int>(die)<<endl;
            sum+=die;
            numDice++;
            switch(die){
                case 4:tknCntr[3]--;tknCntr[4]++;break;  //Token is given to the left or Player 5
                case 5:tknCntr[3]--;break;               //Token is placed in the center and is lost for good
                case 6:tknCntr[3]--;tknCntr[2]++;break;  //Token is given to the right or Player 3 
            }
        }
        }
    cout << "Player 1 Current Token Count = " << tknCntr[0]<<endl;
    cout << "Player 2 Current Token Count = " << tknCntr[1]<<endl;
    cout << "Player 3 Current Token Count = " << tknCntr[2]<<endl;
    cout << "Player 4 Current Token Count = " << tknCntr[3]<<endl;
    cout << "Player 5 Current Token Count = " << tknCntr[4]<<endl<<endl;
    if(tknCntr[0]>0&&tknCntr[1]==0&&tknCntr[2]==0&&tknCntr[3]==0&&tknCntr[4]==0){win = true;}
    else if(tknCntr[1]>0&&tknCntr[0]==0&&tknCntr[2]==0&&tknCntr[3]==0&&tknCntr[4]==0){win = true;}
    else if(tknCntr[2]>0&&tknCntr[0]==0&&tknCntr[1]==0&&tknCntr[3]==0&&tknCntr[4]==0){win = true;}
    else if(tknCntr[3]>0&&tknCntr[0]==0&&tknCntr[1]==0&&tknCntr[2]==0&&tknCntr[4]==0){win = true;}
    else if(tknCntr[4]>0&&tknCntr[0]==0&&tknCntr[1]==0&&tknCntr[2]==0&&tknCntr[3]==0){win = true;}
    }
    }
    if(win==false){
    if(tknCntr[4]!=0){
    //Player 5's Turn
    cout << "Player 5's Turn: Press Enter to start rolling...";
    cin.get();
    if(tknCntr[4]<tknLim){ //for when the counter goes below 3
        for(int count=1;count<=tknCntr[4];count++){ //Either 2 or 1 rolls based on the # of tokens you have
            die = rand()%6+1; //Range: [1,6]
            cout << "Roll "<<count<< " = " <<static_cast<int>(die)<<endl;
            sum+=die;
            numDice++;
            switch(die){
                case 4:tknCntr[4]--;tknCntr[0]++;break; //Token is given to the left or Player 1
                case 5:tknCntr[4]--;break;              //Token is placed in the center and is lost for good
                case 6:tknCntr[4]--;tknCntr[3]++;break; //Token is given to the right or Player 4 
            }
        }
    }else{//for when the counter is 3 or more
        for(int count=1;count<=tknLim;count++){ //3 rolls for having 3 or more tokens
            die = rand()%6+1; //Range: [1,6]
            cout << "Roll "<<count<< " = " << static_cast<int>(die)<<endl;
            sum+=die;
            numDice++;
            switch(die){
                case 4:tknCntr[4]--;tknCntr[0]++;break;  //Token is given to the left or Player 1
                case 5:tknCntr[4]--;break;               //Token is placed in the center and is lost for good
                case 6:tknCntr[4]--;tknCntr[3]++;break;  //Token is given to the right or Player 4 
            }
        }
        }
    cout << "Player 1 Current Token Count = " << tknCntr[0]<<endl;
    cout << "Player 2 Current Token Count = " << tknCntr[1]<<endl;
    cout << "Player 3 Current Token Count = " << tknCntr[2]<<endl;
    cout << "Player 4 Current Token Count = " << tknCntr[3]<<endl;
    cout << "Player 5 Current Token Count = " << tknCntr[4]<<endl<<endl;
    if(tknCntr[0]>0&&tknCntr[1]==0&&tknCntr[2]==0&&tknCntr[3]==0&&tknCntr[4]==0){win = true;}
    else if(tknCntr[1]>0&&tknCntr[0]==0&&tknCntr[2]==0&&tknCntr[3]==0&&tknCntr[4]==0){win = true;}
    else if(tknCntr[2]>0&&tknCntr[0]==0&&tknCntr[1]==0&&tknCntr[3]==0&&tknCntr[4]==0){win = true;}
    else if(tknCntr[3]>0&&tknCntr[0]==0&&tknCntr[1]==0&&tknCntr[2]==0&&tknCntr[4]==0){win = true;}
    else if(tknCntr[4]>0&&tknCntr[0]==0&&tknCntr[1]==0&&tknCntr[2]==0&&tknCntr[3]==0){win = true;}
    }
    }
    mean = (sum+.5)/numDice; //Round up if the value is .5 off, so the rest is truncated
    cout<< "The mean value rolled was around = "<< mean<<endl;
}
void markSrt(int a[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){      //Descending order 
                a[i]=a[i]^a[j]; //In place swapping
                a[j]=a[i]^a[j];
                a[i]=a[i]^a[j];
            }
        }
    }
}
void cpyLst(int a[], int b[], int n){
    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
}
//For comparing the token cntrs and sorted plcings list and displaying appropriate players
void rnking3(int a[], int b[], int n){
    for(int i=0;i<n;i++){
        if(a[i]==b[0]&&a[i]==b[1]&&a[i]==b[2])cout<<"Player 1,2,& 3: ";
        else if(a[i]==b[1]&&a[i]==b[2])cout<<"Player 2 & 3: ";
        else if(a[i]==b[0]&&a[i]==b[2])cout<<"Player 1 & 3: ";
        else if(a[i]==b[0]&&a[i]==b[1])cout<<"Player 1 & 2: ";
        else if(a[i]==b[0])cout<<"Player 1: ";
        else if(a[i]==b[1])cout<<"Player 2: ";
        else cout<<"Player 3: ";
        cout<<a[i]<<" token/s" <<endl;
        }
}
//For comparing the token cntrs and sorted plcings list and displaying appropriate players
void rnking5(int a[], int b[], int n){
    for(int i=0;i<n;i++){
        if(a[i]==b[0]&&a[i]==b[1]&&a[i]==b[2]&&a[i]==b[3]&&a[i]==b[4])cout<<"Player 1,2,3,4,& 5: ";
        else if(a[i]==b[0]&&a[i]==b[2]&&a[i]==b[3]&&a[i]==b[4])cout<<"Player 1,3,4,& 5: ";
        else if(a[i]==b[1]&&a[i]==b[2]&&a[i]==b[3]&&a[i]==b[4])cout<<"Player 2,3,4,& 5: ";
        else if(a[i]==b[0]&&a[i]==b[1]&&a[i]==b[2]&&a[i]==b[3])cout<<"Player 1,2,3,& 4: ";
        else if(a[i]==b[0]&&a[i]==b[1]&&a[i]==b[2]&&a[i]==b[4])cout<<"Player 1,2,3,& 5: ";
        else if(a[i]==b[0]&&a[i]==b[1]&&a[i]==b[3]&&a[i]==b[4])cout<<"Player 1,2,4,& 5: ";
        else if(a[i]==b[1]&&a[i]==b[2]&&a[i]==b[3])cout<<"Player 2,3,& 4: ";
        else if(a[i]==b[1]&&a[i]==b[2]&&a[i]==b[4])cout<<"Player 2,3,& 5: ";
        else if(a[i]==b[1]&&a[i]==b[3]&&a[i]==b[4])cout<<"Player 2,4,& 5: ";
        else if(a[i]==b[0]&&a[i]==b[1]&&a[i]==b[2])cout<<"Player 1,2,& 3: ";
        else if(a[i]==b[0]&&a[i]==b[1]&&a[i]==b[3])cout<<"Player 1,2,& 4: ";
        else if(a[i]==b[0]&&a[i]==b[2]&&a[i]==b[3])cout<<"Player 1,3,& 4: ";
        else if(a[i]==b[0]&&a[i]==b[2]&&a[i]==b[4])cout<<"Player 1,3,& 5: ";
        else if(a[i]==b[0]&&a[i]==b[3]&&a[i]==b[4])cout<<"Player 1,4,& 5: ";
        else if(a[i]==b[2]&&a[i]==b[3]&&a[i]==b[4])cout<<"Player 3,4,& 5: ";
        else if(a[i]==b[1]&&a[i]==b[2])cout<<"Player 2 & 3: ";
        else if(a[i]==b[0]&&a[i]==b[2])cout<<"Player 1 & 3: ";
        else if(a[i]==b[0]&&a[i]==b[1])cout<<"Player 1 & 2: ";
        else if(a[i]==b[0]&&a[i]==b[3])cout<<"Player 1 & 4: ";
        else if(a[i]==b[0]&&a[i]==b[4])cout<<"Player 1 & 5: ";
        else if(a[i]==b[3]&&a[i]==b[4])cout<<"Player 4 & 5: ";
        else if(a[i]==b[1]&&a[i]==b[3])cout<<"Player 2 & 4: ";
        else if(a[i]==b[1]&&a[i]==b[4])cout<<"Player 2 & 5: ";
        else if(a[i]==b[2]&&a[i]==b[3])cout<<"Player 3 & 4: ";
        else if(a[i]==b[2]&&a[i]==b[4])cout<<"Player 3 & 5: ";
        else if(a[i]==b[0])cout<<"Player 1: ";
        else if(a[i]==b[1])cout<<"Player 2: ";
        else if(a[i]==b[2])cout<<"Player 3: ";
        else if(a[i]==b[3])cout<<"Player 4: ";
        else cout<<"Player 5: ";
        cout<<a[i]<<" token/s" <<endl;
        }
}
bool linSrch(int a[], int n, int val){
    for(int i=0;i<n;i++){
        if(a[i]==val)
            return true;
    }
    return false;
}