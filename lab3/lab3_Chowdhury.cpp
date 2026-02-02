/*
Sabed Chowdhury
Jan 28, 2026
lab 3, numerical variables
*/

#include<iostream>

using namespace std;

int main(){
    cout<<"\n------ Example 1: ------"<<endl;
    // declare variables
    int number = 10.9;
    float n = 7.8;
    
    cout<<"number = "<<number<<endl;
    cout<<"n = "<<n<<endl;

    cout<<"\n ------ Example 2: numerical operators ------"<<endl;
    // numerical operator, + - * / 
    // % (modulus) returns the remainder of a division
    number  = 5;
    int number2 = 2;
    cout<<"sum = "<<number + n<<endl;
    cout<<"without casting, division = "<<number / number2<<endl;
    // casting convert from one data type into another data type
    cout<<"division = "<< number/static_cast<float>(number2) <<endl;

    // % modulus
    cout<<"mod of two numbers = "<<number%number2 <<endl;

    cout<<"\n ------ Example 3: assignment operators ------"<<endl;
    // assignment operators assign a value to a variable itself
    // ++ increment by 1
    cout<<"original number = "<<number<<endl;
    number++;
    cout<<"updated number = "<<number<<endl;
    // -- decrement by 1
    cout<<"original number2 = "<<number2<<endl;
    number2--;
    cout<<"updated number2 = "<<number2<<endl;

    //+=
    number = 10;
    cout<<"original number = "<<number<<endl;
    number += 5;
    cout<<"updated number = "<<number<<endl;

    // -=
    number -= 8; // number = number - 8
    cout<<"updated number with -= 8 --> "<<number<<endl;

    cout<<"\n ------ Example 4: comparison operators ------"<<endl;
    // == compare if numbers are equal
    // != compare if numbers are not equal
    // > greater than
    // < less than
    // >= greater than or equal to
    // <= less than or equal to
    // C++ returns 1 for True and 0 for False

    number = 3;
    number2 = 8;

    cout<<"are number and number2 equal? "<<(number == number2)<<endl;

    bool check1 = number != number2;
    bool check2 = number > number2;

    // print results
    cout<<"are number and number2 different? "<<check1<<endl;
    cout<<"is number greater than number2? "<<check2<<endl;

    cout<<"\n ----- Example 5: logical operators ----- "<<endl;
    // determine the logic between values
    // && AND logic. returns true if all statements are TRUE
    // || OR logic. returns TRUE if at least one of the statements is TRUE
    // ! NOT(inverter) logic. returns TRUE from a FALSE or viceverse
    number = 3;
    number2 = 5;

    bool check3 = number < number2; // check3 = true(1)
    bool check4 = number >= number2; // check4 = false(0)
    bool check5 = number2 != 10; // check5 = true(1)
    bool check6 = number == 3; // check6 = true(1)

    bool logicalcom = check3 && check5 && check6; // true && true && true = true
    bool logicalcom2 = check4 && check5 && check6; // false && true && true = false
    bool logicalcom3 = check4 || check5 || check6; // false && true && true = true
    bool logicalcom4 = !logicalcom; // !true = false

    // print result
    cout<<"logical comparison 1 = "<<logicalcom<<endl;
    cout<<"logical comparison 2 = "<<logicalcom2<<endl;
    cout<<"logical comparison 3 = "<<logicalcom3<<endl;
    cout<<"logical comparison 4 = "<<logicalcom4<<endl;

    cout<<"----- EXERCISE -----"<<endl;
    cout<<"\n--- PART 1 ---";

    int a;
    int b;

    cout<<"\nEnter integer 1: ";
    cin>>a;
    cout<<"Enter integer 2: ";
    cin>>b;

    cout<<"\nThe sum of these integers are:\t"<<a+b;
    cout<<"\nThe difference between these integers are:\t"<<a-b;
    cout<<"\nThe product of these two integers are:\t"<<a*b;
    cout<<"\nUsing division, the result is:\t"<<a/b;
    cout<<"\nThe remainder of division is:\t"<<a%b<<endl;

    cout<<"\n--- PART 2 ---"<<endl;

    a += 10;
    b -= 5;

    cout<<"\nThe value of a is:\t"<<a;
    cout<<"\nThe value of b is:\t"<<b<<endl;

    cout<<"\n--- PART 3 ---"<<endl;

    bool checka = a > b;
    bool checkb = a == b;
    bool checkc = a != b;
    bool checkd = a > 0 && b > 0;
    bool checke = a < 0 || b < 0;
    bool checkf = a != b;

    cout<<"\nIs "<<a<<" greater than "<< b<<"? "<<checka;
    cout<<"\nIs "<<a<<" equal to "<< b<<"? "<<checkb;
    cout<<"\nIs "<<a<<" not equal to "<< b<<"? "<<checkc;
    cout<<"\nAre both "<<a<<" and "<<b<<" positive numbers? "<<checkd;
    cout<<"\nIs either "<<a<<" or "<< b<<" a negtive number? "<<checke;
    cout<<"\nIs "<<a<<" not greater than "<< b<<"? "<<checkf<<endl;

    return 0;
    
}