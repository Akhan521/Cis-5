/* 
 * File:   main.cpp
 * Author: Aamir 
 * Created on January 21, 2021, 9:30 AM
 * Purpose:  Menu Driven Assignment 4
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
const float CNVLTGAL = .264179f; //Conversion from liters to gallons
//Function Prototypes
void mpg();
void mpgV2();
void calcInf();
//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int choice;
    //Initialize Variables
    cout << "\t\tMenu For Assignment 4\n";
    cout << "1. Sum of Some Numbers Program - Gaddis Chapter 5\n";
    cout << "2. Pay in Pennies Program - Gaddis Chapter 5\n";
    cout << "3. Min/Max of a List of #s Program - Gaddis Chapter 5\n";
    cout << "4. Rectangle Display Program - Gaddis Chapter 5\n";
    cout << "5. Triangle Pattern Program - Gaddis Chapter 5\n";
    cout << "6. MPG Program Using a Function - Savitch Chapter 4\n";
    cout << "7. Fuel Efficiency Program (Modified #6) - Savitch Chapter 4\n";
    cout << "8. Inflation Rate Program - Savitch Chapter 4\n";
    cout << "9. Estimated Prices & Inflation Program (Modified #8) - Savitch Chapter 4\n";
    cout << "10. Largest of 3 Float Arguments - Savitch Chapter 4\n";
    cout << "11. Quit Menu\n";
    cout << "Enter an option: ";
    cin >> choice;
    if (choice != 11){
        switch(choice){
            case 1:{
                //Declare Variables
                unsigned short max,   //The number the user entered serves as the max #
                               total;
                //Initialize or input i.e. set variable values
                cout << "Enter a # and we'll take the sum from 1 till that number: ";
                cin >> max;
                total = 0;
                //Map inputs -> outputs
                for (int num=1;num<=max;num++){
                    total+=num;
                    }
                //Display the outputs
                cout << "Sum = " << total;
                //Exit stage right or left!
                break;
            }
                case 2:{
                    //Declare Variables
                    short days;        //# of days user entered
                    float penny=0.01f,
                          total=0.0f;  //Total Pay
                    //Initialize or input i.e. set variable values
                    cout << "On day 1, user gets $0.01 and everyday after it doubles. This program calculates the total pay.\n";
                    cout << "Enter the number of days the user worked: ";
                    cin >> days;
                    //Map inputs -> outputs
                    while (days<1){
                        cout << "Enter a value greater than 0: ";
                        cin >> days;
                    }
                    for (int count=1;count<=days;count++){
                        total += penny;
                        penny *= 2;
                    }
                    cout << fixed << setprecision(2);
                    cout << "Pay = $" << total;
                    break;
                    }
            case 3:{
                //Declare Variables
                short min,     //Smallest #
                      max,     //Largest #
                      sntl=-99,//Sentinel Value
                      num;     //Number the user enters
                //Initialize or input i.e. set variable values
                cout << "Enter a list of numbers or -99 to break out and the largest and smallest number\n";
                cout <<  "will be returned after a few numbers are given: ";
                cin >> num;
                max = min = num; // Creating a starting point for when we compare each number to the min and max
                //Map inputs -> outputs
                while(num != sntl){
                    if (num > max)
                    max = num; //If the number is greater than the current max, we assign max that new number
                    if (num < min)
                    min = num; //If the number is smaller than the min, we assign min that new number
                    cin >> num;
                }
                //Display the outputs
                cout << "Smallest number in the series is " << min << endl;
                cout << "Largest  number in the series is " << max;
                //Exit stage right or left!
                break;
            }
            case 4:{
                //Declare Variables
                unsigned short dimen; //Dimensions of the rectangle
                char chrctr;          //Character used to display the rectangle
                //Initialize or input i.e. set variable values
                cout << "Enter a # and a character and I will create a rectangle of those dimensions (ex. 5 X): ";
                cin >> dimen >> chrctr;
                //Map inputs -> outputs
                for (int row=0;row<dimen;row++){    //Deals with the number of rows the user wants
                    for (int col=0;col<dimen;col++) //Deals with the number of columns the user wants
                    cout << chrctr;
                if (row<dimen - 1) //Making sure the last line doesn't have an endline character
                    cout << endl;
                }
                //Exit stage right or left!
                break;
            }
            case 5:{
                //Declare Variables
                unsigned short inpt;
                //Initialize or input i.e. set variable values
                cout << "Enter a # and I'll create a triangle pattern with that dimension: ";
                cin >> inpt;
                //Map inputs -> outputs
                //For the first half of the pattern
                for (int row=0;row<inpt;row++){
                    for (int col=0;col<=row;col++) //To display the increase
                    cout << "+";
                cout << endl << endl;
                }
                //Second half of the pattern
                for (int row=0;row<inpt;row++){
                    for (int col=inpt;col>row;col--)      //To display the decrease
                    cout << "+";
                if (row < inpt - 1)
                    cout << endl << endl;
                }
                //Exit stage right or left!
                break;
            }
            case 6:{
                cout << "This program calculates MPG given liters and # of miles traveled\n";
                //Display the outputs
                mpg();
                break;
            }
            case 7:{
                cout << "This program calculates MPG given liters and # of miles traveled\n";
                cout << "for two cars and returns the most fuel efficient of the two.\n";
                cout << "Ex. Input: 50 200 30 400\n";
                //Display the outputs
                mpgV2();
                break;
            }
            case 8:{
                cout << "This program calculates an item's inflation rate given the current and year-ago price\n";
                //Display the outputs
                calcInf();
                break;
            }
            default: cout << "Enter a valid option next time.";
            }//End of Switch Statement
    }
    //Exit the Program - Cleanup
    return 0;
}
// Function Definitions:
//***********************************************************************************
//                              Function mpg for Prob 6:                            *
//       Take the number of liters and miles for one car and return mpg             *
//***********************************************************************************
void mpg (){
    short liters, numMls;
    float mlsPrGl; //MPG given liters and # of miles the car can travel
    char again;    //Choose to repeat program or not
    do{
        cout << "Enter number of liters of gasoline:\n";
        cin >> liters;
        cout << endl;
        cout << "Enter number of miles traveled:\n";
        cin >> numMls;
        cout << endl;
        mlsPrGl = numMls / (liters * CNVLTGAL);
        cout << "miles per gallon:\n";
        cout << fixed << setprecision(2);
        cout << mlsPrGl << endl;
        cout << "Again:\n";
        cin >> again;
        if (again == 'Y' || again == 'y')
        cout << endl;
    }while (again == 'Y' || again == 'y');
}
//***********************************************************************************
//                              Function mpgV2 for Prob 7:                          *
//Take the number of liters and miles for two cars and return the most efficient car*
//***********************************************************************************
void mpgV2 (){
    short liters1, numMls1, liters2, numMls2; //Liters and # of Miles for 2 cars
    float mlsPrGl1, mlsPrGl2;                 //MPG given liters and # of miles the car can travel for 2 cars
    char again;                               //Choose to repeat program or not
    do{
        cout << "Car 1\n";
        cout << "Enter number of liters of gasoline:\n";
        cin >> liters1;
        cout << "Enter number of miles traveled:\n";
        cin >> numMls1;
        mlsPrGl1 = numMls1 / (liters1 * CNVLTGAL);
        cout << fixed << setprecision(2);
        cout << "miles per gallon:" << setw(6) << mlsPrGl1 << endl << endl;
        cout << "Car 2\n";
        cout << "Enter number of liters of gasoline:\n";
        cin >> liters2;
        cout << "Enter number of miles traveled:\n";
        cin >> numMls2;
        mlsPrGl2 = numMls2 / (liters2 * CNVLTGAL);
        cout << fixed << setprecision(2);
        cout << "miles per gallon:" << setw(6) << mlsPrGl2 << endl << endl;
        if (mlsPrGl1>mlsPrGl2)
            cout << "Car 1 is more fuel efficient\n\n";
        else 
            cout << "Car 2 is more fuel efficient\n\n";
        cout << "Again:\n";
        cin >> again;
        if (again == 'Y' || again == 'y')
        cout << endl;
    }while (again == 'Y' || again == 'y');
}
//***************************************
//         Function calcInf:            *
//   Calculates the inflation rate by   *
//  comparing current vs year-ago price *
//***************************************
void calcInf(){
    float infRte, //Inflation rate
          curPrc, //Current Price
          prevPrc;//Year-ago Price
    char  again;  //Option to repeat
    do{
        cout << "Enter current price:\n";
        cin >> curPrc;
        cout << "Enter year-ago price:\n";
        cin >> prevPrc;
        infRte = ((curPrc - prevPrc) / prevPrc) * 100.0f;
        cout << fixed << setprecision(2);
        cout << "Inflation rate: " << setw(4) << infRte << "%\n\n";
        cout << "Again:\n";
        cin >> again;
        if (again == 'Y' || again == 'y')
            cout << endl;
    }while(again == 'Y' || again == 'y');
}