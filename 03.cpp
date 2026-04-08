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
        for(int j = i; j <= i; j++){
            cout << j;
        }
        cout << endl;
    }


    



    return 0;
}