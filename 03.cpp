#include<iostream>
using namespace std;

int main(){

    // Patterns
    // We are using for loop because we will use majorly for loop in future also. We will loop only importants question in pattern
    // Will cover nested loops through patterns


    // 1. Square Pattern:
    // Example:
    // 1 2 3 4 
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4
    // (4 row, 4 col)
    
    // It shape will depended on n if n is 4 so it show above shape, And If n is 3 so it will be (3 by 3) mean 3 row and column
    // Hint: Outer loop will be run on 'n' times

    int n = 4;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cout << j;
        }
        cout << endl;
    }
    cout << endl;

    // WAP to print * and it will also depended with n like with above example.

    // -------------------------------------------
    // Scenario:
    // If loop starts from 1:
    // (i = 1; i <= n)
    // → it will run n times (1 to n)

    // If loop starts from 0:
    // (i = 0; i < n)
    // → it will also run n times (0 to n-1)

    // Important:
    // (i < n) and (i <= n-1) both are same
    // -------------------------------------------

    // WAP to print Alphabets instead of sterik or number and it will be similar at above examples:
    // Example:
    // A B C D
    // A B C D
    // A B C D

    for(int i = 1; i <= n; i++){
        char alphabet = 'A'; // It initialized in under the loop because every iteration of outer loop start SO the alphabet will be start with 'A'
        for(int j = 1; j <= n; j++){
            cout << alphabet;
            alphabet++;
        }
        cout << endl;
    }
    cout << endl;

    // WAP to print square pattern like that form:
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

    // WAP and print alphabets orderly and use the above example.

     int nNum = 3;
    char alha = 'A';
    for(int i = 1; i <= nNum; i++){
        for (int j = 1; j <= nNum; j++){
            cout << alha;
            alha++;
        }
        cout << endl;
    }

    // WAP to print triangle pattern like that:
    // Example:
    // *
    // * *
    // * * *
    // * * * *

    // So we are looking the row reflect the sterik count

    for (int i = 1; i <= 4; i++){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }


    



    return 0;
}