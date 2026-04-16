/*
Sabed Chowdhury
April 16, 2026
Homework 7 - Loop in array
*/

#include <iostream> 
#include <cstdlib> 
#include <time.h> 

using namespace std; 

//function to collect the size of an array 
int collect_size(){  
    int size;
    cout<<"\nGive me a size: ";
    cin>>size;
    return size;
} 

//function to populate an array 
void populate_numbers(int *ar, int s){ 
// use loop to RANDOMLY generates number between 1 and 99 
    for(int i = 0; i<s; i++){
        ar[i] = (rand()%99)+1;
    }
} 

//function to print all numbers in an array 
void print_numbers(int *ar, int s){ 
// use loop to print all numbers in an array 
    for(int i=0;i<s;i++){
        cout<<ar[i]<<" ";
    }
    cout<<"\n";
} 

//function to find the minimum number in an array 
int array_min(int *ar, int s) { 
    int min = ar[0];
    for(int i = 0; i<s ; i++){
        if(min>ar[i]){
            min = ar[i];
        }
    }
    return min;
} 

//function to return the average of all numbers in an array 
float array_avg(int *ar, int s) { 
    float sum = 0.0;
    for(int i = 0; i < s;i++){
        sum += ar[i];
    }
    float avg = sum/s;
    return avg;
} 

int main() { 
    srand(time(0)); 

    // declare variable num to save the size of an array 
    int num = collect_size();

    // declare an array array_name with size num 
    int array_name[num];
    
    // initial an array with size num       // this is so hard to understand.
    int a[num]; 
    // use loop to ask the user to enter each value of the array 
    for(int i = 0; i<num;i++){
        int n;
        cout<<"Enter number: ";
        cin>>n;
        a[i]=n;
    }                                       // you want us to create two different arrays, and then have a user fill out an array and then have a function rewrite the same array?

    populate_numbers(a, num); 
    print_numbers(a, num); 

    cout << "Minimum number: \t" << array_min(a, num) << endl; 
    cout << "Average of numbers: \t" << array_avg(a, num) << endl; 

    return 0; 
} 