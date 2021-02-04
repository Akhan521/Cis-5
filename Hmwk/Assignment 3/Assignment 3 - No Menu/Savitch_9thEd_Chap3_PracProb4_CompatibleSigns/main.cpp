/* 
 * File:   main.cpp
 * Author: Aamir
 * Created on January 15, 2021, 9:00 AM
 * Purpose:  Compatible Signs Problem
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    string sign1, sign2;
    //Initialize Variables
    cout << "Horoscope Program which examines compatible signs.\n";
    cout << "Input 2 signs.\n";
    cin >> sign1 >> sign2;
    //Map Inputs to Outputs -> Process
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
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}