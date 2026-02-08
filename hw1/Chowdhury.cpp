/*
Homework 1: strings, string methods, and numerical variables
Sabed Chowdhury
*/

// header
#include<iostream>
#include<string>

using namespace std;

int main(){
    cout<<"---- Activity 1 ----"<<endl;

    // Declaring Variables
    string greeting = "Welcome to ";
    string city = "New York City ";
    string name = "";
    string final = "";
    int length = 0;
    int find = 0;

    // storing input
    cout<<"Enter a name: ";
    cin>>name;

    // concatenating strings
    final = greeting + city + name;
    cout<<"concatenated message:\t\t"<<final<<endl;

    // applying string methods
    length = final.length();
    find = final.find("me");
    final.replace(find,2,"%---%");
    
    // prompting 
    cout<<"Message Length:     \t\t"<<length<<endl;
    cout<<"Index of character'me':\t\t"<<find<<endl;
    cout<<"Replace 'me' with %---%:\t"<<final<<endl;

    cout<<"---- Activity 2 ----"<<endl;

    // Declaring Variables
    const float pi = 3.14159;
    float radius = 0.0;
    float height = 0.0;
    bool rgh;
    bool reh;
    bool rnegh;
    float volume = 0.0;

    // Storing User Input
    cout<<"Enter a radius: "<<endl;
    cin>>radius;
    cout<<"Enter a height: "<<endl;
    cin>>height;

    // adding values to bool variables
    rgh = radius > height;
    reh = radius == height;

    // calculating new values for float variables
    height = height * 3;
    radius = radius + 5;

    // adding value to a bool variable using logical and comparison operators
    rnegh = (radius != height) && (radius > height);

    // adding value to a float variable with calculations
    volume = pi*(radius*radius)*height;

    // prompts
    cout<<"Step 3) Is the radius greater than height?\t"<<rgh<<endl;
    cout<<"Step 4) Is the radius equal to height?\t\t"<<reh<<endl;
    cout<<"Step 5) Triple height =\t\t\t\t"<<height<<endl;
    cout<<"Step 5) Increased radius by 5 =\t\t\t"<<radius<<endl;
    cout<<"Step 6) Is the radius not equal to and greater than height ?\t"<<rnegh<<endl;
    cout<<"Step7) The volume of a right cylinder with radius "<<radius<<" and height "<<height<<" is =\n"<<volume<<"cm^3"<<endl;
}
