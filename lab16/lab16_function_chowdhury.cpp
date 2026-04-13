/*
Sabed Chowdhury
Lab 16, pointers and intro to array
April 13, 2026
*/
#include<iostream>

using namespace std;

// example 1: pointer and reference
void pointerreference(){
    int num = 12;
    char syn = 'T';
    string n = "Peter";
    
    // declare the pointers
    int* pointerint;
    char* pointerchar;
    string* pointerstring = &n; // declared and initialized a pointer

    // check a pointer ==> show memory address
    cout<<"int pointer "<<pointerint<<endl;

    // assign value to a pointer
    pointerint = &num;
    pointerchar = &syn;

    // check pointers' value ==> memory address
    cout<<"int pointer = "<<pointerint<<endl;
    cout<<"char pointer = "<<pointerchar<<endl;
    cout<<"string pointer = "<<pointerstring<<endl;

    // use deference operator to obtain the value of the pointer memory address
    cout<<"value of int pointer =    "<<*pointerint<<endl;
    cout<<"value of char pointer =   " <<*pointerchar<<endl;
    cout<<"value of the string pointer = "<<*pointerstring<<endl;

}

// example 2: pass pointer into a function
// pass a value
void printvalue(string n){
    cout<<"Value = "<<n<<endl;
}

//pass a pointer
void printaddress(string* n){
    cout<<"Pointer = "<<n<<endl;
}

// passing a reference value 
void printreference(string& n){
    cout<<"Pointer = "<<n<<endl;
}

// example 3 : array 
void introarray(){
    // declare an array of size 5
    int scores[5];

    // assign values to an array. use indexing to access each cell in an array. indexing starts from 0
    scores[0] = 90; // accessing the first (most-left) cell in array sports
    scores[1] = 70;
    scores[2] = 86;
    scores[3] = 92;
    scores[4] = 60;

    // find the average of the scores
    float average = (scores[0]+scores[1]+scores[2]+scores[3]+scores[4])/5.0;
    cout<<"The average is "<<average<<endl;

    // initialize an array
    char symbols[3] = {'%', '$', '#'};
    cout<<"The second symbol is = "<<symbols[1]<<endl;

    // intialize an array without an array's size
    string names[] = {"Peter", "Annie"};

    cout<<"The first name is = "<<names[0]<<endl;
}