#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    
    // Ask the user to type a word
    cout << "Enter a word: ";
    cin >> word;

    // Print the 2nd character (index 1)
    if (word.length() >= 2) {
        cout << "The 2nd character is: " << word[1] << endl;
    } else {
        cout << "Word too short to have a 2nd character." << endl;
    }

    // Find and print the length of the word
    cout << "Length of the word: " << word.length() << endl;

    // Replace 2 characters starting from the 3rd character (index 2)
    if (word.length() >= 3) {
        word.replace(2, 2, "--$--");
        cout << "After replacement: " << word << endl;
    } else {
        cout << "Word too short to perform replacement." << endl;
    }

    // Remove 3 characters from the end
    if (word.length() > 3) {
        word.erase(word.length() - 3, 3);
        cout << "After removing last 3 characters: " << word << endl;
    } else {
        cout << "Word too short to remove last 3 characters." << endl;
    }

    return 0;
}

// --- AI Assistant Used: Perplexity ---
// Q1) Was the code correct? (Yes/No and explain your answer)
    // Yes it was, the output satisfied all requirements.
// Q2) Was it readable and properly commented? explain your answer
    // Much like Chatgpt, unfamiliar techniques were used, so not entirely readable but decently commented.
// Q3) Were you able to explain each line of code? explain your answer
    // No I was not because some of the commands were unfamiliar to me.
// Q4) Did it use the same programming concepts we learned in class? Explain which concepts were used and which ones were unfamiliar. 
    // No it did not, we both use cout and cin but this ai seemed to love if/else statements.
// Q5) Terminal Output: (Paste the output of your program here)
/*
    Enter a word: lettuce
    The 2nd character is: e
    Length of the word: 7
    After replacement: le--$--uce
    After removing last 3 characters: le--$--
*/