/*
Sabed Chowdhury
April 26, 2026
Homework 8 - 2D Array
*/

#include<iostream> 
using namespace std; 

int ro, co;
const int ROWCOL_ARRAY = 4; 

void search(int arr[ROWCOL_ARRAY][ROWCOL_ARRAY], int target){
    int found = 0;
    for(int r = 0;r<ROWCOL_ARRAY;r++){
        for(int c = 0; c<ROWCOL_ARRAY;c++){
            if(arr[r][c]==target){
                ro = r;
                co = c;
                found = 1;
            } 
        }
    }
    if(found==0){
        ro=-1;
        co=-1;
    }
}

void print(int target){
    if(ro==-1){
        cout<<"Number "<<target<<" was not found"<<endl;
    }else{
        cout<<"Number "<<target<<" was found in row "<<ro<<" and column "<<co<<endl;
    }
}

int main(){ 
    int ar[ROWCOL_ARRAY][ROWCOL_ARRAY] { 
        {1,2,3,4}, 
        {5,6,7,8}, 
        {9,10,11,12}, 
        {13,14,15,16} 
    };

    int target;
    cout<<"\nWhat number do you want to search for: ";
    cin>>target;
    cout<<endl;

    search(ar, target);
    print(target); 

    return 0; 
} 