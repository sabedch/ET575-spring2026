/*
Sabed Chowdhury
April 20, 2026
Lab 18: array application
*/

#include<iostream>
#include "lab18_functions_chowdhury.cpp"
#include<cmath>
using namespace std;

int main(){
    cout<<"\n ---- example 1: search function"<<endl;
    // declare the array size
    const int ARRAYSIZE = 5;
    // declare the array
    int a[ARRAYSIZE];
    // declare the variable to save the array size if there is less than five consecutive positive numbers
    int listsize;
    // declare the variable to save target
    int searchnumber = 20;

    // call function fillarray
    fillarray(a,listsize,ARRAYSIZE);
    // testing listsize
    cout<<listsize<<endl;

    // call function 2
    printelement(a, listsize);

    // call function 3
    int foundindex = search(a, listsize, searchnumber);
    cout<<"Test search index "<<foundindex<<endl;

    cout<<"\n ---- EXERCISE ---- "<<endl;
    
    const int ARRAYSIZE2 = 5;
    int a2[ARRAYSIZE2];
    int listsize2;
    int avg;
    int closest;

    collectnumber(a2, listsize2, ARRAYSIZE2);
    avg = averagenumber(a2, listsize2);
    closest = closestmean(a2,listsize2,avg);
    printresult(avg, closest);
    
    return 0;
}