/* 
 * File:   main.cpp
 * Author: Aamir 
 * Created on February 2, 2021, 11:30 AM
 * Purpose:  Mark Sort
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
void markSrt(int [],int);
void swap1(int &,int &);
void fillAry(int [],int);
void prntAry(int [],int,int);
//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    const int SIZE=100;//Size of the Array
    int array[SIZE];   //Array
    //Initialize Variables
    fillAry(array,SIZE);
    prntAry(array,SIZE,10);
    //Map Inputs to Outputs -> Process
    markSrt(array,SIZE);
    //Display Inputs/Outputs
    prntAry(array,SIZE,10);
    //Exit the Program - Cleanup
    return 0;
}
void markSrt(int array[],int SIZE){
    for(int i=0;i<SIZE-1;i++){
        for(int j=i+1;j<SIZE;j++){
        if(array[i]>array[j])
            swap1(array[i],array[j]);
        }
    }
}
void swap1(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void prntAry(int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void fillAry(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;//[10,99]
    }
}