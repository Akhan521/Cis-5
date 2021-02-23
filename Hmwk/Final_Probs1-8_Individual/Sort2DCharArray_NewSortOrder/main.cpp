/* 
 * Note:  This time you create the strcmp() function that takes into
 * account the new sort order.
 */

//System Libraries Here
#include <iostream>//cin,cout
#include <cstring> //strlen(),strcmp(),strcpy()
using namespace std;

//Global Constants Only, No Global Variables
//Allowed like PI, e, Gravity, conversions, array dimensions necessary
const int COLMAX=80;//Only 20 required, and 1 for null terminator

//Function Prototypes Here
int  read(char [][COLMAX],int &);//Outputs row and columns detected from input
void sort(char [][COLMAX],int,int, const char[],const char[]);//Sort by row using strcmp();
void print(const char [][COLMAX],int,int);//Print the sorted 2-D array
//int strcmp(char a[],char b[],char replace[],char with[]){
int strcmp(char [],char [],const char [],const char []);//Replace sort order

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int ROW=30;             //Only 20 required
    char array[ROW][COLMAX];      //Bigger than necessary 
    int colIn,colDet,rowIn,rowDet;//Row, Col input and detected
    char replace[COLMAX],with[COLMAX];//New sort order
    
    //Input the new sort order then sort
    cout<<"Modify the sort order by swapping these characters."<<endl;
    cin>>replace;
    cout<<"With the following characters"<<endl;
    cin>>with;
    cout<<"Read in a 2 dimensional array of characters and sort by Row"<<endl;
    cout<<"Input the number of rows <= 20"<<endl;
    cin>>rowIn;
    cout<<"Input the maximum number of columns <=20"<<endl;
    cin>>colIn;
    
    //Now read in the array of characters and determine it's size
    rowDet=rowIn;
    cout<<"Now input the array."<<endl;
    colDet=read(array,rowDet);
    
    //Compare the size input vs. size detected and sort if same
    //Else output different size
    if(rowDet==rowIn&&colDet==colIn){
        sort(array,rowIn,colIn,replace,with);
        cout<<"The Sorted Array"<<endl;
        print(array,rowIn,colIn);
    //Exit
    return 0;
    }
}
int read(char a[][COLMAX],int &rowDet){
    char str[COLMAX]; //Gonna store input as a char string
    int row = 0;
    int maxCol = 0;
    while(cin>>str){
        row++; //Keep track of what row we're on
        int len = strlen(str); //To determine the length of the input
        if(len>maxCol)         //Find the max column number
            maxCol=len;
        for(int i=0;i<len;i++){//Set the values from 1d to 2d array
            a[row-1][i]=str[i];//This is to actually set the values that are inputted into the 2D char array appropriately
        }
        a[row-1][len]='\0'; //To set the last element as the null terminator so that the program knows when to stop
    }
    rowDet=row;
    return maxCol;
}
void sort(char a[][COLMAX],int row,int col, const char replace[],const char with[]){
    for(int i=0;i<row-1;i++){
        for(int j=i+1;j<row;j++){
            if(strcmp(a[i],a[j],replace,with)>0){
                char temp[col];
                strcpy(temp,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],temp);
            }
        }
    }
}
void print(const char a[][COLMAX],int row,int col){
    for(int i=0;i<row;i++){
        cout<<a[i]<<endl;
    }
}
int strcmp(char a[],char b[], const char replace[], const char with[]){
    const int ASCII=128;
    int newOrder[ASCII]; //The ASCII indexed array used for comparisons
    for(int i=0;i<ASCII;i++){
        newOrder[i]=i;
    }
    for(int i=0;i<strlen(replace);i++){ //Swapping the with array elements with the replace array in the newOrder array 
        int temp;
        temp=newOrder[with[i]];
        newOrder[with[i]]=newOrder[replace[i]];
        newOrder[replace[i]]=temp;
    }
    int compare=0,i=0;
    while(newOrder[a[i]]!='\0'&&newOrder[b[i]]!='\0'&&newOrder[a[i]]==newOrder[b[i]]){
        i++;
    }
    return compare=(newOrder[a[i]]==newOrder[b[i]])?0:
                   (newOrder[a[i]]>newOrder[b[i]])?1:-1;
}