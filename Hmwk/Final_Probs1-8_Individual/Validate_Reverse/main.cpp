/* 
 * File:   main.cpp
 * Author: Aamir
 * Created on Feb 9, 2021 @ 3:00 PM
 * Purpose:  Input something, output it reversed with some modifications
 * Note:Range should be 5 digits, 321 = 00321 reverse = 12300 before subtraction
 *      12300 - 999 = 11301 after subtraction
 *      12300 = 00321 = 321 after reversal and no subtraction
 */

//System Libraries Here
#include <iostream>//cin,cout,endl
#include <cstring> //strlen()
using namespace std;
//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
bool  inRange(const char [],unsigned short &);//Output true,unsigned or false
bool  reverse(unsigned short,signed short &);//Output true,short or false
short subtrct(signed short,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int SIZE=80;     //More than enough
    char  digits[SIZE];    //Character digits or not
    unsigned short unShort;//Unsigned short
    short snShort;         //Signed short
    
    //Input or initialize values Here
    cout<<"Reverse a number and subtract if possible."<<endl;
    cout<<"Input a number in the range of an unsigned short"<<endl;
    cin>>digits;
    
    //Test if it is in the Range of an unsigned short
    if(!inRange(digits,unShort)){
        cout<<"No Conversion Possible"<<endl;
        return 0;
    }
    
    //Reverse and see if it falls in the range of an signed short
    if(!reverse(unShort,snShort)){
        cout<<"No Conversion Possible"<<endl;
        return 0;
    }
    
    //Now subtract if the result is not negative else don't subtract
    snShort=subtrct(snShort,999);
    
    //Output the result
    cout<<snShort<<endl;
    
    //Exit
    return 0;
}
bool inRange(const char a[],unsigned short &n){
    int len = strlen(a);
    if(len<=5){ //To see if its less than or equal to 5 digits long
        for(int i=0;i<len;i++){
            if(a[i]<'0'||a[i]>'9'){
                return false; //If its not a #, return false
            }
        }
    }else{
        //cout<<"Longer than 5 digits\n";
        return false; //If the digits array is longer than 5
    } 
    n = atoi(a);
    if(n>=0&&n<=65535){
        return true;
    }
    return false;
}
bool reverse(unsigned short n,signed short &b){
    int reverse=0;  //Will hold the reversed number
    while(n>0){     //Reverses the number
        reverse=reverse*10+n%10;
        n/=10;
    }
    if(reverse>0&&reverse<10)reverse*=10000;          //If there's 1 digit, it should store as 5 digits by * 10000
    else if(reverse>=10&&reverse<100)reverse*=1000;   //For two digits, add three more digits to reach 5
    else if(reverse>=100&&reverse<1000)reverse*=100;  //For three digits, only 2 more are needed
    else if(reverse>=1000&&reverse<10000)reverse*=10; //For 4 digits, one more is needed
                                                      //Nothing needs to be done when you have 5 digits
    //cout<<reverse<<endl;
    if(reverse>=-32768&&reverse<=32767){
        b = reverse;
        return true;
    }
    return false;
}
short subtrct(signed short b,int m){
    short result = b;
    if(result>=1000){
    result-=m;
    }
    return result;
}