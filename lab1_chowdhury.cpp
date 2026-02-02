/*
Sabed Chowdhury
Jan 26, 2026
lab 1, iostream
*/

//CLASS EXAMPLES

// header library
#include<iostream>

using namespace std;

// main function is the executable part of your c++ file
int main(){
    cout<<"\nExample 1: output stream, cout "<<endl<<endl;
    cout<<"\tWelcome to C++ "<<endl;

    cout<<"\nExample 2: declaring variables "<<endl;
    // declaring variables
    int number;
    string username;
    char symbol;

    // assign value to a variable
    username = "peterpan123";
    symbol = '%';
    number = 9;

    // print value in a variable
    cout<<"Given username = "<<username<<endl;
    cout<<"Given number = "<<number<<endl;
    cout<<"Given symbol = "<<symbol<<endl;

    cout<<"\nExample 3: console in, cin"<<endl;
    // declare variables
    float n = 3.5;
    string lastname;

    // collect last name from the user (Terminal)
    cout<<"Enter a last name: ";
    cin>>lastname;

    // print result
    cout<<"Welcome to C++ "<<lastname<<" Your rate is "<<n<<endl;

    cout<<"\nEXERCISE"<<endl;

    // Declaring variables
    string country;
    char gender;
    int zipcode;
    float rate;

    //Saving input to variables
    cout<<"Enter a country: ";
    cin>>country;
    cout<<"\nEnter a gender: ";
    cin>>gender;
    cout<<"\nEnter a zipcode: ";
    cin>>zipcode;
    cout<<"\nEnter a rate: ";
    cin>>rate;

    // Printing collected data
    cout<<"\nEntered country:\t"<<country;
    cout<<"\nSelected gender:\t"<<gender;
    cout<<"\nZip code:\t"<<zipcode;
    cout<<"\nTax rate:\t"<<rate;
    return 0;
}