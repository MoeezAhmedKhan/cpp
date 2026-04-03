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


    // Loops: It is used to repeat a block of code until a certain condition is met.
    // Types of loops: while, for, do-while

    // 1. WAP to print numbers from 1 to 10 using while loop
    int i = 1; // initialization
    while (i <= 10) // condition
    {
        cout << "Number " << i << endl;
        i++; // updation
    }

    // for(initialization, condition, updation){work}
    for(int i = 0; i < 10; i++){
        // cout << "Using For Loop " << i << endl; // 0 to 9
        cout << "Using For Loop " << i + 1 << endl; // 1 to 10
    }

    // 2. WAP to sum of number 1 to n
    int n = 5;
    int count = 1;
    int sum = 0;

    // while (count <= n)
    // {
    //     sum = sum + count;
    //     count++;
    // }
    // cout << "Sum of " << n << " is " << sum << endl;

    for(int i = 1; i <= n; i++){
        sum = sum+i;
    }
    cout << "For Sum of " << n << " is " << sum << endl;

    // Break keyword is used to immediately terminate (exit) a loop or switch statement.
    // Example

    int myi = 1;
    while (myi <= 100)
    {
        cout << myi << endl;
        myi++;
        if(myi == 10){
            break;
        }
    }

    // Continue is a jump statement used to skip the current iteration of a loop and continue with the next iteration.

     int no = 1;
    // Loop from 1 to 10
    while (no <= 10)
    {

        // If the number is even, skip iteration to avoid printing it
        if (no % 2 == 0)
        {
            no++;
            continue;
        }
        cout << "Output only odd number " << no << endl;
        no++;
    }

    // 3. WAP to sum of odd numbers from 1 to n
    int nmber = 30;
    int oddSum = 0;
    int a = 1;
    while (a <= nmber)
    {
        if(a % 2 != 0){
            oddSum+=a;
        }
        a++;
    }
    cout << "Sum of Odd from 1 to " << nmber << " is " << oddSum << endl; 


    // Problem Statements
    // 1) WAP to print numbers from 1 to n, but stop the loop when the sum of numbers becomes greater than 20.
    // Example:

    // n = 10
    // Output:
    // 1
    // 2
    // 3
    // 4
    // 5

    // (why? 1+2+3+4+5 = 15 → break) It is break when sum is 15 because when next iteration will sum up so it will be 21 thats why it break on 15

    // Solution:
    int nNumber = 20;
    int countSum = 0;
    for (int i = 1; i <= nNumber; i++){
        countSum+=i;
        if(countSum > 20){
            break;
        }
        cout << "i is " << i << endl;
    }
    

    // 2) WAP to print odd numbers from 1 to n, but skip printing when the number is divisible by 5.

    // Example:

    // n = 20
    // Output:
    // 1 3 7 9 11 13 17 19

    // (5, 15 skip it)

    // Solution
    for(int i = 1; i <= 20; i++){
        if(i % 2 != 0){
            if(i % 5 == 0){
                continue;
            }
            cout << "Only Odd Number Without its Divisible by 5 : " << i << endl;
        }
    }


    // 3) WAP to calculate sum of numbers from 1 to n, but stop adding when you encounter a number divisible by 7.

    // Example:

    // n = 20

    // Process:

    // 1+2+3+4+5+6 = 21
    // (stop at 7)

    // Output:
    // Sum = 21

    // Solution

    int myN = 20;
    int myI = 1;
    int mySm = 0;
    while (myI <= myN)
    {
        if(myI % 7 == 0){
            break;
        }
        mySm+=myI;
        myI++;
    }
    cout << "Sum without adding divisible by 7 is : " << mySm << endl;
     


    
    




    return 0;
}