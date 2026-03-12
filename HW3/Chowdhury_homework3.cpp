/*
Sabed Chowdhury
Homework 3 - for loop
*/

#include<iostream>

using namespace std;

int main(){
    cout<<"\n ----- PROGRAM 1 ----- "<<endl;
    // declare variables
    int pos = 0, neg = 0, zer = 0;
    // looping user input with calculation to up vars based on if statement results
    for(int i = 0; i<10 ; i++){
        int num;
        cout<<"Enter a number: "<<endl;
        cin>>num;
        if(num>0){
            pos++;
        }else if(num<0){
            neg++;
        }else{
            zer++;
        }
    }
    cout<<"Total positive numbers = "<< pos<<endl;
    cout<<"Total negative numbers = "<<neg<<endl;
    cout<<"Total zeros = "<<zer<<endl;

    cout<<"\n ----- PROGRAM 2 ----- "<<endl;
    int days = 0;
    int total = 0;
    int avg = 0;
    int count = 0;
    // var declaration
    cout<<"Enter the number of days: "<<endl;
    cin>>days;
    // weird for loop syntax due to days being declared outside loop
    for( ; days>0 ; days--){
        int sales = 0; // resets for each iteration on purpose
        cout<<"Enter sales figure for day "<<count+1<<endl;
        cin>>sales;
        total += sales; // add days sales to total
        count++; // used in place of the days var
    }
    avg = total/count;
    cout<<"Total sales $"<<total<<" for "<<count<<" days. Average daily sales $"<<avg<<endl;
}