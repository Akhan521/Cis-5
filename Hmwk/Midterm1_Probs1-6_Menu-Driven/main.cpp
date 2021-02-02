/* 
 * File:   main.cpp
 * Author: Aamir 
 * Created on January 28, 2021, 10:50 PM
 * Purpose:  RMidterm 1 Menu-Driven
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes
void Menu();
int  getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
int fctrl(int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Set a Random number seed here.
    
    //Declare Main variables here.
    int inN;
    
    //Loop on each problem
    do{
        Menu();
        inN=getN();
        switch(inN){
            case 1:    problem1();break;
            case 2:    problem2();break;
            case 3:    problem3();break;
            case 4:    problem4();break;
            case 5:    problem5();break;
            case 6:    problem6();break;
            default:   def(inN);
	}
    }while(inN<7);

    //Exit Stage Right Here!
    return 0;
}

void Menu(){
    cout<<endl;
    cout<<"Type 1 to execute Problem 1"<<endl;
    cout<<"Type 2 to execute Problem 2"<<endl;
    cout<<"Type 3 to execute Problem 3"<<endl;
    cout<<"Type 4 to execute Problem 4"<<endl;
    cout<<"Type 5 to execute Problem 5"<<endl;
    cout<<"Type 6 to execute Problem 6"<<endl;
    cout<<"Type anything else to exit."<<endl<<endl;
}

int  getN(){
    int inN;
    cin>>inN;
    return inN;
}

void def(int inN){
    cout<<endl<<"Typing "<<inN<<" exits the program."<<endl;
}

void problem1(){
     //Declare all Variables Here
    unsigned short x;
    char shape;       //f-> forward b->backward x->cross
    
    //Input or initialize values Here
    cout<<"Create a numbered shape that can be sized."<<endl;
    cout<<"Input an integer number [1,50] and a character [x,b,f]."<<endl;
    cin>>x>>shape;
     //Draw the shape
    if(x>=1&&x<=50){
    if(shape=='b'){ //Backslash
        if(x%2){
            for(int row=1;row<=x;row++){
                for (int i=x;i>0;i--){ //Start at x go till 1
                    if(row==(x+1)-i)cout<<i; //If row and column are the same, cout << i. Ex. R2 C2 cout i(4)
                    else cout<< " ";
                }
            cout<<endl;
            }
        }else{
            for(int row=1;row<=x;row++){
                for (int i=x;i>0;i--){ //Start at x go till 1
                    if(row==(x+1)-i)cout<<row; //If row and column are the same, cout << i. Ex. R2 C2 cout i(4)
                    else cout<< " ";
            }
            cout<<endl;
            }
        }
    }
    if(shape=='f'){ //Forward slash
        if(x%2){
            for(int row=1;row<=x;row++){ //For the rows
                for (int i=x;i>0;i--){ //Start at  go till 0
                    if(row==i)cout<<row;
                    else cout<< " ";
                }
            cout<<endl;
            }
        }else{
        for(int row=1;row<=x;row++){ //For the rows
            for (int i=x;i>0;i--){ //Start at  go till 0
                if(row==i)cout<<(x+1)-i;
                else cout<< " ";
            }
        cout<<endl;
        }
        }
    }
    if(shape=='x'){
        if(x%2){ //For Odd Numbers
            for(int row=1;row<=x;row++){
                for (int i=x;i>0;i--){ //Start at x go till 1
                    if(row==(x+1)-i||i==row)cout<<i; //If row and column are the same, cout << i. Ex. R2 C2 cout i(4)
                    else cout<< " ";
                }
            cout<<endl;
            }
        }else{
            for(int row=1;row<=x;row++){
                for (int i=1;i<=x;i++){ //Start at x go till 1
                    if(row==(x+1)-i||i==row)cout<<i; //If row and column are the same, cout << i. Ex. R2 C2 cout i(2)
                    else cout<< " ";
                }
            cout<<endl;
            }
        }
    }
    }
}

void problem2(){
    //Declare all Variables Here
    char dig1,dig2,dig3,dig4; //Four digits input
    
    //Input or initialize values Here
    cout<<"Create a histogram chart."<<endl;
    cout<<"Input 4 digits as characters."<<endl;
    cin>>dig1>>dig2>>dig3>>dig4;
    //Histogram Here
    switch(dig4){
        case '0': cout <<"0 \n";break;
        case '1': cout <<"1 *\n";break;
        case '2': cout <<"2 **\n";break;
        case '3': cout <<"3 ***\n";break;
        case '4': cout <<"4 ****\n";break;
        case '5': cout <<"5 *****\n";break;
        case '6': cout <<"6 ******\n";break;
        case '7': cout <<"7 *******\n";break;
        case '8': cout <<"8 ********\n";break;
        case '9': cout <<"9 *********\n";break;
        default: cout << dig4<<" ?\n";break;
        }
    switch(dig3){
        case '0': cout <<"0 \n";break;
        case '1': cout <<"1 *\n";break;
        case '2': cout <<"2 **\n";break;
        case '3': cout <<"3 ***\n";break;
        case '4': cout <<"4 ****\n";break;
        case '5': cout <<"5 *****\n";break;
        case '6': cout <<"6 ******\n";break;
        case '7': cout <<"7 *******\n";break;
        case '8': cout <<"8 ********\n";break;
        case '9': cout <<"9 *********\n";break;
        default: cout << dig3<<" ?\n";break;
        }
    switch(dig2){
        case '0': cout <<"0 \n";break;
        case '1': cout <<"1 *\n";break;
        case '2': cout <<"2 **\n";break;
        case '3': cout <<"3 ***\n";break;
        case '4': cout <<"4 ****\n";break;
        case '5': cout <<"5 *****\n";break;
        case '6': cout <<"6 ******\n";break;
        case '7': cout <<"7 *******\n";break;
        case '8': cout <<"8 ********\n";break;
        case '9': cout <<"9 *********\n";break;
        default: cout<< dig2<< " ?\n";break;
        }
    switch(dig1){
        case '0': cout <<"0 \n";break;
        case '1': cout <<"1 *\n";break;
        case '2': cout <<"2 **\n";break;
        case '3': cout <<"3 ***\n";break;
        case '4': cout <<"4 ****\n";break;
        case '5': cout <<"5 *****\n";break;
        case '6': cout <<"6 ******\n";break;
        case '7': cout <<"7 *******\n";break;
        case '8': cout <<"8 ********\n";break;
        case '9': cout <<"9 *********\n";break;
        default: cout<< dig1<< " ?\n";break;
        }
}

void problem3(){
     //Declare all Variables Here
    unsigned short number, num1000s,num100s,num10s,num1s;
    
    //Input or initialize values Here
    cout<<"Input an integer [1-3000] convert to an English Check value."<<endl;
    cin>>number;
    
    //Calculate the 1000's, 100's, 10's and 1's
    num1000s = number/1000;
    number -= num1000s*1000;
    num100s = number/100;
    number -= num100s*100;
    num10s = number/10;
    number -= num10s*10;
    num1s = number;
    //Output the check value
    switch(num1000s){
        case 3: cout <<"Three Thousand ";break;
        case 2: cout <<"Two Thousand ";break;
        case 1: cout <<"One Thousand ";break;
    }
    switch(num100s){
        case 9: cout << "Nine Hundred ";break;
        case 8: cout << "Eight Hundred ";break;
        case 7: cout << "Seven Hundred ";break;
        case 6: cout << "Six Hundred ";break;
        case 5: cout << "Five Hundred ";break;
        case 4: cout << "Four Hundred ";break;
        case 3: cout << "Three Hundred ";break;
        case 2: cout << "Two Hundred ";break;
        case 1: cout << "One Hundred ";break;
    }
    switch(num10s){
        case 9: cout << "Ninety ";break;
        case 8: cout << "Eighty ";break;
        case 7: cout << "Seventy ";break;
        case 6: cout << "Sixty ";break;
        case 5: cout << "Fifty ";break;
        case 4: cout << "Fourty ";break;
        case 3: cout << "Thirty ";break;
        case 2: cout << "Twenty ";break;
    }
    if(num10s==1&&num1s==0)cout<<"Ten";
    else if(num10s==1&&num1s!=0){
        switch(num1s){
        case 9: cout << "Nineteen ";break;
        case 8: cout << "Eighteen ";break;
        case 7: cout << "Seventeen ";break;
        case 6: cout << "Sixteen ";break;
        case 5: cout << "Fifteen ";break;
        case 4: cout << "Fourteen ";break;
        case 3: cout << "Thirteen ";break;
        case 2: cout << "Twelve ";break;
        case 1: cout << "Eleven ";break;
        }
    }
    else{
        switch(num1s){
            case 9: cout << "Nine ";break;
            case 8: cout << "Eight ";break;
            case 7: cout << "Seven ";break;
            case 6: cout << "Six ";break;
            case 5: cout << "Five ";break;
            case 4: cout << "Four ";break;
            case 3: cout << "Three ";break;
            case 2: cout << "Two ";break;
            case 1: cout << "One ";break;
        }
    }
    cout<<"and no/100's Dollars"<<endl;
}

void problem4(){
    //Declare all Variables Here
    char package;
    short hours;
    float cost,               //Cost or charges
          addcst1,            //Additional Cost 
          addcst2,            //Additional Cost  
          costA,              //Costs for Packages a-c
          costB,
          costC;
    
    //Input or initialize values Here
    cout<<"ISP charges for service delivered."<<endl;
    cout<<"Input package A,B,C then hours used for the month"<<endl;
    cin>>package>>hours;
    costA = 16.99f;
    costB = 26.99f;
    costC = 36.99f;
    //Basic Charges
        if(package=='a'||package == 'A'){
            cost = 16.99f; 
            if(hours>10&&hours<=20){
                addcst1 = (.95 * (hours - 10));
            }else if(hours>20)addcst1 = .95 * 10; //Max of 10 hours additional pay at .95
            if(hours>20){
                addcst2 = (.85 * (hours - 20));
            }
            cost =cost + addcst1 + addcst2;
        }
        if(package=='b'||package == 'B'){
            cost = 26.99f;
            if(hours>20&&hours<=30){
                addcst1 = (.74 * (hours-20));
            }else if(hours>20)addcst1 = .74 * 10; //Max of 10 hours additional pay at .95
            if(hours>30){
                addcst2 = (.64 * (hours - 30));
            }
            cost =cost + addcst1 + addcst2;
        }
        if(package=='c'||package == 'C'){
            cost = 36.99f; 
        }
        if(hours>0){
        cout<<setprecision(2)<<fixed;
        cout<<"$"<<cost << " " ;
        }
        //Output the cheapest package and the savings
        cout<<fixed<<setprecision(2)<<showpoint;
        if (cost>=costC&&hours>30){
            if(hours>0){
                if(package=='c'||package=='c'){
                cout << "C $0.00" <<endl;
                }else cout << "C $" << (cost - costC)<<endl;
            }else if(hours==0)cout<<"A $"<<(costC-costA)<<endl; // Ex c 0 -> switch to a
        }else if(cost>=costC&&hours<30){
            cout << "B $"<<(costC-(costB+(hours-20)*.74))<<endl;
        }
        if (cost<costC&&cost>=costB){
            if(hours!=0&&hours>20){
                if(package=='b'||package=='B'){
                    cout << "B $0.00" <<endl;
                }else{
                    cout << "B $" << (cost- costB)<<endl;
                }
            }else if (hours==0)cout << "A $"<<(costB-costA) <<endl;
        }    
        if (cost<costB){ //For package a or A -> will always be 0.00 because nothing more can be saved below 26.99
            cout << "A $0.00" <<endl;
        }
        if(cost==costB&&hours<20){
            cout<<"A $"<<costB-(costA+((hours-10)*.95))<<endl;
        }
}

void problem5(){
     //Declare all Variables Here
    float payRate, grossPay,otPay1,otPay2,totOT; //Gross Pay, OT Pay for 20-40 hours, OT Pay for 41+ hours
    unsigned short hrsWrkd;
    
    //Input or initialize values Here
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>payRate>>hrsWrkd;
    
    //Calculate Paycheck
    if(hrsWrkd<=20){
        grossPay = payRate*hrsWrkd;
    }else grossPay = payRate*20; //For when hours go above 20
    if(hrsWrkd>20&&hrsWrkd<=40){
        otPay1 = (payRate*1.5)*(hrsWrkd-20); //Calculating Overtime pay for hours between 20-40
    }else if(hrsWrkd>40) otPay1 = (payRate*1.5)*20; //For Hours above 40
    if(hrsWrkd>40){
        otPay2 = (payRate*2)*(hrsWrkd-40);
    }
    totOT = otPay1 + otPay2;
    grossPay = grossPay + totOT;
    //Output the check
    cout<<setprecision(2)<<fixed;
    cout << "$"<<grossPay<<endl;
    
}

void problem6(){
     //Declare all Variables Here
    float x,fx;    //Starting value and end total
    int nterms,    //Number of terms to go till
        plusMinus; //To determine whether to add or subtract the next terms
    
    //Input or initialize values Here
    cout<<"Calculate a series f(x)=x-x^3/3!+x^5/5!-x^7/7!+......."<<endl;
    cout<<"Input x and the number of terms, output f(x)"<<endl;
    cin>>x>>nterms;
    fx = 0.0f;
    plusMinus=1; //Initialize with 1 for the first positive value
    //Calculate Sequence sum here
    for(int oddNum=1,term=1;term<=nterms;oddNum+=2,term++){ //For the odd # that is incremented by 2 each loop used as power and arg for factorial function
        fx += plusMinus * (pow(x,oddNum)/fctrl(oddNum));    //Starts at term 1 then Multiplies the beginning by 1 or -1 and takes x^oddNum/factorial of oddNum
        plusMinus *= -1;                                    //To make the signs alternate with each next term
    }
    //Output the result here
    cout << setprecision(6) << fixed << showpoint;
    cout << fx <<endl;
}
int fctrl(int arg){
    int fact = 1;
    for(int count=arg;count>0;count--){
        fact *= count;
    }
    return fact;
}