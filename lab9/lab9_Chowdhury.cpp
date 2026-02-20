#include <iostream>

using namespace std;

int main() {
    double celsius;
    double fahrenheit;
    int num;

    cout<<"1. Celsius to Fahrenheit"<<endl;
    cout<<"2. Fahrenheit to Celsius"<<endl;
    cout<<"Select an option from 1 to 2: ";
    cin>>num;
    cout<<"\n";

    switch (num)
    {
    case 1:
        cout<<"Enter the Celsius to be converted: ";
        cin>>celsius;
        fahrenheit = celsius * (9.0/5.0) + 32.0;
        cout<<"\n"<<celsius<<" Celsius is equal to "<<fahrenheit<<" Fahrenheit"<<endl;
        break;
    case 2:
        cout<<"Enter the Fahrenheit to be converted: ";
        cin>>fahrenheit;
        celsius = (fahrenheit - 32.0)*(5.0/9.0);
        cout<<"\n"<<fahrenheit<<" Fahrenheit is equal to "<<celsius<<" Celsius"<<endl;
        break;
     default:
        cout<<"Invalid input. Please enter a valid option."<<endl;
        break;
    }

    // Ask user for input
    /*
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    */

    // Convert Celsius to Fahrenheit
    /*
    fahrenheit = (9.0 / 5.0) * celsius + 32;

    // Display result
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
    */
    return 0;
}

// 1. Does the AI code use C++ concepts you're unfamiliar with? Explain.
    // No it does not. I am familiar with all concepts the AI code uses.

// 2. Are there any issues or improvements you noticed? Explain.
    // Mostly no, just that their is no wrong input error.
    // When user inputs 'fsd', the default value of celcius is 0.

// 3. What test cases did you try, and why? Explain.
    // I tried 20 and it worked. I tried 'fsd' and the code ran off default values -
    // thus giving a result that has no real meaning.
    // This is similar to the fact that AI has no understanding of numbers
    // It will just give numbers that sound right.

// Step 3. Add user input
    // The original AI code satisfies step 3 requirements so no changes have been made.