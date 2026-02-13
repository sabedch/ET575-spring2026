/*
Homework 2: Branching
Sabed Chowdhury
*/

// including these
#include<iostream>
#include<string>

// always need this
using namespace std;

// main function
int main(){

    cout<<"------ PROGRAM 1 ------"<<endl;
    
    // declare and collect value for variable
    int age = 0;
    cout<<"Enter your age: ";
    cin>>age;

    // if and else-if chain using the age value as a condition then prompting a specific string
    if (age < 0){
        cout<<"\nInvalid age. Please enter a valid age"<<endl;
    } 
    else if (age < 13){
        cout<<"\nNot eligible for any activities."<<endl;
    }
    else if (age < 18){
        cout<<"\nEligibe for youth activities."<<endl;
    }
    else if (age < 65){
        cout<<"\nEligible for adult activities."<<endl;
    }
    else if (age < 121){
        cout<<"\nEligible for senior activities."<<endl;
    }
    else { 
        // all excluded age ranges will be negative numbers and ages greater than 120
        cout<<"\nInvalid age. Please enter a valid age"<<endl;
    }

    cout<<"------ PROGRAM 2 ------"<<endl;

    // declare and collect values for variables
    int num1, num2;
    cout<<"Enter the first number: ";
    cin>> num1;
    cout<<"\nEnter the second number: ";
    cin>> num2;

    // calculate and store sum into int variable
    int sum = num1 + num2;

    // if and else-if and nested if chain to prompt output based on sums value
    if (sum < 0){
        cout<<"\nFalse alarm! The sum is "<<sum<<endl;
    }
    else if ((sum >= 1) && (sum < 101)){
        if (sum % 5 == 0){
            cout<<"\n"<<sum<<" is a pentagon"<<endl;
        }
        if (sum % 2 == 1){
            cout<<"\n"<<sum<<" is an odd guess"<<endl;
        }
    }
    else if (sum < 201){
        cout<<"\nThe new lucky number is "<<sum<<endl;
    }
    else if (sum < 1000){
        cout<<"\n"<<sum<<" is a dreaming number"<<endl;
    }
    else{
        // sum >= 1000
        if (sum % 2 == 0){
            cout<<"\n"<<sum<<" approaches to the infinite evenly!"<<endl;
        }
        if (sum >+ 2000){
            cout<<"\n"<<sum<<" approaches to the infinite and beyond!"<<endl;
        }
    }

    cout<<"------ PROGRAM 3 ------"<<endl;

    // declaring and collecting values for variables
    int num = 0;
    float temp = 0;
    float after = 0;
    cout<<"1. Celsius to Fahrenheit"<<endl;
    cout<<"2. Fahrenheit to Celsius"<<endl;
    cout<<"3. Kelvin to Celsius"<<endl;
    cout<<"4. Kelvin to Fahrenheit"<<endl;
    cout<<"5. Exit"<<endl;
    cout<<"Select an option from 1 to 5: ";
    cin>>num;
    cout<<"\n";

    // switch block with 6 paths and caculations on user input to prompt calculations
    switch (num)
    {
    case 1:
        cout<<"Enter the Celsius to be converted: ";
        cin>>temp;
        after = temp * (9/5) + 32;
        cout<<"\n"<<temp<<" Celsius is equal to "<<after<<" Fahrenheit"<<endl;
        break;
    case 2:
        cout<<"Enter the Fahrenheit to be converted: ";
        cin>>temp;
        after = (temp - 32)*(5/9);
        cout<<"\n"<<temp<<" Fahrenheit is equal to "<<after<<" Celsius"<<endl;
        break;
    case 3:
        cout<<"Enter the Kelvin to be converted: ";
        cin>>temp;
        after = temp - 273.15;
        cout<<"\n"<<temp<<" Kelvin is equal to "<<after<<" Celsius"<<endl;
        break;
    case 4:
        cout<<"Enter the Kelvin to be converted: ";
        cin>>temp;
        after = (temp - 273.15)*(9/5)+ 32;
        cout<<"\n"<<temp<<" Kelvin is equal to "<<after<<" Fahrenheit"<<endl;
        break;
    case 5:
        cout<<"EXITED"<<endl;
        break;
    default:
        cout<<"Invalid input. Please enter a valid option."<<endl;
        break;
    }
}