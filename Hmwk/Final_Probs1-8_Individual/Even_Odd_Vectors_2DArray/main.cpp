/* 
 * File:   main.cpp
 * Author: Aamir
 * Created on Feb 9, 2021 @ 7:00 PM
 * Purpose:  Even, Odd Vectors and Array Columns Even, Odd
 * Note:  Check out content of Sample conditions in Hacker Rank
 * Input size of integer array, then array, output columns of Even, Odd
 * Vectors then Even, Odd 2-D Array
 */

//System Libraries Here
#include <iostream>//cin,cout
#include <vector>  //vectors<>
#include <iomanip> //Format setw(),right
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Allowed like PI, e, Gravity, conversions, array dimensions necessary
const int COLMAX=2;//Only 2 columns needed, even and odd

//Function Prototypes Here
void read(vector<int> &, vector<int> &);
void copy(vector<int>, vector<int>,int [][COLMAX]);
void prntVec(vector<int>, vector<int>,int);//int n is the format setw(n)
void prntAry(const int [][COLMAX],int,int,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int ROW=80;           //No more than 80 rows
    int array[ROW][COLMAX];     //Really, just an 80x2 array, even vs. odd
    vector<int> even(0),odd(0); //Declare even,odd vectors
    
    //Input data and place even in one vector odd in the other
    read(even,odd);
    
    //Now output the content of the vectors
    //          setw(10)
    prntVec(even,odd,10);//Input even, odd vectors with setw(10);
    
    //Copy the vectors into the 2 dimensional array
    copy(even,odd,array);
    
    //Now output the content of the array
    //                              setw(10)
    prntAry(array,even.size(),odd.size(),10);//Same format as even/odd vectors
    
    //Exit
    return 0;
}
void read(vector<int> &even, vector<int> &odd){
    int num; //Number of elements being passed
    cout<<"Input the number of integers to input.\n";
    cin>>num;
    cout<<"Input each number.\n";
    int nums;
    for(int i=0;i<num;i++){
        cin>>nums;
        if(nums%2) odd.push_back(nums);
        else even.push_back(nums);
    }
}
void prntVec(vector<int> even, vector<int> odd,int spcing){
    cout<<setw(spcing)<<"Vector"<<setw(spcing)<<"Even"<<setw(spcing)<<"Odd"<<endl;
    for(int i=0;i<(even.size()+odd.size());i++){ //Determine how many rows there will be displayed
        if(i<even.size()&&i>=odd.size())
            cout<<setw(spcing+spcing)<<even[i]<<setw(spcing)<<"";
        else if(i<even.size())
            cout<<setw(spcing+spcing)<<even[i]<<setw(spcing);
        else cout<<setw(spcing+spcing+spcing);
        if(i<odd.size())
            cout<<odd[i];
        if(i<even.size()||i<odd.size())
            cout<<endl;
        
    }
}
void copy(vector<int> even, vector<int> odd,int arr[][COLMAX]){
    for(int i=0;i<even.size();i++){
        arr[i][0]=even[i]; //Copy the even nums in the first column
    }
    for(int i=0;i<odd.size();i++){
        arr[i][1]=odd[i];  //Copy the odd nums in the second column
    }
}
void prntAry(const int arr[][COLMAX],int sz1,int sz2,int spcing){
    cout<<setw(spcing)<<"Array"<<setw(spcing)<<"Even"<<setw(spcing)<<"Odd"<<endl;
    for(int i=0;i<sz1+sz2;i++){
        if(i<sz1&&i>=sz2)                                                //If in the size of the even vector
            cout<<setw(spcing+spcing)<<arr[i][0]<<setw(spcing)<<"";  //Prints out the even number if it's in the size of the vector
        else if(i<sz1)
            cout<<setw(spcing+spcing)<<arr[i][0]<<setw(spcing);
        else cout<<setw(spcing+spcing+spcing);                   //Prints out spaces if not
        if(i<sz2)                                                //If in the size of the odd vector
            cout<<arr[i][1];                                 //Print out the odd number
        if(i<sz1||i<sz2)
            cout<<endl;
    }
}