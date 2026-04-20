/*
Sabed Chowdhury
April 20, 2026
Lab 18: array application
*/
#include<iostream>
#include<cmath>
using namespace std;
// example 1: search program
// function 1: function to collect up to 5 consecutive positive integers
// the collection will stop if a negative number is entered.
// If there is less than 5 numbers collected, the function will reference to the array size
void fillarray(int *arr, int &numberuserindex, int arraysize){
    int number = 0, index = 0;
    do{
        cout<<"Enter a positive number: ";
        cin>>number;
        if(number>0){
            arr[index] = number;
            index++;
        }
    }while(number>0 && index < arraysize);

    // update the index of the last positive number
    numberuserindex = index;
}
// function 2: print each element in an array
void printelement(int *arr, int sizearray){
    for(int i = 0; i<sizearray; i++){
        cout<<arr[i]<<" \t";
    }
    cout<<endl;
}

// function 3: search function
int search(int *arr, int numberuserindex, int target){
    int index = 0;
    bool found = false;

    while(!found && index<numberuserindex){
        if(target == arr[index])
            found = true;
        else
            index++;
    }

    if(found)
        return index;
    else
        return -1;

}

// EXERCISE
void collectnumber(int *arr, int &listsize, int arraysize){
    int number = 0;
    int index = 0;
    do{
        cout<<"Enter a number: ";
        cin>>number;
        if(number != 0){
            arr[index] = number;
        }
        index++;
    }while(number!=0 && index<5);
    listsize = index;
}

int averagenumber(int *arr, int listsize2){
    int sum = 0;
    for(int i = 0; i<listsize2;i++){
        sum += arr[i];
    }
    return sum/listsize2;
}

int closestmean(int *arr, int listsize2, int avg){
    int close = abs(arr[0] - avg);
    int c;
    for(int i = 0; i<listsize2; i++){
        if((abs(arr[i]-avg))<close){
            close = (abs(arr[i]-avg));
            c = i;
        }
    }
    return arr[c];
}

void printresult(int avg, int closest){
    cout<<"The closest number to average "<<avg<<" is "<<closest<<"."<<endl;
}