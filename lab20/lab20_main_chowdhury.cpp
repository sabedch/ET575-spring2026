/*
Sabed Chowdhury
lab 20 parsing and file handling
*/
#include<iostream>
#include"lab20_function_chowdhury.cpp"

using namespace std;

int main(){
    cout<<"\n----- Example 1: collect a number ---"<<endl;
    int n = collectnum();
    cout<<"Collected number = "<<n<<endl;

    cout<<"\n----- Example 2: reading a file ---"<<endl;
    readfile("samplefile.txt");

    cout<<"\n----- Example 3: writing a file ---"<<endl;
    writefile("intro.txt");

    cout<<"\n----- Example 4: append data ---"<<endl;
    // appendmsg("samplefile.txt", "Sabed Chowdhury");

    cout<<"\n----- Example 5: check if a file exists ---"<<endl;
    // checkfile("example1.txt");
    checkfile("samplefile.txt");

    cout<<"\n----- EXERCISE ---"<<endl;
    write("data_user.txt");
    append("data_user.txt", "Hi :)");
    read("data_user.txt");

    return 0;
}