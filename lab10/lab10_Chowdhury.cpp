/*
Sabed Chowdhury
March 2, 2026
Lab 10, loop mechanims
*/
#include<iostream>

using namespace std;

int main(){
    cout<<"\n----- example 1: for loop basics"<<endl;

    for(int action = 0; action<5; action++){
        cout<<"Hello "<<action<<endl;
    }

    /* loop analysis table
    loop iteration | action | action<5 | cout<<"Hello "<<action | action++
    -------------------------------------------------------------------------------------------
    |   1          |    0   |   true   |    Hello 0             | action = 0+1 = 1
    |   2          |    1   |   true   |    Hello 1             | action = 1+1 = 2
    |   3          |    2   |   true   |    Hello 2             | action = 2+1 = 3
    |   4          |    3   |   true   |    Hello 3             | action = 3+1 = 4
    |   5          |    4   |   true   |    Hello 4             | action = 4+1 = 5
    |   6          |    5   |   false (stop the loop) 
    */
   cout<<endl;

    cout<<"\n----- example 2: for loop as an increament counter"<<endl;
    // counter from 1 to 10 (inclusive) with step of 1
    for(int x = 1; x <=10; x++){
        cout<<x<<"\t";
    }
    cout<<endl;

    cout<<"\n----- example 3: for loop as decrement counter"<<endl;
    // counter from 2 to -5 (inclusive) with step of 1
    for(int n = 2; n>= -5; n--){
        cout<<n<<"\t";
    }
    cout<<endl;

    cout<<"\n----- example 4: for loop as an increament counter with different steps"<<endl;
    // counter from 1 to 20 (exclusive) in a step of 3
    for(int m=1;m<20;m+=3){
        cout<<m<<"\t";
    }
    cout<<endl;

    cout<<"\n----- example 5: nested conditional statement within the loop"<<endl;
    // counter from -10 to 10, step of 3, count how many numbers are multipled of 5 within the counter
    int counter_5 = 0;
    for(int x = -10;x<=10;x += 3){
        cout<<x<<"\t";
        if(x%5==0){
            counter_5++;
        }
    }
    cout<<endl;
    cout<<"There is/are "<<counter_5<<" number/s multiplied of 5"<<endl;

    cout<<"\n ---- EXERCISE 1 "<<endl;

    int counter_2 = 0;
    for(int f = 21; f>= -21; f-=5){
        cout<<f<<"\t";
        if(f%2==0){
            counter_2++;
        }
    }
    cout<<endl;
    cout<<"There is/are "<<counter_2<<" number/s multiplied of 2"<<endl;

    cout<<"\n ---- EXERCISE 2 "<<endl;
    int usernumber;
    cout<<"Enter an initial number: ";
    cin>>usernumber;
    for(;usernumber<=30;usernumber+=4){
        cout<<usernumber<<"\t";
    }
    
    return 0;
}