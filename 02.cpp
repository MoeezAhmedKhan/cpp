#include<iostream>
using namespace std;

int main(){

    // Conditional Statements if/else
    // Problem Statement: Check if number is positive or negative
    int number = 1;
    if(number < 0){ // <- Its a condition
        cout << number << " is negative" << endl; // <- Bloc of code
    }else{
        cout << number << " is positive" << endl;
    }
    // Problems: 
    // WAP to check person age and is this eligible for vote?
    // WAP to check if number is even or odd?

    // if/else if/else (for check multiple condition)
    // WAP to take marks of student and show the Grade according to the marks
    // Example: Marks 79 => Grade is A

    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 80 && marks <= 100) {
        cout << "Grade is A";
    } 
    else if (marks >= 70) {
        cout << "Grade is B";
    } 
    else if (marks >= 60) {
        cout << "Grade is C";
    } 
    else if (marks >= 50) {
        cout << "Grade is D";
    } 
    else {
        cout << "Grade is F";
    }
    cout << endl;

    // WAP to check character is lower or capital?
    // Two solution are avaible:
    // 1. Direct method with function
    char ch = 'z';
    if(isupper(ch)){
        cout << ch << " is upper case" << endl;
    }else{
        cout << ch << " is lower case" << endl;
    }
    //2. Check ASCII value of its character. Becuase ASCII value of Capital letters is 65 to 90
    if(ch >= 65 && ch <= 90){ // instead of ascii value we can use directly 'A' && 'Z'
        cout << ch << " is upper case accroding to ascii" << endl;
    }else{
        cout << ch << " is lower case accroding to ascii" << endl;
    }




    return 0;
}