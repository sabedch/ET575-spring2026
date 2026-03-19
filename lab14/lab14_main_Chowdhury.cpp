/*
Sabed Chowdhury
Lab 14, functions
March 18, 2026
*/
#include<iostream>
#include "lab14_function_Chowdhury.cpp"
using namespace std;

int main(){
    cout<<"\n ---- example 1: function calling function"<<endl;
    int calculate = calculatedb(2,3);
    cout<<calculate<<endl;

    cout<<"\n ---- example 2: recursive function ----"<<endl;
    cheers(4);

    cout<<"\n ---- example 3: recursive function ----"<<endl;
    int n = linearfunction(3);
    cout<<"The final result = "<<n<<endl;

    cout<<"\n ---- example 4: built-in functions ----"<<endl;
    int side1 = collectnumber();
    int side2 = collectnumber();
    float h = hypotenuse(side1, side2);
    printresult(side1,side2,h);

    cout<<"\n ---- EXERCISE ---- "<<endl;
    int x1 = collectg();
    int x2 = collectg();
    int y1 = collectg();
    int y2 = collectg();
    float d = distance(x1,x2,y1,y2);
    printres(x1,x2,y1,y2,d);
    return 0;
}