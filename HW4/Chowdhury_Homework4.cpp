/*
Sabed Chowdhury
Homework 4: Loops
*/

#include<iostream>
using namespace std;

int grid = 11; // global variable like you asked

int main(){
    cout<<"\n ----- Question 1 ----- "<<endl;
    int num = 0;
    cout<<"Enter a number: ";
    cin>>num;
    do
    {
        if(num>=10){
            cout<<num<<" is a valid number!"<<endl;
        }else{
            cout<<num<<" is invalid! Please enter a number greater than 10: ";
            cin>>num;
            if(num>=10){
                cout<<num<<" is a valid number!"<<endl;
                break; // very good break
            }
        }
    } while (num<10);

    cout<<"\n ----- Question 2 ----- "<<endl;
    int num1, num2, min, max;
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;
    if(num1>num2){ // min and max finding algorithm
        max = num1;
        min = num2;
    }else{
        max = num2;
        min = num1;
    }
    cout<<"\nRESULT = ";
    while(min<=max){ // yep
        cout<<min<<" ";
        min++;
    }
    cout<<"\n";

    cout<<"\n ----- Question 3 ----- "<<endl;
    for(int r = 1; r<=grid;r++){
        for(int c = 1; c<=grid;c++){
            if(((c==4 || c ==5) && (r>=3 && r<=10)) || ((c>=6 && c<=8) && (r==4 || r==5))){ //  a little complicated for the reader, not my problem
                cout<<"# ";
            }else{
                cout<<". ";
            }
        }
        cout<<"\n"; // make single line output into grid
    }
}