/*
Sabed Chowdhury
May 4, 2026
Homework 10 - File Streaming
*/

#include<iostream>
#include<fstream>
using namespace std;

void read(string filename){
    ifstream fin;
    string line;
    fin.open(filename);
    while(getline(fin, line)){
        cout<<line<<endl;
    }
    fin.close();
}

void words(string filename){
    ifstream fin;
    ofstream fout;
    string line;
    int count = 0;
    fin.open(filename);
    while(getline(fin, line)){
        for(int i = 0; i<line.length();i++){
            if(line[i] != ' '){
                continue;
            }else{
                count++;
            }
        }
        count++;
    }
    fout.open("wordcounts.txt");
    fout<<"Sabed Chowdhury\n";
    fout<<"Total number of words:";
    fout<<count;
    fout.close();
    fin.close();
}

void word(string filename, string filename2){
    ifstream fin;
    ofstream fout;
    string line;
    string word = "Earth";
    int count = 0;
    int index = -1;
    int check = 0;
    fin.open(filename);
    while(getline(fin, line)){
        index = line.find(word, 0);
        if(index != -1){
            count++;
        }
    }
    fout.open(filename2, ios::app);
    fout<<"\nThe word 'Earth' appears ";
    fout<<count;
    fout<<" times in the document.";
    fout.close();
    fin.close();
}

int main(){
    read("Remembering_Earth.txt");
    words("Remembering_Earth.txt");
    word("Remembering_Earth.txt", "wordcounts.txt");
    return 0;
}