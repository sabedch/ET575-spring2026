/*
Sabed Chowdhury
Feb 4, 2026
lab 6, branching, control flow
*/
#include<iostream>

using namespace std;

int main(){
    cout<<"\n----- example 1: bool variables -----"<<endl;
    // bool variable returns a 1 for True or a 0 for False
    bool ispositive;
    int number;

    cout<<"Enter a number: ";
    cin>>number;

    ispositive = number >= 0;

    cout<<"Is "<<number<<" positive? "<<ispositive<<endl;

    cout<<"\n----- example 2: if statement -----"<<endl;
    // if statement will run codes in between the curly braces if the statement is TRUE.
    int num1 = 8;
    int num2 = 5;

    if(num1 == num2){
        cout<<"the numbers are equal"<<endl;
    }

    cout<<"End of example 2"<<endl;

    cout<<"\n----- example 3: if-else statement -----"<<endl;
    // if-else works as a switch. If 'if' statement is true, the program will run the codes of the if statement and ignore the code of the 'else' statement
    // example to check which number, num1 or num2, is greater.
    if(num1>num2){
        cout<<"num1 is greater than num2"<<endl;
    }
    else{
        cout<<"num2 is greater than num1"<<endl;
    }

    cout<<"\n----- example 4: multiway statement -----"<<endl;
    // multiway checks more than 2 conditions
    // example compare if num1 is equal to, greater than, less than num2
    if (num1==num2){
        cout<<"num1 is equal to num2"<<endl;
    }
    else if(num1>num2){
        cout<<"num1 is greater than num2"<<endl;
    }
    else{
        cout<<"num2 is greater than num1"<<endl;
    }

    cout<<"\n----- example 5: multiway statement: find the color depending of the wavelength -----"<<endl;
    /*
    - Ultraviolet: less than 379 nm and greater than or equal to 10 nm
    - Blue: 380 nm to 520 nm, inclusive
    - Green: 521 nm to 590 nm, inclusive
    - Red: 591 nm to 740 nm
    - Infrared: more than 741 nm
    - Any wavelength less than 10 nm is undefined
    */

    // declare variables
    int wavelength = 0;
    string color;

    // collect the wavelength
    cout<<"Enter a wavelength: "<<endl;
    cin>>wavelength;

    // multiway condition statement
    if(wavelength<=379 && wavelength>=10){
        color = "ultraviolet";
    }
    else if(wavelength<=520 && wavelength>=380)
        color = "blue";
    else if(wavelength<=590 && wavelength>=521)
        color = "green";
    else if(wavelength<=740 && wavelength>=591)
        color = "red";
    else if(wavelength>=741)
        color = "infrared";
    else
        color = "undefined";

    // print result
    cout<<"Wavelength of "<<wavelength<<" emits color "<<color<<endl;

    cout<<"\n ----- EXERCISE -----"<<endl;
    // declare the variables
    char gpa = ' ';
    float final_exam = 0;
    float labs = 0;
    float homework = 0;
    float grade = 0;

    // collect data: final_exam, labs, and homework
    cout<<"Enter the grade for the final exam: "<<endl;
    cin>>final_exam;
    cout<<"Enter the grade for the labs: "<<endl;
    cin>>labs;
    cout<<"Enter the grade for the homework: "<<endl;
    cin>>homework;

    // calculate the grade = final_exam *0.5 + labs*0.3 + homework*0.2
    grade = final_exam *0.5 + labs*0.3 + homework*0.2;

    // multiway condition
    if(grade<=100 && grade>=90){
        gpa = 'A';
    }
    else if(grade<=89 && grade>=80)
        gpa = 'B';
    else if(grade<=79 && grade>=70)
        gpa = 'C';
    else if(grade<=69 && grade>=60)
        gpa = 'D';
    else if(grade<=59)
        gpa = 'F';
    else
        gpa = ' ';

    // print result
    cout<<"A final grade of "<<grade<<" is equivalent to a GPA of "<<gpa<<endl;

    return 0;
}