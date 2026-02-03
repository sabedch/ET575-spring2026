#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;

    // Ask user for a word
    cout << "Enter a word: ";
    cin >> word;

    // Print the 2nd character (index 1)
    if (word.length() >= 2) {
        cout << "2nd character: " << word[1] << endl;
    } else {
        cout << "Word is too short to get a 2nd character." << endl;
    }

    // Find and print the length of the word
    cout << "Length of the word: " << word.length() << endl;

    // Replace 2 characters starting from the 3rd character with "-- $ --"
    if (word.length() >= 4) {
        string replaced = word;
        replaced.replace(2, 2, "-- $ --");
        cout << "After replacement: " << replaced << endl;
    } else {
        cout << "Word is too short for replacement." << endl;
    }

    // Remove 3 characters from the end of the word
    if (word.length() >= 3) {
        string shortened = word.substr(0, word.length() - 3);
        cout << "After removing last 3 characters: " << shortened << endl;
    } else {
        cout << "Word is too short to remove 3 characters." << endl;
    }

    return 0;
}

// --- AI Assistant Used: ChatGPT ---
// Q1) Was the code correct? (Yes/No and explain your answer)
    // Yes, the code was 80% correct. The last part did not remove the last 3 letters properly.
// Q2) Was it readable and properly commented? explain your answer
    // If I were more experienced in C++, I would say it is readable and properly commented because I can follow what the AI did.
// Q3) Were you able to explain each line of code? explain your answer
    // No I was not, the ai used skills that I do not have yet.
// Q4) Did it use the same programming concepts we learned in class? Explain which concepts were used and which ones were unfamiliar. 
    // Not entirely, we both used cout and cin but the ai used if/else statements.
// Q5) Terminal Output: (Paste the output of your program here)
   
/*
    Enter a word: lettuce
    2nd character: e
    Length of the word: 7
    After replacement: le-- $ --uce
    After removing last 3 characters: lett
*/