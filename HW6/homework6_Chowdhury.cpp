/*
Sabed Chowdhury
Homework 6 - More about functions, reference and pointer
March 19, 2026
*/

#include<iostream>
using namespace std;

int main(){
    int* ptr;
    int var = 7;
    int foo = 21;
    ptr = &var;
    cout<<"Pointer 1 = "<<ptr<<endl;
    cout<<"value 1 = "<<*ptr<<endl;
    ptr = &foo;
    cout<<"Pointer 2 = "<<ptr<<endl;
    cout<<"value 2 = "<<*ptr<<endl;
    int& ref = var;
    cout<<"ref = "<<&ref<<endl;
}
