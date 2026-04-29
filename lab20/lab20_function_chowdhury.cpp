/*
Sabed Chowdhury
lab 20 parsing and file handling
*/
#include<iostream>
using namespace std;

// example 1: using cin to validate a data type
// if the input is a proper data type, cin will set a state to 'goodbit'
// if the input is not a proper data type, cin will set a state to 'failbit'

// function to collect and return an integer
int collectnum(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(cin.fail()){
        // clear the failbit
        cout<<"Wrong data type! "<<endl;
        cin.clear();
        cin.ignore(10000,'\n');
        // recollect the number using recursive function
        return collectnum();
    }
    else{
        return n;
    }

}

// example 2: read file
// input file = ifstream
// output file = ofstream
// fstream has ifstream and ofstream
// after the library, we can declare an ifstream and ofstream objects
#include<fstream>
void readfile(string filename){
    // declare an object to handle ifstream
    ifstream fin;
    // declare a variable to hold each line of the read file
    string line;
    // declare a variable as a line counter
    int linecounter = 1; // first line
    // open the file
    fin.open(filename);

    // use a loop to go through each line in the opened file
    while(getline(fin, line)){
        cout<<"Sentence "<<linecounter<<" = "<<line<<endl;
        linecounter++;
    }

    // close the file input when finished reading
    fin.close();
}

// example 3: write files
// function to write or create a new file
void writefile(string filename){
    // declare an object to handle output files, fout
    ofstream fout;
    // open the file
    // if the file exists, it will overwrite
    // if the file doesn't exist, it will create a new file
    fout.open(filename);
    // write "sabed chowdhury" in the first line of the file
    fout<<"Lab 20, file streaming\n";
    fout<<"April 27, 2026\n";
    // close the file output when finished writing
    fout.close();
}

// example 4: append data into an existing file
void appendmsg(string filename, string msg){
    ofstream fout;
    fout.open(filename, ios::app);
    // append the following data
    for(int n = 3; n>=0 ; n--){
        fout<<n<<endl;
    }
    fout<<"GAME OVER\n"<<msg<<endl;

    fout.close();
}

// Example 5: check if a file exists
void checkfile(string filename){
    ifstream fin;
    fin.open(filename);

    // if the file name doesn't exist in the root directory, exit the function
    if(fin.fail()){
        cout<<"File "<<filename<<" doesn't exist!"<<endl;
        exit(1);
    }

    // if the file exists, read all the lines in the file
    string eachline;
    while(getline(fin,eachline)){
        cout<<"Line 1 = "<<eachline<<endl;
    }

    // close the file
    fin.close();
}

// EXERCISE
void write(string filename){
    ofstream fout;
    fout.open(filename);
    fout<<"This is my output file - Sabed Chowdhury.\n";
    fout.close();
}

void append(string filename, string msg){
    ofstream fout;
    fout.open(filename, ios::app);
    fout<<msg<<endl;
    fout.close();
}

void read(string filename){
    ifstream fin;
    string line;
    int linecounter = 1;
    fin.open(filename);
    while(getline(fin,line)){
        cout<<"Sentence "<<linecounter<<" = "<<line<<endl;
        linecounter++;
    }
    fin.close();
}