/*
Sabed Chowdhury
Feb 2, 2026
lab 4, string and string methods
*/
#include<iostream>
#include<string>

using namespace std;

int main(){
    cout<<"\n ---- Example 1: string indexing ----"<<endl;
    // each character in a string can be accessed by its index number
    // index starts from 0, most-left character
    string firstname = "Peter";
    cout<<"The 4th character of the first name = "<<firstname[3]<<endl;
    cout<<"The 3rd character of the first name = "<<firstname.at(2)<<endl;

    cout<<"\n ---- Example 2: string length ----"<<endl;
    // length method returns the amount of characters in a string
    int firstname_length = firstname.length();
    cout<<"First name has "<<firstname_length<<" characters"<<endl;

    cout<<"\n ---- Example 3: add or concatenate strings ----"<<endl;
    // + operator adds or concatenates strings
    string color = "orange";
    string animal = "cat";
    string addstrings = "My " + animal + " loves " + color + " toys";
    cout<<addstrings<<endl;
    cout<<color+animal<<endl;

    cout<<"\n ---- Example 4: subtract characters from a string ----"<<endl;
    // substr() method subtracts(extracts) characters from a string
    // substr(index from where the subtraction will happen, amount of characters to be extracted)
    string city = "Bayside";
    string sub_char = city.substr(3,4); // subtract 4 characters from index 3
    cout<<"Subtracted characters = "<<sub_char<<endl;

    cout<<"\n ---- Example 5: insert characters into a string ----"<<endl;
    // insert new characters into a string
    // insert(index from where the new character will be inserted, characters to be inserted)
    // insert Queens- into Bayside. The result should be = BayQueens-side
    city.insert(3, "Queens-");
    cout<<"After insert method = "<<city<<endl;

    cout<<"\n ---- Example 6: add characters to the end of a string ----"<<endl;
    // append method adds characters to the end of a string
    string fullname = "Peter Pan";
    // add the word "@neverland" to the end of the full name. The result should be Peter 'Pan@neverland'
    fullname.append("@neverland");
    cout<<"After append method = "<<fullname<<endl;

    cout<<"\n ---- Example 7: replace characters in a string ----"<<endl;
    // replace method replaces characters in a string
    // replace(index where the replacement will happen, amount of characters to be replaced, string of newly replaced characters)
    string word = "engineering";
    cout<<"Original word = "<<word<<endl;
    // replace the word 'ee' with 'FUTURE'. The result will be "enginFUTUREring"
    word.replace(5,2,"FUTURE");
    cout<<"After the replace method = "<<word<<endl;

    cout<<"\n ---- Example 8: erase characters in a string ----"<<endl;
    // erase(index where the erase will happen, amount of characters to be erased)
    word = "layout";
    cout<<"Original word = "<<word<<endl;
    // erase 'you' from word. The result should be 'lat'
    word.erase(2,3); // erase three characters from index 2
    cout<<"After erase method = "<<word<<endl;

    cout<<"\n ---- Example 9: find characters in a string ----"<<endl;
    // find method returns the index of the first found character
    word = "characters";
    // find letter 'a' from word
    int index_a = word.find("a");
    cout<<"Index for a = "<<index_a<<endl;
    // find the index for 'act'
    cout<<"Index for 'act' = "<<word.find("act")<<endl;

    cout<<"\n ---- EXERCISE ---- "<<endl;

    cout<<"Enter a new word: "<<endl;
    cin>>word;
    cout<<"2nd character:\t"<<word[1]<<endl;
    cout<<"word has:\t"<<word.length()<<endl;
    cout<<"Replace word:\t"<<word.replace(2,2,"--$--")<<endl;
    cout<<"Remove end characters:\t"<<word.erase(word.length()-3,3)<<endl;

    return 0;
}