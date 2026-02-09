/*
Sabed Chowdhury
Feb 9, 26
lab 7, nested conditional statement
*/

#include<iostream>

using namespace std;

int main(){
    /*
    cout<<"---- example 1: nested conditional ----"<<endl;
    // use nested conditional statement to check if a number is positive (even or odd), negative (even or odd), or 0
    int number = -8;
    if(number>0){
        // cout<<number<<" is positive!"<<endl;
        if(number%2==0)
            cout<<number<<" is positive and even!"<<endl;
        else
            cout<<number<<" is positive and odd"<<endl;
    }
    else if (number<0){
        // cout<<number<<" is negative!"<<endl;
        if(number%2==0)
            cout<<number<<" is negative and even!"<<endl;
        else
            cout<<number<<" is negative and odd!"<<endl;
    }
    else{
        cout<<"The number is zero"<<endl;
    }

    cout<<"\n---- example 2: nested conditional ----"<<endl;
    //sort three numbers from the highest to the lowest number
    // declare variables
    int num1, num2, num3;
    // collect values
    cout<<"Enter three numbers: "<<endl;
    cin>>num1>>num2>>num3;
    // conditional statement
    if(num1>num2 && num1>num3){
        cout<<num1<<"num1 is the highest number"<<endl;
        if(num2>num3)
            cout<<num1<<"\t"<<num2<<"\t"<<num3<<endl;
        else
            cout<<num1<<"\t"<<num3<<"\t"<<num2<<endl;
    }
    else if(num2>num1 && num2>num3){
        cout<<num2<<"num2 is the highest number"<<endl;
        if(num1>num3)
            cout<<num2<<"\t"<<num1<<"\t"<<num3<<endl;
        else
            cout<<num2<<"\t"<<num3<<"\t"<<num1<<endl;
    }
    else{
        cout<<num3<<"num3 is the highest number"<<endl;
        if(num1>num2)
            cout<<num3<<"\t"<<num1<<"\t"<<num2<<endl;
        else
        cout<<num3<<"\t"<<num2<<"\t"<<num1<<endl;
    }

    cout<<"\n---- example 3: if-else operands ----"<<endl;
    // use operands to check if a number is even or odd
    /*
    if(num%2==0)
        cout<<"Even"<<endl;
    else
        cout<<"Odd"<<endl;
    */
/*
    int x = 5;
    cout<<"The number is "<<(x%2==0 ? "Even" : "Odd")<<endl;
*/
    cout<<"\n---- EXERCISE ----"<<endl;
    
    int budget;

    cout<<"Whats your budget?"<<endl;
    cin>>budget;

    if (budget < 0){
        cout<<"Invalid budget!"<<endl;
    }
    else if (budget < 10000){
        cout<<"Keep Saving!"<<endl;
    }
    else if (budget < 30001){
        if (budget < 20001)
            cout<<"With $"<<budget<<", you can afford an Economy Car: Compact Car."<<endl;
        else
            cout<<"With $"<<budget<<", you can afford an Economy Car: Mid-size Car."<<endl;
    }
    else if (budget < 70001){
        if (budget < 50001)
            cout<<"With $"<<budget<<", you can afford a Standard Car: Sedan."<<endl;
        else
            cout<<"With $"<<budget<<", you can afford a Standard Car: Luxury Sedan."<<endl;
    }
    else if (budget < 150001){
        if (budget < 100001)
            cout<<"With $"<<budget<<", you can afford a Performance-oriented Car: Sports Car."<<endl;
        else
            cout<<"With $"<<budget<<", you can afford a Performance-oriented Car: SuperCar."<<endl;
    }
    else {
        cout<<"With $"<<budget<<", you can afford High-end luxury cars: Maserati or Rolls-Royce?."<<endl;
    }
    return 0;
}