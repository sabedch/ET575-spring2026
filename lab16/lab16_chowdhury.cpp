/*
Sabed Chowdhury
Lab 16, pointers and intro to array
April 13, 2026
*/
#include<iostream>

using namespace std;

#include "lab16_function_chowdhury.cpp"

int main(){
    cout<<"\n---- Example 1: pointer and reference "<<endl;
    pointerreference();

    cout<<"\n----- Example 2: passing pointer and reference to a function "<<endl;
    string something = "Hello World!";
    printvalue(something);
    printaddress(&something);
    printreference(something);

    cout<<"\n----- Example 3: intro to array "<<endl;
    introarray();

    cout<<"\n----- Example 4: length of an array "<<endl;
    lengtharray();

    cout<<"\n----- Example 5: looping through an array "<<endl;
    looparray();

    cout<<"\n----- Example 6: pass an array to a function "<<endl;
    // declare an array
    const int s = 3;
    int numbers[s];
    
    // fill up the array with data
    fillup(s,numbers);

    // print the values in an array
    printarray(s,numbers);

    // print the max value
    int m = maxnumber(s,numbers);
    cout<<"The maximum number is "<<m<<endl;

    cout<<"\n----- EXERCISE -----"<<endl;
    // declare an array with 6 values ==> fixed length array
    int scores[5];

    // assign value to each item in array 'scores'
    scores[0] = 60;
    scores[1] = 90;
    scores[2] = 75;
    scores[3] = 88;
    scores[4] = 100;
    
    // calling my method
    minnumber(scores);

    return 0;
}
