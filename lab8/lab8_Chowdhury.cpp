/*
Sabed Chowdhury
Feb 11, 2026
lab 8 - control flow using switch-case statement
*/
#include<iostream>

using namespace std;

int main() {
    cout<<"\n---- example 1: switch-case ----"<<endl;
    // use switch-case statement to ask the user to select a dayoff
    // declare variables
    int day;
    string dayoff = " ";
    // prompt message
    cout<<"Select a dayoff: "<<endl;
    cout<<"1 for Monday"<<endl;
    cout<<"2 for Tuesday"<<endl;
    cout<<"3 for Wednesday"<<endl;
    cout<<"4 for Thursday"<<endl;
    cout<<"5 for Friday"<<endl;
    // collect the dayoff
    cin>>day;

    // switch-case statement
    switch (day)
    {
    case 1:
        dayoff = "Monday";
        break;
    case 2:
        dayoff = "Tuesday";
        break;
    case 3:
        dayoff = "Wednesday";
        break;
    case 4:
        dayoff = "Thursday";
        break;
    case 5:
        dayoff = "Friday";
        break;
    default:
        dayoff = "invalid";
        break;
    }

    // prompt result
    cout<<"Your dayoff is "<<dayoff<<endl;

    cout<<"\n---- example 2: switch-case ----"<<endl;
    // use switch-case statement to pick a gender
    // declare variables
    char gender;
    // prompt message
    cout<<"Select a gender: "<<endl;
    cout<<"f for female"<<endl;
    cout<<"m for male"<<endl;
    cout<<"o for other"<<endl;
    //collect gender
    cin>>gender;

    //switch-case statement
    switch (gender)
    {
    case 'f': 
    case 'F':
        cout<<"Gender = Female"<<endl;
        break;
    case 'm': case 'M':
        cout<<"Gender = Male"<<endl;
        break;
    case 'o': case 'O':
        cout<<"Gender = Other"<<endl;
        break;
    default:
    cout<<"Gender = Undefinded"<<endl;
        break;
    }

    cout<<"\n---- EXERCISE ----"<<endl;
    // declare variables
    int num1;
    int num2;
    char op;
    int result;

    // collect values
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"\nEnter the second number: ";
    cin>>num2;
    cout<<"\nChoose an operation (+, -, *, /, %, q to quit): ";
    cin>>op;

    // switch-case
    switch (op)
    {
    case '+':
        result = num1 + num2;
        cout<<"Result: "<< num1 << " " <<op<< " " << num2 << " = "<< result <<endl;
        break;
    case '-':
        result = num1 - num2;
        cout<<"Result: "<< num1 << " " <<op<< " " << num2 << " = "<< result <<endl;
        break;
    case '*':
        result = num1 * num2;
        cout<<"Result: "<< num1 << " " <<op<< " " << num2 << " = "<< result <<endl;
        break;
    case '/':
        if (num2 == 0){
            cout<<"Error: Invalid Input"<<endl;
        } else{
            result = num1 / num2;
        cout<<"Result: "<< num1 << " " <<op<< " " << num2 << " = "<< result <<endl;
        }
        break;
    case '%':
        result = num1 % num2;
        cout<<"Result: "<< num1 << " " <<op<< " " << num2 << " = "<< result <<endl;
        break;
    case 'q':
        break;
    default:
        cout<<"Error: Invalid Input"<<endl;
        break;
    }

    return 0;
}