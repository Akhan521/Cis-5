/* 
 * Purpose:  Searching for multiple occurrence of patterns
 * Note:  cout proceeds to null terminator, cin reads to end of line
 *        for character arrays
 * 
 */

//System Libraries Here
#include <iostream>//cin,cout,getline()
#include <cstring> //strlen()
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//PI, e, Gravity, or conversions

//Function Prototypes Begins Here
//srch1 utility function Input->start position, Output->position found or not
//srch1 is a simple linear search function, repeat in srchAll till all found
//srch1 Input->sentence, pattern, start position Output-> position found
//Remember arrays start at index/position 0
//srchAll Input->sentence, pattern Output->position array
int  srch1(const char [],const char [],int);//Search for 1 occurrence
void srchAll(const char [],const char [],int []);//Search for all occurrences
void print(const char []);//Print the character arrays
void print(const int []); //Print the array of indexes where the pattern found

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int LINE=81;               //Size of sentence or pattern to find
    char sntnce[LINE],pattern[LINE]; //80 + null terminator
    int match[LINE];                 //Index array where pattern was found
    
    //Input a sentence and a pattern to match
    cout<<"Match a pattern in a sentence."<<endl;
    cout<<"Input a sentence"<<endl;
    cin.getline(sntnce,LINE);
    cout<<"Input a pattern."<<endl;
    cin.getline(pattern,LINE);
    
    //Search for the pattern
    //Input the sentence and pattern, Output the matching positions
    //Remember, indexing starts at 0 for arrays.
    srchAll(sntnce,pattern,match);
    //int pos =srch1(sntnce,pattern,0);
    //Display the inputs and the Outputs
    cout<<endl<<"The sentence and the pattern"<<endl;
    print(sntnce);
    print(pattern);
    cout<<"The positions where the pattern matched"<<endl;
    print(match);
    //cout<<pos;
    //Exit
    return 0;
}
int srch1(const char a[],const char b[],int start){
    int lenSnt = strlen(a); //Length of the sntnce to stay in bounds
    int lenPat = strlen(b); //Length of the pattern 
    int i=start,j=0;        //Idx counters
    while(i<lenSnt){     
        if(a[i]==b[j]){     //Checking each letter for similarities one-by-one, if found, increment both indxs
            i++; 
            j++;
        }
        if(j==lenPat){      //If j reaches the length of the pattern, you know that you found the word
            return i-j;     //For ex. case 2: if it was at idx 2, i wouldve been 3 and j wouldve been 1
        } 
        else if(i<lenSnt&&a[i]!=b[j]){ //Else, go on to the next letter in sntnce and start comparing over
            i++;
        }
    }
    return -1; //If no match was found
}
void srchAll(const char a[],const char b[],int c[]){
    int start=0; //For where to start the search on each iteration
    int idx=0;   //TO hold the index found
    int cnt=0;   //Used to add to and access the int array 
    bool found;
    do{
        found=false;
        idx = srch1(a,b,start);
        if(idx!=-1){                //If indx is found 
            c[cnt]=idx;             //Add to the match array
            cnt++;
            start = idx + 1;        //Start the search from the next position after what was found
            found=true;
        }
        else c[cnt]=-1;
    }while(found);
}
void print(const char a[]){
    int len = strlen(a);
    for(int i=0;i<len;i++){
        cout<<a[i];
    }
    cout<<endl;
}
void print(const int a[]){
    int i=0;
    if(a[i]==-1)cout<<"None\n";
    while(a[i]!=-1){
        cout<<a[i]<<endl;
        i++;
    }
}