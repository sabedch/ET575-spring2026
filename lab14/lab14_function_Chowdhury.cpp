/*
Sabed Chowdhury
Lab 14, functions
March 18, 2026
*/
#include<iostream>

using namespace std;

// example 1: function calling function
int multiply(int a, int b){
    return a*b;
}

int calculatedb(int x, int y){
    //function calling function
    return 2*multiply(x,y);
}

// example 2: recursive function
void cheers(int n){
    // base case
    if(n == 1){
        cout<<"STOP"<<endl;
    }
    // recursive case
    else{
        cout<<(n*2)<<endl;
        cheers(n-1);
    }
}

/* TABLE OF ANALYSIS
function
iteration   |   int n   |   if(n==1)    | else

        HAD LUNCH
*/

// example 3: linear recursive function
int linearfunction(int m){
    if(m>10){
        return -6;
    }
    else{
        return (linearfunction(m+2) * (m-4));
    }
}

// TABLE ANALYSIS
//      HAD LUNCH

// example 4: built-in functions
// program to calculate the hypotenuse of a right triangle
// function collects a number and return the number if its positive
int collectnumber(){
    int n;
    cout<<"Enter a positive number: ";
    cin>>n;

    // recursive function to validate if n is positive
    if(n<=0){
        cout<<"Error! ";
        return collectnumber();
    }
    else{
        return n;
    }
}
#include<cmath>

// calculate and return the hypotenuse
float hypotenuse(int side1, int side2){
    return  sqrt(pow(side1,2) + pow(side2, 2));
}

// print results
void printresult(int side1, int side2, float h){
    cout<<"The hypotenuse of a triangle with sides "<<side1<<" and "<<side2<<" is = "<<h<<endl;
}