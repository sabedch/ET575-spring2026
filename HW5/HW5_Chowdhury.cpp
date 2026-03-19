/*
Sabed Chowdhury
Homework 5 - Functions
March 19, 2026
*/

#include<iostream>
#include<cmath>
using namespace std;

// PROGRAM 1
int speed(){
    int spd;
    cout<<"Enter a wind speed: ";
    cin>>spd;
    if((spd>0) && (spd<100)){
        return spd;
    }else{
        cout<<"Error!"<<endl;
        return speed();
    }
}

int temp(){
    int tmp;
    cout<<"Enter a temp: ";
    cin>>tmp;
    if((tmp<=10) && (tmp>-90)){
        return tmp;
    }else{
        cout<<"Error!"<<endl;
        return temp();
    }
}

float windspeed(int wndspd, int tp){
    return 33 - (sqrt( (10 * sqrt(wndspd)) - wndspd + 10.5)) * (33 - tp);
}

void prompt_result(float ws){
    cout<<"The wind index is: "<<ws<<endl;
}

// PROGRAM 2
int collectNumber(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    return n;
}

bool inOrder(int n1, int n2, int n3){
    if((n1>n2) && (n2>n3)){
        return true;
    }else{
        return false;
    }
}

int runProgram(int n1, int n2, int n3, bool desc_order){
    cout<<"The numbers "<< n1 << " " << n2 << " " << n3 << " are in descending order: "<< desc_order<<endl;
    string answer = "";
    do {
        cout<<"Do you want to run the program again? Enter y or n: ";
        cin>> answer;
        if (answer == "y"){
            int num1 = collectNumber();
            int num2 = collectNumber();
            int num3 = collectNumber();
            bool desc_order = inOrder(num1,num2,num3);
            runProgram(num1,num2,num3,desc_order);
            answer = "";
        }else{
            return 0;
        }
    }while (answer=="y");
    return 0;
}
int main(){
    cout<<"\n---- PROGRAM 1 ----"<<endl;
    int s = speed();
    float t = temp();
    prompt_result(windspeed(s,t));

    cout<<"\n---- PROGRAM 2 ----"<<endl;
    int num1 = collectNumber();
    int num2 = collectNumber();
    int num3 = collectNumber();
    bool desc_order = inOrder(num1,num2,num3);
    runProgram(num1,num2,num3,desc_order);
    return 0;
}