#include<iostream>
using namespace std;

int main(){

    // Patterns
    // We are using for loop because it is mostly used in patterns
    // We will learn nested loops through pattern problems


    // 1. Square Pattern:
    // Example:
    // 1 2 3 4 
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4
    // (4 row, 4 col)
    
    // Shape depends on n
    // If n = 4 → 4x4 pattern
    // If n = 3 → 3x3 pattern

    // Hint: Outer loop runs n times (for rows)

    int n = 4;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cout << j;
        }
        cout << endl;
    }
    cout << endl;


    // 2. WAP to print * and it will also depended with n like with above example.
    // Solve It!

    // -------------------------------------------
    // Loop understanding:

    // If loop starts from 1:
    // (i = 1; i <= n)
    // → runs n times

    // If loop starts from 0:
    // (i = 0; i < n)
    // → also runs n times

    // Important:
    // (i < n) and (i <= n-1) are same
    // -------------------------------------------


    // 3. WAP to print Alphabets instead of asterisk or number and it will be similar at above examples:
    // Example:
    // A B C D
    // A B C D
    // A B C D

    for(int i = 1; i <= n; i++){
        char alphabet = 'A'; // reset alphabet for every new row
        for(int j = 1; j <= n; j++){
            cout << alphabet;
            alphabet++;
        }
        cout << endl;
    }
    cout << endl;


    // 4. WAP to print square pattern (Number increasing pattern) like that:
    // Example:
    // 1 2 3
    // 3 5 6
    // 7 8 9

    int myN = 3;
    int number = 1;
    for(int i = 1; i <= myN; i++){
        for (int j = 1; j <= myN; j++){
            cout << number;
            number++;
        }
        cout << endl;
    }
    cout << endl;


    // 5. WAP and print alphabets increasing pattern and use the above example.

     int nNum = 3;
    char alha = 'A';
    for(int i = 1; i <= nNum; i++){
        for (int j = 1; j <= nNum; j++){
            cout << alha;
            alha++;
        }
        cout << endl;
    }
    cout << endl;



    // Triangle Patterns

    // 6. WAP to print triangle pattern like that:
    // Example:
    // *
    // * *
    // * * *
    // * * * *

    // Logic:
    // row number = number of stars

    for (int i = 1; i <= 4; i++){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;


    // 7. WAP with same pattern but with numbers
    // Example:
    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4 

    for(int i = 1; i <= 6; i++){
        for(int j = 1; j <= i; j++){
            cout << i;
        }
        cout << endl;
    }

    // 8. WAP with same pattern but with alphabets
    // Example:
    // A
    // B B 
    // C C C 
    // D D D D

    char myAlpha = 'A';
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < i+1; j++){ // Loop runs i+1 time mean if i 0 so inner loop run i+1
            cout << myAlpha;
        }
        myAlpha++;
        cout << endl;
    }
    cout << endl;


    // 9. WAP to print triangle pattern like that:
    // Example:
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4

    for(int i = 1; i <= 4; i++){
        for(int j = 1; j <= i; j++){
            cout << j;
        }
        cout << endl;
    }
    cout << endl;


    // 10. WAP to print same above pattern but in reverse order:
    // Example:
    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1

    for(int i = 1; i <= 4; i++){
        for(int j = i; j >= 1; j--){
            cout << j;
        }
        cout << endl;
    }
    cout << endl;


    // 11. Write a program in C++ to print the following pattern:
    // Example:
    //     *
    //    **
    //   ***
    //  ****

    int totalRows = 4;
    for (int i = 1; i <= totalRows; i++)
    {  
        for (int j = totalRows - 1; j >= i ; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        
        cout << endl; 
    }
    cout << endl; 
    

    // Dry Run
    // i = 1
    // j = 3 , 3 >= 1 true
    // print " "
    // j--   , 2 >= 1 true
    // print " "
    // j--   , 1 >= 1 true
    // print " "
    // j--   , 0 >= 1 false

    // k = 1 
    // i = 1 , 1 <= 1 true
    // print "*"
    // k++   , 2 <= 1 false

    // ---------------------

    // i = 2
    // j = 3 , 3 >= 2 true
    // print " "
    // j--   , 2 >= 2 true
    // print " "
    // j--   , 1 >= 2 false

    // k = 1
    // i = 2 , 1 <= 2 true
    // print "*"
    // k++   , 2 <= 2 true
    // print "*"
    // k++   , 3 <= 2 false

    // ---------------------

    // i = 3
    // j = 3 , 3 >= 3 true
    // print " "
    // j--   , 2 >= 3 false

    // k = 1
    // i = 3 , 1 <= 3 true
    // print "*"
    // k++   , 2 <= 3 true
    // print "*"
    // k++   , 3 <= 3 true
    // print "*"
    // k++   , 4 <= 3 false

    // ---------------------

    // i = 4
    // j = 3 , 3 >= 4 false   (no space)

    // k = 1
    // i = 4 , 1 <= 4 true
    // print "*"
    // k++   , 2 <= 4 true
    // print "*"
    // k++   , 3 <= 4 true
    // print "*"
    // k++   , 4 <= 4 true
    // print "*"
    // k++   , 5 <= 4 false


    // 12. WAP to print:

    //      1
    //     12
    //    123
    //   1234

    for(int i = 1; i <= totalRows; i++){
        for (int j = totalRows - 1; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << k;
        }
        cout << endl;
        
    }
    cout << endl;


    // 13. WAP to print:

    // 1
    // 2 3
    // 3 4 5
    // 4 5 6 7

    for (int i = 1; i <= totalRows; i++)
    {
        int myI = i;
        for (int j = 1; j <= i; j++)
        {
            cout << myI;
            myI++;
        }
        cout << endl;
        
    }
    cout << endl;


    // Floyd's Triangle Patterns:
    // Floyd's Triangle is a right-angled triangular array of natural numbers,

    // 14. WAP to print this Floyd's Pattern
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10 

    int myCount = 1;
    for (int i = 1; i <= totalRows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << myCount;
            myCount++;
        }
        cout << endl;
        
    }
    cout << endl;


    // 15. WAP to print this pattern
    // A 
    // B C 
    // D E F 
    // G H I J

    char myLetter = 'A';
    for (int i = 1; i <= totalRows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << myLetter;
            myLetter++;
        }
        cout << endl;
        
    }
    cout << endl;

    // 16. WAP to print this reverse triangle pattern
    // A
    // B A 
    // C B A 
    // D C B A


    char myLettr = 'A';
    for (int i = 1; i <= totalRows; i++)
    {
        char myTempLettr = myLettr;
        for (int j = 1; j <= i; j++)
        {
            cout << myTempLettr;
            myTempLettr--;
        }
        myLettr++;
        cout << endl;
        
    }
    cout << endl;

    // Inverted Traingle Pattern

    // 17. WAP to print this pattern
    // 1 1 1 1
    //   2 2 2
    //     3 3
    //       4

    int myTempNum = totalRows;
    for(int i = 1; i <= totalRows; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << " ";
        } 
        
        for (int j = myTempNum; j >= i; j--)
        {
            cout << i;
        }
     
        cout << endl;
        
    }
    
    




    
    






    



    return 0;
}