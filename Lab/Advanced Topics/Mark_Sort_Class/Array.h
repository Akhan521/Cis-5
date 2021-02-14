/* 
 * File:   Array.h
 * Author: Aamir
 *
 * Created on February 11, 2021, 11:46 AM
 */

#ifndef ARRAY_H
#define ARRAY_H

#include <cstdlib>
using namespace std;

const int SIZE = 1000;
class Array{
    private:
        unsigned int size;
        int data[SIZE];
        void setSize(int s){
            if(s>=1&&s<=SIZE)size=s;
            else size=2;
        }
        void iniData(){
            if(size>=1&&size<=SIZE){
                if(data==0){
                    for(int i=0;i<size;i++){
                        data[i]=0;
                    }
                }
            }
        }
    public:
        Array(int s){
            setSize(s);
            iniData();
        }
        void setData(int indx,int val){
            if(indx>=0&&indx<=size){
                data[indx]=val;
            }
        }
        int getSize(){
            return size;
        }
        int getData(int indx){
            if(indx>=0&&indx<=size)return data[indx];
            else exit(-1);
        }
};



#endif /* ARRAY_H */

