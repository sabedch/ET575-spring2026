/*
Sabed Chowdhury
March 23, 2026
lab 15, random numbers
*/
#include<iostream>

using namespace std;

#include "lab15_function_Chowdhury.cpp"

int main(){
    cout<<"\n --- example 1: random number"<<endl;
    cout<<randomnumber()<<endl;

    cout<<"\n --- example 2:random number between 0 and 9"<<endl;
    cout<<random_0_9()<<endl;

    cout<<"\n --- example 3:random number between 5 and 12"<<endl;
    cout<<random_5_12()<<endl;

    cout<<"\n --- example 4: matching numbers"<<endl;
    int roll1 = rolldice();
    int roll2 = rolldice();
    bool resultmatch = matchdices(roll1, roll2);
    printdices(roll1, roll2, resultmatch);

    cout<<"\n --- EXERCISE --- "<<endl;
    int num1 = ran();
    int num2 = ran();
    chek(num1, num2);
    prin(chek);
    
    return 0;
}