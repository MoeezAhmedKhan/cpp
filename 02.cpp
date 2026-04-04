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
     

    // do while: It run first then check condition on second iteration

    // do{
    //     cout << "Do While Run"; // It will run One time difinetly even condition is false
    // }while(false);

    int doI = 1;
    do{
        cout << "DoI is " << doI << endl;
        doI++;
    }while(doI <= 10);
    

    // Solve More Problems:
    // Q1. Check if a number is prime or not?
    // Suppose we are checking a number x if its is prime so it will have only 2 factors. Its mean it will occus only 1 and its number table.
    // so when can check only those numbers which is required to check like 2 to n-1. If it is exist in this range so it will be non prime.

    int xNumber = 4;
    bool xCheck = false;
    for(int i = 2; i <= xNumber - 1; i++){
        if(xNumber%i == 0){
            xCheck = true;
            break;
        }
    }
    cout << xNumber << (xCheck ? " is not prime." : " is prime.") <<  endl; 

    //  Optimized approach:
    // no need to check till n-1

    // Reason:
    // factors always come in pairs (a × b = n)

    // example: 36
    // 2 × 18
    // 3 × 12
    // 4 × 9
    // 6 × 6  ← middle point

    // What is √n (under root n)?
    // √n means a number which when multiplied by itself gives n
    // example: √36 = 6  (because 6 × 6 = 36)

    // Why √n is important?
    // in factor pairs, numbers move towards each other
    // and meet at √n (middle point)

    // after √n, pairs just repeat in reverse:
    // 9 × 4
    // 12 × 3
    // 18 × 2

    // so after √n, we are not getting anything new

    // Important:
    // in every pair, one number is small and one is big
    // the small number is always ≤ √n

    // so if a number has a factor,
    // at least one factor will be found before or at √n

    // that's why:
    // we only check till √n
    // (i * i <= n means same thing as i <= √n)

    // if no divisor found till √n:
    // then number is definitely prime

    // √n is the middle point of factor pairs
    // so we only check till √n

    int yNumber = 4;
    bool yCheck = false;

    for(int i = 2; i * i <= yNumber; i++){
        if(yNumber % i == 0){
            yCheck = true; // divisor found
            break;
        }
    }

    cout << yNumber << (yCheck ? " is not prime." : " is prime.") << endl;



    // -------------------------------------------------------------

    // Introduction of Nested Loops:
    // Suppose we want pattern like this:
    // * * * *
    // * * * *
    // * * * *
    // (3 rows and 4 columns) & 1 row is a single line

    for(int i = 1; i <= 3; i++){ // row or single line
        for(int j = 1; j <= 4; j++){ // col
            cout << "*";
        }
        cout << endl;
    }

    // Outer loops define how many lines will be in loop
    // Inner loop define how many pattern build in single line

    // Explanation:
    // i = 1 → j runs 1 to 4 → ****
    // i = 2 → j runs 1 to 4 → ****
    // i = 3 → j runs 1 to 4 → ****


    // One More Problem:
    // WAP to find factorial of N number?
    // Factorial of a number means multiplying all positive integers from 1 up to that number.

    // Example:
    // 5! = 5 × 4 × 3 × 2 × 1 = 120

    // Note:
    // Factorial of 0 is always 1 (0! = 1)

    int findFactorial = 5;
    int factResult = 1; /// factResult is initialized with 1, because if we start with 0, result will always be 0, (0 multiplied by anything is always 0)
    for(int i = findFactorial; i >= 1; i--){
        factResult*=i;
    } 
    cout << findFactorial << " of factorial is " << factResult;


    return 0;
}