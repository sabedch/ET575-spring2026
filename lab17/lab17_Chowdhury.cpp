/*
Sabed Chowdhury
April 16, 2026
Lab 17, passing array in a function
*/

#include<iostream>
using namespace std;

int sum(int *n, int size){
    int s = 0;
    for(int i =0; i<size; i++){
        if(n[i]%2==0){
            s += n[i];
        }
    }
    return s;
}

int neg(int *arr, int size){
    int c = 0;
    for(int i = 0; i<size;i++){
        if(arr[i]<0){
            c++;
        }
    }
    return c;
}

int main(){
    int arr[] = {1,-2,-3,4,5,-6,7,8,-9,10};
    int size = (sizeof(arr))/sizeof(int);
    cout<<sum(arr,size)<<endl;
    cout<<neg(arr,size)<<endl;
}