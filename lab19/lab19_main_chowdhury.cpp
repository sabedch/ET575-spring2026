/*
Sabed Chowdhury
April 22, 2026
Lab 19, 2D arrays
*/
const int COLSIZE = 5;
const int colsize2 = 4;
#include<iostream>
#include<cmath>
#include<time.h>
#include<cstdlib>
using namespace std;
#include "lab19_function_chowdhury.cpp"



int main(){
    cout<<"\n ----- Example 1: 2D array"<<endl;
    // initialize a 2d array
    int rowsize = 4;
    int a[rowsize][COLSIZE] = {
        {4,8,-12},
        {1,-8,3,5,7},
        {-6,2,9}
    };

    // call the print function
    print2d(a,rowsize);

    cout<<"\n----- Example 2: sum of all positive even numbers"<<endl;
    printsum(sumevenpositive(a,rowsize));

    cout<<"\n ----- EXERCISE"<<endl;
    int rowsize2 = 3;

    int a2[rowsize2][colsize2];

    char again;
    do
    {
        populate(a2, rowsize2, colsize2);
        printvaluearray(a2, rowsize2, colsize2);
        cout<<average(a2, rowsize2, colsize2)<<endl;
        cout<<"Type 'y' for another run: ";
        cin>>again;
        if(again!='y'){
            break;
        }
    } while (again == 'y');
    
    return 0;
}