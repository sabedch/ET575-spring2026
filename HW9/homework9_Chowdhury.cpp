/*
Sabed Chowdhury
April 26, 2026
Homework 9 - Arrays Application
*/

#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

int arraysize(){
    int num;
    do
    {
        cout<<"Enter an array size between 1 and 100: ";
        cin>>num;
    } while (num<1||num>100);
    cout<<endl;
    return num;
}

void randPopulate(int arr[], int sizearray){
    for(int c = 0; c<sizearray;c++){
        arr[c]=rand()%21+10;
    }
}

void print(int arr[], int sizearray){
    for(int c = 0; c<sizearray;c++){
        cout<<arr[c]<<"\t";
    }
    cout<<endl;
}

void reverse(int arr[], int sizearray){
    int temp;
    for(int c = 0;c<sizearray/2;c++){
        temp = arr[c];
        arr[c]=arr[sizearray-1-c];
        arr[sizearray-1-c]=temp;
    }
}
int main() { 
    srand(time(0));
    int sizearray = arraysize();   // Get array size 
    int noise[sizearray];     // Declare array with the obtained size 

    //Populate array with random values 
    randPopulate(noise, sizearray);

    // Display original array 
    cout << "Original Set:" << endl;
    print(noise, sizearray); 

    // Reverse the array 
    reverse(noise, sizearray);   

    // Display reversed array 
    cout << endl << "Reversed Set:" << endl;
    print(noise, sizearray); 

    return 0; 
}