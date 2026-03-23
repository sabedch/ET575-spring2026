/*
Sabed Chowdhury
March 23, 2026
lab 15, random numbers
*/
#include<iostream>
#include<cstdlib>
#include<time.h>

using namespace std;

// example 1: rand() and srand() functions
int randomnumber(){
    srand(time(0));
    return rand();
}

// example 2: range of random numbers
// generate numbers between 0 and 9 (inclusive)
int random_0_9(){
    srand(time(0));
    return rand()%10;
}

// example 3: generate a number between 5 and 12 (inclusive)
int random_5_12(){
    srand(time(0));
    return 5 + rand()%8;
}

// example 4: match a number of a pair of dices
// function randomly generates number between 1 and 6
int rolldice(){
    srand(time(nullptr));
    return 1+rand()%6;
}
// function to check if two numbers are the same
bool matchdices(int roll1, int roll2){
    return roll1 == roll2;
}
// function to print result
void printdices(int roll1, int roll2, bool result){
    cout<<"is "<<roll1<<" the same as "<<roll2<<"? "<<result<<endl;
}