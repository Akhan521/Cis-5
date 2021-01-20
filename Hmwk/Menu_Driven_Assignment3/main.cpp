/* 
 * File:   main.cpp
 * Author: Aamir
 * Created on January 15, 2021, 9:50 AM
 * Purpose:  Assignment 3 with menu
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

//Execution Begins Here
int main(int argc, char** argv) {
    // Variable Declaration
    char choice; //Choice of the User
    //Display the Menu
    cout << "\t\tMenu For Assignment 3:\n";
    cout << "1. Sorting Names Problem" << endl;;
    cout << "2. Books & Points Problem" << endl;
    cout << "3. Bank Charges Problem" << endl;
    cout << "4. Race & Times Problem" << endl;
    cout << "5. Internet Service Provider Problem" << endl;
    cout << "6. Rock, Paper, Scissors Problem" << endl;
    cout << "7. Roman Numeral Conversion Problem" << endl;
    cout << "8. Compatibility Signs Problem" << endl;
    cout << "Choose an option #1-8: ";
    cin >> choice;
    cin.ignore(); // Bypass the newline character so all three names are accepted
    switch(choice){
        case '1':{
            //Declare Variables
            string a, //1st Name
                   b, //2nd Name
                   c; //3rd Name
           //Initialize or input i.e. set variable values
           cout << "Sorting Names\n";
           cout << "Input 3 names\n";
           getline(cin,a);
           getline(cin,b);
           getline(cin,c);
           //Map inputs -> outputs
           if (a < b && a < c && b < c)
               cout << a <<endl << b <<endl << c;
           else if (a < b && a < c && c < b)
               cout << a <<endl << c <<endl << b;
           else if (b < a && b < c && a < c)
               cout << b <<endl << a <<endl << c;
           else if (b < a && b < c && c < a)
               cout << b <<endl << c <<endl << a;
           else if (c < a && c < b && a < b)
               cout << c <<endl << a <<endl << b;
           else if (c < a && c < b && b < a)
               cout << c <<endl << b <<endl << a;
           //Exit stage right or left!
            break;
        }
        case '2':{
            //Declare Variables
            unsigned short numBks, //Number of books that the user purchased
                           numPts; //Number of points the user earns
            //Initialize or input i.e. set variable values
            cout << "Book Worm Points\n";
            cout << "Input the number of books purchased this month.\n";
            cin >> numBks;
            numBks = abs(numBks);
            //Map inputs -> outputs
            if (numBks == 1)
                numPts = 5;
            else if (numBks == 2)
                numPts = 15;
            else if (numBks == 3)
                numPts = 30;
            else if (numBks >= 4)
                numPts = 60;
            else
                cout << "Invalid Input";
            //Display the outputs
            cout << "Books purchased =" << setw(3) << numBks << endl;
            cout << "Points earned   =" << setw(3) << numPts;
            //Exit stage right or left!
            break;
        }
        case '3':{
            //Declare Variables
            float monFee = 10,   // Monthly fee for the account 
                  numChks,       // Number of checks
                  addChrg,  // Additional Charge if account balance falls below $400
                  begBlnce,      // Beginning balance of the account
                  chkFee,        // Checking Fees
                  newBlnc,       // New Balance
                  totFee = 0;    // Total service fees including $10 monthly + check fees
            //Initialize or input i.e. set variable values
            cout << "Monthly Bank Fees\n";
            cout << "Input Current Bank Balance and Number of Checks\n";
            cin >> begBlnce >> numChks;
            numChks = abs(numChks);
            //Map inputs -> outputs
            if (begBlnce < 0)
                cout << "Account is overdrawn.";
            else{
                if (begBlnce < 400){
                    addChrg = 15;
                     totFee += addChrg; // Adding $15 charge for being under $400
                }
                else if (begBlnce >= 400){
                    addChrg = 0;
                    totFee += addChrg;
                }
                if (numChks < 20){
                    chkFee = (numChks * .1);
                    totFee += monFee + chkFee;
                }
                else if (numChks >= 20 && numChks < 40){
                    chkFee = (numChks * .08);
                    totFee += monFee + chkFee;
                }
                else if (numChks >= 40 && numChks < 60){
                    chkFee = (numChks * .06);
                    totFee += monFee + chkFee;
                }
                else {
                    chkFee = (numChks * .04);
                    totFee += monFee + chkFee;
            }
            newBlnc = begBlnce - totFee;
            cout << fixed << setprecision(2);
            cout << "Balance     $" << setw(9) << begBlnce << endl;
            cout << "Check Fee   $" << setw(9) << chkFee << endl;
            cout << "Monthly Fee $" << setw(9) << monFee << endl;
            cout << "Low Balance $" << setw(9) << addChrg << endl;
            cout << "New Balance $" << setw(9) << newBlnc;
            }
            //Exit stage right or left!
            break;
        }
        case '4':{
            //Declare Variables
            string rnr1, rnr2, rnr3; // The 3 Runners
            int rnr1tme, rnr2tme, rnr3tme; //Times of the 3 Runners
            //Initialize or input i.e. set variable values
            cout << "Race Ranking Program\n";
            cout << "Input 3 Runners\n";
            cout << "Their names, then their times\n";
            cin >> rnr1 >> rnr1tme >> rnr2 >> rnr2tme >> rnr3 >> rnr3tme;
            //Map inputs -> outputs
            if (rnr1tme < rnr2tme && rnr1tme < rnr3tme && rnr2tme < rnr3tme){
                cout << rnr1 << "\t" << setw(3) << rnr1tme << endl;
                cout << rnr2 << "\t" << setw(3) << rnr2tme << endl;
                cout << rnr3 << "\t" << setw(3) << rnr3tme;
            }
            else if (rnr1tme < rnr2tme && rnr1tme < rnr3tme && rnr3tme < rnr2tme){
                cout << rnr1 << "\t" << setw(3) << rnr1tme << endl;
                cout << rnr3 << "\t" << setw(3) << rnr3tme << endl;
                cout << rnr2 << "\t" << setw(3) << rnr2tme;
            }
            else if (rnr2tme < rnr1tme && rnr2tme < rnr3tme && rnr1tme < rnr3tme){
                cout << rnr2 << "\t" << setw(3) << rnr2tme << endl;
                cout << rnr1 << "\t" << setw(3) << rnr1tme << endl;
                cout << rnr3 << "\t" << setw(3) << rnr3tme;
            }
            else if (rnr2tme < rnr1tme && rnr2tme < rnr3tme && rnr3tme < rnr1tme){
                cout << rnr2 << "\t" << setw(3) << rnr2tme << endl;
                cout << rnr3 << "\t" << setw(3) << rnr3tme << endl;
                cout << rnr1 << "\t" << setw(3) << rnr1tme;
            }
            else if (rnr3tme < rnr2tme && rnr3tme < rnr1tme && rnr1tme < rnr2tme){
                cout << rnr3 << "\t" << setw(3) << rnr3tme << endl;
                cout << rnr1 << "\t" << setw(3) << rnr1tme << endl;
                cout << rnr2 << "\t" << setw(3) << rnr2tme;
            }
            else if (rnr3tme < rnr2tme && rnr3tme < rnr2tme && rnr2tme < rnr1tme){
                cout << rnr3 << "\t" << setw(3) << rnr3tme << endl;
                cout << rnr2 << "\t" << setw(3) << rnr2tme << endl;
                cout << rnr1 << "\t" << setw(3) << rnr1tme;
            }
            //Exit stage right or left!
            break;
        }
        case '5':{
            //Declare Variables
            char package;       //Package A-C
            unsigned int hours; //Number of hours used
            float monFee,       // Monthly Fee
                  addhrs,       // Additional hours above the limit
                  totAdd,       // Total Additional cost = addhrs * addChrg
                  total,        // Total Cost = additional cost + monthly fee
                  addChrg = 0;      //Additional Charge for exceeding limit
            //Initialize or input i.e. set variable values
            cout << "ISP Bill\n";
            cout << "Input Package and Hours\n";
            cin >> package >> hours;
            //Map inputs -> outputs
            switch(package){
            case 'A':
                monFee = 9.95;
                if (hours > 10){
                    addChrg = 2.0;
                    addhrs = hours - 10;
                    totAdd = addhrs * addChrg;
                    }
                    total = totAdd + monFee;
                    break;
            case 'B':
                monFee = 14.95;
                if (hours > 20){
                    addChrg = 1.0;
                    addhrs = hours - 20;
                    totAdd = addhrs * addChrg;
                    }
                    total = totAdd + monFee;
                    break;
            case 'C':
                monFee = 19.95;
                total = monFee;
            }
            //Display the outputs
            cout << "Bill = $" << setw(6) << total;
            //Exit stage right or left!
            break;
        }
        case '6':{
            //Declare Variables
            char pl1move, pl2move; //Player 1 & 2 Moves 
            //Initialize or input i.e. set variable values
            cout << "Rock Paper Scissors Game\n";
            cout << "Input Player 1 and Player 2 Choices\n";
            cin >> pl1move >> pl2move;
            //Map inputs -> outputs
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
            //Exit stage right or left!
            break;
        }
        case '7':{
           //Declare Variables
           unsigned short num2Cnv; //Number to convert to Roman Numeral
           unsigned char n1000s, n100s, n10s, n1s; // Number of 1000s, 100s, 10s, and 1s you have
           //Initialize or input i.e. set variable values
           cout << "Arabic to Roman numeral conversion.\n";
           cout << "Input the integer to convert.\n";
           cin >> num2Cnv;
           //Map inputs -> outputs
           n1000s = (num2Cnv/1000)%10;
           n100s = (num2Cnv/100)%10;
           n10s = (num2Cnv/10)%10;
           n1s = num2Cnv%10;
           if (num2Cnv >= 1000 & num2Cnv <= 3000){
               cout << num2Cnv << " is equal to ";
               switch(n1000s){
                   case 3: cout << 'M';
                   case 2: cout << 'M';
                   case 1: cout << 'M';
               }
               switch(n100s){
                   case 9: cout << "CM";
                   break;
                   case 8: cout << "DCCC";
                   break;
                   case 7: cout << "DCC";
                   break;
                   case 6: cout << "DC";
                   break;
                   case 5: cout << "D";
                   break;
                   case 4: cout << "CD";
                   break;
                   case 3: cout << "CCC";
                   break;
                   case 2: cout << "CC";
                   break;
                   case 1: cout << "CC";
               }
               switch(n10s){
                   case 9: cout << "XC";
                   break;
                   case 8: cout << "LXXX";
                   break;
                   case 7: cout << "LXX";
                   break;
                   case 6: cout << "LX";
                   break;
                   case 5: cout << "L";
                   break;
                   case 4: cout << "XL";
                   break;
                   case 3: cout << "XXX";
                   break;
                   case 2: cout << "XX";
                   break;
                   case 1: cout << "X";
               }
               switch(n1s){
                   case 9: cout << "IX";
                   break;
                   case 8: cout << "VIII";
                   break;
                   case 7: cout << "VII";
                   break;
                   case 6: cout << "VI";
                   break;
                   case 5: cout << "V";
                   break;
                   case 4: cout << "IV";
                   break;
                   case 3: cout << "III";
                   break;
                   case 2: cout << "II";
                   break;
                   case 1: cout << "I";
               }
           }else
               cout << num2Cnv << " is Out of Range!";
           //Display the outputs

           //Exit stage right or left!
            break;
        }
        case '8':{
            //Declare Variables
            string sign1, sign2; //Signs inputted by user
            //Initialize or input i.e. set variable values
            cout << "Horoscope Program which examines compatible signs.\n";
            cout << "Input 2 signs.\n";
            cin >> sign1 >> sign2;
            //Map inputs -> outputs
            //Fire Signs
            (sign1 == "Aries" && sign2 == "Leo" || sign1 == "Leo" && sign2 == "Aries")?cout<<"Aries and Leo are compatible Fire signs.":
            (sign1 == "Aries" && sign2 == "Sagittarius" || sign1 == "Sagittarius" && sign2 == "Aries")?cout<<"Aries and Sagittarius are compatible Fire signs.":
            (sign1 == "Sagittarius" && sign2 == "Leo" || sign1 == "Leo" && sign2 == "Sagittarius")?cout<<"Aries and Leo are compatible Fire signs.":
            (sign1 == "Aries" && sign2 == "Aries")?cout<<"Aries and Aries are compatible Fire signs.":
            (sign1 == "Sagittarius" && sign2 == "Sagittarius")?cout<<"Sagittarius and Sagittarius are compatible Fire signs.":
            (sign1 == "Leo" && sign2 == "Leo")?cout<<"Leo and Leo are compatible Fire signs.":
            //Earth Signs
            (sign1 == "Taurus" && sign2 == "Virgo" || sign1 == "Virgo" && sign2 == "Taurus")?cout<<"Taurus and Virgo are compatible Earth signs.":
            (sign1 == "Taurus" && sign2 == "Capricorn" || sign1 == "Capricorn" && sign2 == "Taurus")?cout<<"Taurus and Capricorn are compatible Earth signs.":
            (sign1 == "Virgo" && sign2 == "Capricorn" || sign1 == "Capricorn" && sign2 == "Virgo")?cout<<"Virgo and Capricorn are compatible Earth signs.":
            (sign1 == "Taurus" && sign2 == "Taurus")?cout<<"Taurus and Taurus are compatible Earth signs.":
            (sign1 == "Virgo" && sign2 == "Virgo")?cout<<"Virgo and Virgo are compatible Earth signs.":
            (sign1 == "Capricorn" && sign2 == "Capricorn")?cout<<"Capricorn and Capricorn are compatible Earth signs.":
            //Air Signs
            (sign1 == "Gemini" && sign2 == "Libra" || sign1 == "Libra" && sign2 == "Gemini")?cout<<"Gemini and Libra are compatible Air signs.":
            (sign1 == "Gemini" && sign2 == "Aquarius" || sign1 == "Aquarius" && sign2 == "Gemini")?cout<<"Gemini and Aquarius are compatible Air signs.":
            (sign1 == "Libra" && sign2 == "Aquarius" || sign1 == "Aquarius" && sign2 == "Libra")?cout<<"Libra and Aquarius are compatible Air signs.":
            (sign1 == "Gemini" && sign2 == "Gemini")?cout<<"Gemini and Gemini are compatible Air signs.":
            (sign1 == "Libra" && sign2 == "Libra")?cout<<"Libra and Libra are compatible Air signs.":
            (sign1 == "Aquarius" && sign2 == "Aquarius")?cout<<"Aquarius and Aquarius are compatible Air signs.":
            //Water Signs
            (sign1 == "Cancer" && sign2 == "Scorpio" || sign1 == "Scorpio" && sign2 == "Cancer")?cout<<"Scorpio and Cancer are compatible Water signs.":
            (sign1 == "Cancer" && sign2 == "Pisces" || sign1 == "Pisces" && sign2 == "Cancer")?cout<<"Cancer and Pisces are compatible Water signs.":
            (sign1 == "Scorpio" && sign2 == "Pisces" || sign1 == "Pisces" && sign2 == "Scorpio")?cout<<"Scorpio and Pisces are compatible Water signs.":
            (sign1 == "Cancer" && sign2 == "Cancer")?cout<<"Cancer and Cancer are compatible Water signs.":
            (sign1 == "Scorpio" && sign2 == "Scorpio")?cout<<"Scorpio and Scorpio are compatible Water signs.":
            (sign1 == "Pisces" && sign2 == "Pisces")?cout<<"Pisces and Pisces are compatible Water signs.":
            cout << sign1 << " and " << sign2 << " are not compatible signs.";
            //Exit stage right or left!
            break;
        }
        default:
            cout << "Not an option." << endl;
    } //End of Switch Statement
    //Exit the Program - Cleanup
    return 0;
}